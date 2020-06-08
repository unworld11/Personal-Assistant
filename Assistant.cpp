#include <iostream>
#include <windows.h>
#include <shellapi.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Globals
using namespace std;
void clrscr()
{
    system("cls");
}

// Function Prototypes
void launchSpotify();     // Using Pascal method to name the functions
void launchAccuWeather();

int main()
{
    // system("sety raw");
    clrscr(); // Clearing the screen every time main() in called
    char ch;
    cout << "\tHey \n\tI am your Assistant but I'm still learning so if you encounter any bugs , forgive me";
    cout << "\n\tHere is some stuff i can currently do ";
    cout << "\n\t 1. Open Spotify (s)\n\t 2. Tell you the current weather (w)\n\t 3. Exit (q)" ;
    cout << "\nWhat do you want me to do ? :";
    ch = getchar();
        switch (ch) {
            case 's' :
                cout << "\n\t Launching Spotify on Web";
                launchSpotify();
                break;
            case 'w' :
                cout << "\n\t Launching AccuWeather on Web";
                launchAccuWeather();
                break;
            case 'q' :
                cout << "\n\t Exiting";
                exit(1);
            default: cout << "\n\t Invalid input, please try again";
                     main(); // This is a recursive call
        }
    }


void launchSpotify() {
    clrscr();
    ShellExecute(0, 0, "https://open.spotify.com/", 0, 0, SW_SHOW);
    main(); // Going back to the main() function
}

void launchAccuWeather() {
    clrscr();
    ShellExecute(0, 0, "https://www.accuweather.com/", 0, 0, SW_SHOW);
    main(); // Going back to the main() function
}
