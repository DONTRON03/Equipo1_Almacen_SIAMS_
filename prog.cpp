#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>

int main() {
    //iomanip
    double pi = 3.141592653589793;
    std::cout << "Pi with different precisions:\n";
    std::cout << std::setprecision(3) << pi << "\n";
    std::cout << std::setprecision(5) << pi << "\n";
    std::cout << std::setprecision(10) << pi << "\n";

    // windows.h
    MessageBox(NULL, "Hello, World!", "Message", MB_OK);

    //conio.h
    std::cout << "Press any key to continue...";
    _getch();

    return 0;
}
