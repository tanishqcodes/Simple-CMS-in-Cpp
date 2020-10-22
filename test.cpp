//This code is under Creative Common's License, Use however you want :)

// Code to include while compiling files :g++ -o test -I/add.h -I/mul.h

#include <bits/stdc++.h>
// #include "password.h"
using namespace std;
string password = "fuckin";

bool password_validator()
{
    string pass;
    int trials = 3;
    while (trials)
    {
        if (trials == 3)
        {
            cout << "Enter your password: ";
            cin >> pass;
            cout << endl;
        }
        if (trials != 3)
        {
            cout << "You've entered wrong password, Try again: ";
            cin >> pass;
            cout << endl;
        }

        if (pass == password)
        {
            return true;
            break;
        }
        trials--;
    }
    return false;
}

int main()
{
    string uname;
    cout << "Enter your username: ";
    cin >> uname;

    if (password_validator())
    {

        cout << "\t***********************************" << endl;

        cout << "\n\t  Welcome to your profile " + uname << endl;

        cout << "\n\t***********************************" << endl;
    }

    else
    {
        cout << "\t You have entered the wrong password thrice, Try again! " << endl;
    }
}
