// Assistant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <shellapi.h>

int main()
{
    std::cout << "\tHey \n\tI am your Assistant but I'm still learning so if you encounter any bugs , forgive me";
    
    std::cout << "\n\tHere is some stuff i can currently do ";
    std::cout << "\n\t 1. Open Spotify";
    std::cout << "\nWhat do you want me to do ?\n\n\tInput Number : ";
    int c;
    std::cin >> c;
    if (c == 1) {
        /*opening link*/

        ShellExecute(0, 0, L"https://open.spotify.com/", 0, 0, SW_SHOW);
    }
    else {
        std::cout << "\nI don't mean to be rude but your input is wrong.\n\n\n ";
    }
}
