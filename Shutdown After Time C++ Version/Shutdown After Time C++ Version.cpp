// Shutdown After Time C++ Version.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <process.h>
#include <string>

using namespace std;

string tm;
string output;
string x;

int approvedNum;

bool check;

bool run = true;

int main()
{
    cout << "Enter time to shutdown in seconds or press q to quit" << endl;
    cout << "1 Hour = 3600 | 2 Hours = 7200 | 3 Hours 10800 | 4 Hours = 14400" << endl;

    while (run) {
        cin >> tm;

        for (int i = 0; i < tm.length(); i++) {
            if (isdigit(tm[i]) == false) {
                check = false;
            }
            else {
                check = true;
                approvedNum = stoi(tm);
            }
        }

        if (check == true) {
            if (approvedNum >= 0 && approvedNum <= 28800) {
                output = " shutdown /s /t " + approvedNum;
                cout << output;
                system(static_cast<const char*>(output.c_str()));
                return 0;
            }
        }
        else if (check == false) {
            if (tm == "q") {
                run = false;
                return 0;
            }
            else {
                cout << "Invalid Submission" << endl;
            }
        }
        /*
        if (isdigit(tm)) {
            if (tm >= 0 && tm <= 28800) {
                output = "shutdown /s /t " + tm;
                system(static_cast<const char *>(output.c_str()));
                return 0;
            }
        }
        else if (!(isdigit(tm))) {
            if ((x = to_string(tm)) == "q"){
                run = false;
                return 0;
            }
            else {
                cout << "Invalid Submission" << endl;
            }
        } */
    }
}


