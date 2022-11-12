// This programme will continuously read for input, 
// and perform actions based on that input (or do nothing!)

#define WM_SYSCOMMAND                   0x0112

#include <iostream>
#include <Windows.h>

int main() {
    HWND handle = GetForegroundWindow(); // Just initialising the handler
    
    std::cout << "Start\n";
    SendMessage(handle, WM_SYSCOMMAND, SC_MONITORPOWER, 2); 
    
    while(1) {
        if (GetAsyncKeyState(VK_SCROLL) & 0x0001) {
            std::cout << "Scroll lock key is pressed\n";
            break; 
        } else {
            SendMessage(handle, WM_SYSCOMMAND, SC_MONITORPOWER, 2); 
            std::cout << "Scroll lock key is not pressed\n";
        }
        Sleep(250);
    }

    std::cout << "End\n";

    return 0;
}