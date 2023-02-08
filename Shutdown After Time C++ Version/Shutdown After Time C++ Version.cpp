// Shutdown After Time C++ Version.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <process.h>
#include <string>

using namespace std;

int tm;
string output;
string x;

bool run = true;

int main()
{
    cout << "Enter time to shutdown in seconds or press q to quit" << endl;
    cout << "1 Hour = 3600 | 2 Hours = 7200 | 3 Hours 10800 | 4 Hours = 14400" << endl;

    while (run) {
        cin >> tm;
        if (isdigit(tm)) {
            if (tm >= 0 && tm <= 28800) {
                output = ("shutdown /s /t " + tm);
                system(output);
            }
        }
        else if (!(isdigit(tm))) {
            if ((x = to_string(tm)) == "q"){
                run = false;
                return;
            }
            else {
                cout << "Invalid Submission";
            }
        }
    }
}


