/*
   This file has been generated by IDA.
   It contains local type definitions from
   AC2-Win64-Shipping.i64
*/

#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long

struct FScriptContainerElement;

/* 3831 */
struct FHeapAllocator::ForAnyElementType
{
  FScriptContainerElement *Data;
};

/* 3862 */
struct TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8> >,FDefaultAllocator>
{
  FHeapAllocator::ForAnyElementType AllocatorInstance;
  int ArrayNum;
  int ArrayMax;
};

/* 3863 */
struct TAlignedBytes<4,4>::TPadding
{
  char Pad[4];
};

/* 3864 */
struct TAlignedBytes<4,4>
{
  TAlignedBytes<4,4>::TPadding Padding;
};

/* 3865 */
struct __cppobj TTypeCompatibleBytes<unsigned int> : TAlignedBytes<4,4>
{
};

/* 3866 */
struct __cppobj FHeapAllocator::ForElementType<unsigned int> : FHeapAllocator::ForAnyElementType
{
};

/* 3867 */
struct TInlineAllocator<4,FDefaultAllocator>::ForElementType<unsigned int>
{
  TTypeCompatibleBytes<unsigned int> InlineData[4];
  FHeapAllocator::ForElementType<unsigned int> SecondaryData;
};

/* 3868 */
struct TBitArray<FDefaultBitArrayAllocator>
{
  TInlineAllocator<4,FDefaultAllocator>::ForElementType<unsigned int> AllocatorInstance;
  int NumBits;
  int MaxBits;
};

/* 3869 */
struct TSparseArray<TSetElement<TTuple<UObject *,UObject *> >,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator> >
{
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8> >,FDefaultAllocator> Data;
  TBitArray<FDefaultBitArrayAllocator> AllocationFlags;
  int FirstFreeIndex;
  int NumFreeIndices;
};

/* 3830 */
struct __cppobj FScriptContainerElement
{
};
