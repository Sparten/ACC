#include "stdafx.h"
#include "cuseful.h"
#include <fcntl.h>
#include <stdio.h>
#include <io.h>
#include <fstream>
//#include <ostream>
namespace CUseFull
{


	FileLog::FileLog( const char *filePath /*= "C:\\"*/, const char *fileName /*= "Log.txt"*/, bool deleteIfExist )
	{
		m_fileName = fileName;
		m_filePath = filePath;
		m_Type = eFile;
		if (deleteIfExist)
		{
			m_fileAndPath = m_filePath + m_fileName;
			if (fileExists(m_fileAndPath.c_str()))
			{
				DeleteFileA(m_fileAndPath.c_str());
			}
			
		}
	}

	void __cdecl FileLog::add_log( const char *fmt, ... )
	{
		if(!fmt || !strlen(fmt)) { return; }
		va_list va_alist;
		char logbuf[20000] = {0};

		va_start (va_alist, fmt);
		_vsnprintf_s(logbuf+strlen(logbuf), sizeof(logbuf) - strlen(logbuf), _TRUNCATE, fmt, va_alist);
		va_end (va_alist);

		m_logBuf.push_back(logbuf);
		std::ofstream ofile;
		ofile.open(m_fileAndPath.c_str(), std::ios::app);
		if(ofile)
		{
			ofile << logbuf << std::endl;
			ofile.close();
		}

	}

	ConsoleLog::ConsoleLog( )  
	{
		m_Type =  eConsole;
		CreateConsole();
		
	}
	void __cdecl ConsoleLog::add_log( const char *fmt, ... )
	{
		if(!fmt || !strlen(fmt)) { return; }
		va_list va_alist;
		char logbuf[20000] = {0};

		va_start (va_alist, fmt);
		_vsnprintf_s(logbuf+strlen(logbuf), sizeof(logbuf) - strlen(logbuf), _TRUNCATE, fmt, va_alist);
		va_end (va_alist);

		m_logBuf.push_back(logbuf);

		printf(logbuf);
	}
	VOID ConsoleLog::CreateConsole( )
	{

		if (!AttachConsole((DWORD)-1))
			AllocConsole( );


		m_lStdHandle = GetStdHandle( STD_OUTPUT_HANDLE );
		m_hConHandle = _open_osfhandle( PtrToUlong( m_lStdHandle ), _O_TEXT );

		m_fp = _fdopen( m_hConHandle, "w" );

		*stdout = *m_fp;

		setvbuf( stdout, NULL, _IONBF, 0 );
	} 
	VOID ConsoleLog::CloseConsole( )
	{
		fclose( m_fp );
		FreeConsole();
	}
	bool fileExists(const char* strFilename)
	{
		WIN32_FIND_DATAA finddata;
		HANDLE handle = FindFirstFileA(strFilename, &finddata);

		bool ret = (handle != INVALID_HANDLE_VALUE);

		if (ret)FindClose(handle);
		return ret;
	}
	void RemoveFileName(char* path)
	{
		char* pos = (char*)(path + strlen(path));
		while (pos >= path && *pos != '\\') --pos;
		pos[1] = 0;
	}
}

