// Assistant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <shellapi.h>
#include <string>

int main()
{
    using namespace std;
    cout << "\tHey \n\tI am your Assistant but I'm still learning so if you encounter any bugs , forgive me";

    cout << "\n\tHere is some stuff i can currently do ";
    cout << "\n\t 1. Open Spotify\n\t 2. Tell you the current weather";
    cout << "\nWhat do you want me to do ?";
    while (true) {
        int c;
        cout << "\n\n\tInput Number : ";
        cin >> c;
        if (c == 1) {
            /*opening link*/

            ShellExecute(0, 0, "https://open.spotify.com/", 0, 0, SW_SHOW);
        }
        else if (c == 2) {

            ShellExecute(0, 0, "https://www.accuweather.com/", 0, 0, SW_SHOW);
        }
        else {
            cout << "\nI don't mean to be rude but your input is wrong.\n\n\n ";
        }
    }
};

