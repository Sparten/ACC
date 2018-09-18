#ifndef __CUSEFUL_HEADER__
#define __CUSEFUL_HEADER__

#include <Windows.h>
#include <string>
#include <vector>
namespace CUseFull
{
	class Log
	{
	public:
		enum OutputType{
			eFile,
			eConsole,
		};
		
		virtual void __cdecl add_log ( const char *fmt, ... ) = 0;
		void add_log( std::string & strLog );
		OutputType m_Type;
		std::vector<std::string> m_logBuf;
	protected:
	private:

		
	};
	class FileLog : public Log
	{
	public:
		
		FileLog( const char *filePath = "C:\\", const char *fileName = "Log.txt" ,bool deleteIfExist = false);
		void __cdecl add_log ( const char *fmt, ... );
		void setFilePath(const char * path) { m_filePath = path; };
		void setFilePath(std::string & path){ m_filePath = path; };
		void setFileName(const char * file) { m_fileName = file; };
		void setFileName(std::string & file) { m_fileName = file; };
		std::string getPath() const { return m_filePath; };
		const char * szGetPath() const { return m_filePath.c_str(); };
		std::string getFile() const { return m_fileName; };
		const char * szGetFile() const { return m_fileName.c_str(); };
	protected:
	private:
		std::string m_filePath;
		std::string m_fileName;
		std::string m_fileAndPath;
	};
	class ConsoleLog : public Log 
	{
	public:
		ConsoleLog(  );
		void __cdecl add_log ( const char *fmt, ... );
		VOID CreateConsole( );
		VOID CloseConsole();
	protected:
	private:
		int m_hConHandle;   
		HANDLE m_lStdHandle;  
		FILE *m_fp;
	};
	bool fileExists(const char* strFilename);
	void RemoveFileName(char* path);
}
#endif