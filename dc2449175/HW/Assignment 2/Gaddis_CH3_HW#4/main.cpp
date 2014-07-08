/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on June 25, 2014, 1:45 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //initializing variables
    string month1;
    string month2;
    string month3;
    int rain1;
    int rain2;
    int rain3;
    
    //getting month and rain fall
    cout << "What month is it? " << endl;
    cin >> month1;
    cout << "How many inches did it rain?" << endl;
    cin >> rain1;

    cout << "What month is it? " << endl;
    cin >> month2;
    cout << "How many inches did it rain?" << endl;
    cin >> rain2;

    cout << "What month is it? " << endl;
    cin >> month3;
    cout << "How many inches did it rain?" << endl;
    cin >> rain3;

    int avg = (rain1+rain2+rain3)/3;
    cout << "The average rainfall for " << month1 << ", " <<
         month2 << ", " << month3
        << " is " << avg << " inches" << endl;

    return 0;
}

