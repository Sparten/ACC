#pragma region Credits

//////////////////////////////////////////////////////////////
//                      -Creators-                          //
//   _________                       __                     //
//  /   _____/_____ _____  ________/  |_   ____    ____     //
//  \_____  \ \____ \\__  \ \_  __ \   __\_/ __ \  /    \   //
//  /meerkat \|  |_> >/ __ \_|  | \/|  |  \  ___/ |   |  \  //
// /_______  /|   __/(____  /|__|   |__|   \___  >|___|  /  //
//         \/ |__|        \/                   \/      \/   //
//                            ////////////////////////////////
//    _____             .___  //
//   /  _  \   ____   __| _/  //
//  /  /_\  \ /    \ / __ |   //
// /    |    \   |  | /_/ |   //
// \____|__  /___|  |____ |   //
//         \/     \/     \/   // 
//                            /////////////////
//   ________        .__   .__   .__         //
//  /  XPL0_/  ____  |  |  |  |  |__| ____   //
// /   \  ____/ __ \ |  |  |  |  |  |/    \  //
// \    \_\  \  ___/ |  |__|  |__|  |   |  \ //
//  \______  /\___  >|____/|____/|__|___|  / //
//         \/     \/                     \/  //
///////////////////////////////////////////////

#pragma endregion


#include <io.h>
#include <fcntl.h>
#include <memory>
#include <Windows.h>
#include <stdexcept> 
class console_window 
{
public:
	console_window(const console_window&) = delete;
	console_window()
	{
		
		if( AllocConsole() == FALSE )
			throw std::runtime_error( "failed to AllocConsole" );

		_stdHandle.reset(GetStdHandle( STD_OUTPUT_HANDLE ) ,CloseHandle );

		if( !_stdHandle.get() )
			throw std::runtime_error( "failed to GetStdHandle" );

		_conHandle.reset(new int(_open_osfhandle( PtrToUlong( _stdHandle.get() ), _O_TEXT )));

		if( !_conHandle.get() )
			throw std::runtime_error( "failed to GetStdHandle" );

		_fp.reset(_fdopen( *_conHandle.get(), "w" ), fclose );

		if( !_fp.get() )
			throw std::runtime_error( "failed to _fdopen" );

		_orgOut = *stdout;
		*stdout = *_fp;

		if( setvbuf( stdout, NULL, _IONBF, 0 ) != NULL )
			throw std::runtime_error( "failed to setvbuf" );
	}

	~console_window()
	{
		if( _fp.get() )
		{
			*stdout = _orgOut;
			setvbuf(stdout, NULL, _IONBF, 0);
			FreeConsole();
		}
	}
	void __cdecl add_log(const char *fmt, ...)
	{
		if (!fmt || !strlen(fmt)) { return; }
		va_list va_alist;
		char logbuf[20000] = { 0 };
		va_start(va_alist, fmt);
		_vsnprintf_s(logbuf + strlen(logbuf), sizeof(logbuf) - strlen(logbuf), _TRUNCATE, fmt, va_alist);
		va_end(va_alist);
		printf(logbuf);
	}
protected:
private:
	std::shared_ptr<void> _stdHandle;
	std::shared_ptr<int> _conHandle;
	std::shared_ptr<FILE> _fp;
	FILE _orgOut;
	//HANDLE m_lStdHandle;
};