// Shutdown After Time C++ Version.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <process.h>
#include <string>

using namespace std;

bool isValid(string);

string tm;
string output;
string x;

int main()
{
    cout << "Enter time to shutdown in seconds or press q to quit" << endl;
    cout << "1 Hour = 3600 | 2 Hours = 7200 | 3 Hours 10800 | 4 Hours = 14400" << endl;

    do {
        cin >> tm;

        if (!isValid(tm)) {
            if (tm == "q") {
                return 0;
            }
            /*if (tm == "a") {
                
            }*/
        }

        if(!(stoi(tm) >= 0 && stoi(tm) <= 28800)){
            cout << "Invalid Submission" << endl;

        } else {
            output = " shutdown -s -t " + tm;
            system(output.c_str());
            return 0;
        }
    } while(true);
}

bool isValid(string checkStr) {
    for (unsigned int i = 0; i < tm.length(); i++) {
        if (isdigit(tm[i]) == false) {
            return false;
        }
    }
    return true;
}

