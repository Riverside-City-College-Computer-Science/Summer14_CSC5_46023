/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 6, 2014, 7:04 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //inputs
    int month;
    int day;
    int year;
    
    //getting the users info
    cout << "Enter the month" << endl;
    cin >> month;
    cout << "Enter the day" << endl;
    cin >> day;
    cout << "Enter the last 2 digits of the year" << endl;
    cin >> year;
    
    //mnaking calculations
    int magic = day*month;
    if(magic == year)
    {
        cout << "This date is magic" << endl;
    }
    else
    {
        cout << "This date is not magic" << endl;
    }
    
    return 0;
}

