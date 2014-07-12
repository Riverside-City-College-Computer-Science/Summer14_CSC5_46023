/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 10, 2014, 1:05 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //declare vairbales
    float fee = 2500;
    float newfee = 0;
    float rate = .04; //4 percent 

    //set precision
    cout << fixed << setprecision(2) << endl;

    //create table
    cout << "Year    Fee" << endl;
    cout << "-------------" << endl;

    //create loop for new fees
    for(int year=1; year<=6; year++)
    {
        //cal newfee by adding fee to the interest
        newfee += fee+(fee*rate);
        cout << year << "     " << newfee << endl;
        }
    return 0;
}

