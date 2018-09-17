#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include <unordered_set>
#include <string>
namespace SDK
{
template<typename Fn>
inline Fn GetVFunction(const void *instance, std::size_t index)
{
	auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<Fn>(vtable[index]);
}

class UObject;

enum class EInternalObjectFlags : int32_t
{
	None = 0,
	//~ All the other bits are reserved, DO NOT ADD NEW FLAGS HERE!
	ReachableInCluster = 1 << 23, ///< External reference to object in cluster exists
	ClusterRoot = 1 << 24, ///< Root of a cluster
	Native = 1 << 25, ///< Native (UClass only). 
	Async = 1 << 26, ///< Object exists only on a different thread than the game thread.
	AsyncLoading = 1 << 27, ///< Object is being asynchronously loaded.
	Unreachable = 1 << 28, ///< Object is not reachable on the object graph.
	PendingKill = 1 << 29, ///< Objects that are pending destruction (invalid for gameplay but valid objects)
	RootSet = 1 << 30, ///< Object will not be garbage collected, even if unreferenced.
	HadReferenceKilled = 1 << 31, ///< Object had a reference null'd out by markpendingkill

	GarbageCollectionKeepFlags = Native | Async | AsyncLoading,
	//~ Make sure this is up to date!
	AllFlags = ReachableInCluster | ClusterRoot | Native | Async | AsyncLoading | Unreachable | PendingKill | RootSet | HadReferenceKilled
};
struct FUObjectItem
{

	// Pointer to the allocated object
	class UObject* Object;
	// Internal flags
	int32_t Flags;
	// UObject Owner Cluster Index
	int32_t ClusterRootIndex;
	// Weak Object Pointer Serial number associated with the object
	int32_t SerialNumber;
	inline  bool IsUnreachable() const
	{
		return !!(Flags & int32_t(EInternalObjectFlags::Unreachable));
	}
	inline bool IsPendingKill() const
	{
		return !!(Flags & int32_t(EInternalObjectFlags::PendingKill));
	}
};
class FChunkedFixedUObjectArray
{
public:
	enum
	{
		NumElementsPerChunk = 65 * 1024,
	};

	FUObjectItem** Objects;
	FUObjectItem* PreAllocatedObjects;
	int32_t MaxElements;
	int32_t NumElements;
	int32_t MaxChunks;
	int32_t NumChunks;
	inline int32_t Num() const
	{
		return NumElements;
	}
	inline bool IsValidIndex(int32_t Index) const
	{
		return Index < Num() && Index >= 0;
	}

