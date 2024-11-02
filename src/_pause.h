
#ifndef _PAUSE
#define _PAUSE

#include <iostream>

// A function to imitate Windows' PAUSE command
void _pause() {
    std::cout << "Press any key to continue...";
    std::cin.get();
}

#endif
