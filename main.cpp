// This programme will continuously read for input, 
// and perform actions based on that input (or do nothing!)

#define WM_SYSCOMMAND                   0x0112

#include <iostream>
#include <Windows.h>

int main() {
    HWND handle = GetForegroundWindow();
    while(1) {
        if (GetAsyncKeyState('A') & 0x8000) {
            std::cout << "'A' key is pressed\n";
            SendMessage(handle, WM_SYSCOMMAND, SC_MONITORPOWER, 2); 
        } else {
            std::cout << "'A' key is not pressed\n";
        }
        Sleep(250);
    }

    return 0;
}