	FUObjectItem const* GetItemByIndex(int32_t Index) const
	{
		const int32_t ChunkIndex = Index / NumElementsPerChunk;
		const int32_t WithinChunkIndex = Index % NumElementsPerChunk;
		FUObjectItem* Chunk = Objects[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}
	FUObjectItem * GetItemByIndex(int32_t Index)
	{
		const int32_t ChunkIndex = Index / NumElementsPerChunk;
		const int32_t WithinChunkIndex = Index % NumElementsPerChunk;
		FUObjectItem* Chunk = Objects[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}
	FUObjectItem* GetObjectPtr(int32_t Index)
	{
		const int32_t ChunkIndex = Index / NumElementsPerChunk;
		const int32_t WithinChunkIndex = Index % NumElementsPerChunk;
		FUObjectItem* Chunk = Objects[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}

	inline UObject* GetByIndex(int32_t index) const
	{
		return GetItemByIndex(index)->Object;
	}
};

class FUObjectArray
{
public:
	typedef FChunkedFixedUObjectArray TUObjectArray;
	int32_t ObjFirstGCIndex;
	int32_t ObjLastNonGCIndex;
	int32_t MaxObjectsNotConsideredByGC;
	bool OpenForDisregardForGC;
	TUObjectArray ObjObjects;
};

template<class T>
class TArray
{
	friend class FString;

public:
	inline TArray()
	{
		Data = nullptr;
		Count = Max = 0;
	};

	inline int Num() const
	{
		return Count;
	};

	inline T& operator[](int i)
	{
		return Data[i];
	};

	inline const T& operator[](int i) const
	{
		return Data[i];
	};

	inline bool IsValidIndex(int i) const
	{
		return i < Num();
	}

private:
	T* Data;
	int32_t Count;
	int32_t Max;
};

class FNameEntry
{
public:
	static const auto NAME_WIDE_MASK = 0x1;
	static const auto NAME_INDEX_SHIFT = 1;

	int32_t Index;
	char UnknownData00[0x04];
	FNameEntry* HashNext;
	union
	{
		char AnsiName[1024];
		wchar_t WideName[1024];
	};

	inline const int32_t GetIndex() const
	{
		return Index >> NAME_INDEX_SHIFT;
	}

	inline bool IsWide() const
	{
		return Index & NAME_WIDE_MASK;
	}

	inline const char* GetAnsiName() const
	{
		return AnsiName;
	}

	inline const wchar_t* GetWideName() const
	{
		return WideName;
	}
};

template<typename ElementType, int32_t MaxTotalElements, int32_t ElementsPerChunk>
class TStaticIndirectArrayThreadSafeRead
{
public:
	inline size_t Num() const
	{
		return NumElements;
	}

	inline bool IsValidIndex(int32_t index) const
	{
		return index < Num() && index >= 0;
	}

	inline ElementType const* const& operator[](int32_t index) const
	{
		return *GetItemPtr(index);
	}

private:
	inline ElementType const* const* GetItemPtr(int32_t Index) const
	{
		const auto ChunkIndex = Index / ElementsPerChunk;
		const auto WithinChunkIndex = Index % ElementsPerChunk;
		const auto Chunk = Chunks[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}

	enum
	{
		ChunkTableSize = (MaxTotalElements + ElementsPerChunk - 1) / ElementsPerChunk
	};

	ElementType** Chunks[ChunkTableSize];
	int32_t NumElements;
	int32_t NumChunks;
};

using TNameEntryArray = TStaticIndirectArrayThreadSafeRead<FNameEntry, 2 * 1024 * 1024, 16384>;

struct FName
{
	union
	{
		struct
		{
			int32_t ComparisonIndex;
			int32_t Number;
		};

		uint64_t CompositeComparisonValue;
	};

	inline FName()
		: ComparisonIndex(0),
		  Number(0)
	{
	};

	inline FName(int32_t i)
		: ComparisonIndex(i),
		  Number(0)
	{
	};

	FName(const char* nameToFind)
		: ComparisonIndex(0),
		  Number(0)
	{
		static std::unordered_set<int> cache;

		for (auto i : cache)
		{
			if (!std::strcmp(GetGlobalNames()[i]->GetAnsiName(), nameToFind))
			{
				ComparisonIndex = i;
				
				return;
			}
		}

		for (auto i = 0; i < GetGlobalNames().Num(); ++i)
		{
			if (GetGlobalNames()[i] != nullptr)
			{
				if (!std::strcmp(GetGlobalNames()[i]->GetAnsiName(), nameToFind))
				{
					cache.insert(i);

					ComparisonIndex = i;

					return;
				}
			}
		}
	};

	static TNameEntryArray *GNames;
	static inline TNameEntryArray& GetGlobalNames()
	{
		return *GNames;
	};

	inline const char* GetName() const
	{
		return GetGlobalNames()[ComparisonIndex]->GetAnsiName();
	};

	inline bool operator==(const FName &other) const
	{
		return ComparisonIndex == other.ComparisonIndex;
	};
};

class FString : public TArray<wchar_t>
{
public:
	inline FString()
	{
	};

	FString(const wchar_t* other)
	{
		Max = Count = *other ? std::wcslen(other) + 1 : 0;

		if (Count)
		{
			Data = const_cast<wchar_t*>(other);
		}
	};

	inline bool IsValid() const
	{
		return Data != nullptr;
	}

	inline const wchar_t* c_str() const
	{
		return Data;
	}

	std::string ToString() const
	{
		const auto length = std::wcslen(Data);

		std::string str(length, '\0');

		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

		return str;
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	inline TEnumAsByte()
	{
	}

	inline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	inline operator TEnum() const
	{
		return (TEnum)value;
	}

	inline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value;
};

class FScriptInterface
{
private:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	inline UObject* GetObject() const
	{
		return ObjectPointer;
	}

	inline UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}

	inline void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	inline InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}

	inline InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}

	inline operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

struct FText
{
	char UnknownData[0x18];
};

struct FScriptDelegate
{
	char UnknownData[20];
};

struct FScriptMulticastDelegate
{
	char UnknownData[16];
};


/*
class TBitArray
{
public:
	unsigned char AllocatorInstance[0x18];
	uint8_t NumBits;
	uint8_t MaxBits;
};

template <typename Key>
class TSparseArray
{
public:
	TArray<Key> Data;
	TBitArray AllocationFlags;
	uint32_t FirstFreeIndex;
	uint32_t NumFreeIndices;
};

template <typename Key, typename Value>
class TSet
{
public:
	TSparseArray<Value> Elements;
	unsigned char Hash[0x10];
	uint32_t HashSize;
	unsigned char UnknownData0[0x4];
};


template <typename Key, typename Value>
class TMapBase 
{
public:
	TSet Pairs <Key, Value>;
};

template <typename Key, typename Value>
class TSortableMapBase : TMapBase<Key, Value>
{
public:
};
*/

template<typename Key, typename Value>
class TMap /*: TSortableMapBase<Key, Value>*/
{
	char UnknownData[0x50];
};

struct FWeakObjectPtr
{
public:
	inline bool SerialNumbersMatch(FUObjectItem* ObjectItem) const
	{
		return ObjectItem->SerialNumber == ObjectSerialNumber;
	}

	bool IsValid() const;

	UObject* Get() const;

	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;
};

template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
struct TWeakObjectPtr : private TWeakObjectPtrBase
{
public:
	inline T* Get() const
	{
		return (T*)TWeakObjectPtrBase::Get();
	}

	inline T& operator*() const
	{
		return *Get();
	}

	inline T* operator->() const
	{
		return Get();
	}

	inline bool IsValid() const
	{
		return TWeakObjectPtrBase::IsValid();
	}
};

template<class T, class TBASE>
class TAutoPointer : public TBASE
{
public:
	inline operator T*() const
	{
		return TBASE::Get();
	}

	inline operator const T*() const
	{
		return (const T*)TBASE::Get();
	}

	explicit inline operator bool() const
	{
		return TBASE::Get() != nullptr;
	}
};

template<class T>
class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
{
public:
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32_t TagAtLastTest;
	TObjectID ObjectID;
};

struct FStringAssetReference_
{
	char UnknownData[0x10];
};

class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
{

};

template<typename ObjectType>
class TAssetPtr : FAssetPtr
{

};

struct FSoftObjectPath
{
	FName AssetPathName;
	FString SubPathString;
};

class FSoftObjectPtr : public TPersistentObjectPtr<FSoftObjectPath>
{

};

template<typename ObjectType>
class TSoftObjectPtr : FSoftObjectPtr
{

};

struct FUniqueObjectGuid_
{
	char UnknownData[0x10];
};

class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
{

};

template<typename ObjectType>
class TLazyObjectPtr : FLazyObjectPtr
{

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
