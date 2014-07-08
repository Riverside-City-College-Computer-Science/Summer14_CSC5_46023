/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 7, 2014, 8:44 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //inputs
    int secs;
    cout << "Enter how many seconds" << endl;
    cin >> secs;

    if(secs >= 60 && secs < 3600)
    {
        float mins = secs/60;
        cout << "It is " << mins << " minute(s)" << endl;
    }
    else if(secs >= 3600 && secs < 86400)
    {
        int hr = secs/3600;
        cout << "It is " << hr << " hour(s)" << endl;
    }
    if(secs >= 86400)
    {
        int days = secs/86400;
        cout << "It is " << days << " day(s)" << endl;
    }
    return 0;
}

