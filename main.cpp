#include <Windows.h>

int main()
{
	wchar_t title_buffer[1024];
	GetConsoleTitle(title_buffer, 1024);

	HWND hwnd = FindWindow(NULL, title_buffer);
	PostMessage(hwnd, WM_SYSCOMMAND, SC_MONITORPOWER, 2);
	return 0;
}