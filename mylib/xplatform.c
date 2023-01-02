#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#else 
#include <unistd.h>
#endif

void xsleep(int ms);
void xcls(void);

void xsleep(int ms) {
#ifdef _WIN32
	Sleep(ms);
#else	
	sleep(ms / 1000); // sleep takes s rather than ms
#endif
}

void xcls(void) {
#ifdef _WIN32
	system("cls"); // Windows is cls
#else
	system("clear"); // Unix-like is clear
#endif
}