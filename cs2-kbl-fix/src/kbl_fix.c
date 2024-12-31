#include <windows.h>

#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "user32.lib")

#ifndef STATUS_SUCCESS
#define STATUS_SUCCESS ((NTSTATUS)0x00000000L)
#endif

void DECLSPEC_NORETURN EntryPoint()
{
	HKL EnglishKBL = LoadKeyboardLayoutW(L"00000409", 0);

	if (EnglishKBL)
	{
		UnloadKeyboardLayout(EnglishKBL);
		EnglishKBL = NULL;
	}

	ExitProcess(STATUS_SUCCESS);
}