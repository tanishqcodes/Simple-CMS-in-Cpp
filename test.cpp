//Stay Hungry Stay Foolish:)

// Code to include while compiling files :g++ -o test -I/add.h -I/mul.h

#include <bits/stdc++.h>
// #include "password.h"
using namespace std;
string password = "fuckin";

bool password_validator(string pass)
{
    int trials=3;
    while(trials--){
        if(pass==password){
            return true;    
            break;
        }
    }
    return false;
}

int main()
{
    string uname;
    cout<<"Enter your username: "<<endl;
    cin >> uname;
    string pass;
    cout<<"Enter your password: "<<endl;
    cin >> pass;
    if (password_validator(password))
    {

        cout << "\t***********************************" << endl;

        cout << "Welcome " + uname << endl;

        cout<<"\t***********************************"<<endl;
    }

    else
    {
        cout<<"\t You have entered the wrong password thrice, Try again! "<<endl;
    }
    
}