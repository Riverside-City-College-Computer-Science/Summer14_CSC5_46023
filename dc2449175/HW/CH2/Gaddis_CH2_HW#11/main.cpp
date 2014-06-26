/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on June 26, 2014, 12:21 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int tank = 20; //gallons in gas tank
    float cMiles = 21.5; //city miles
    float hMiles = 26.8; //highway miles

    //calculations 
    float cMPG = cMiles*tank;
    float hMPG = hMiles*tank;

    cout << "The city mpg of the car on a full tank is " << cMPG << endl;
    cout << "The highway mpg of the car on a full tank is " << hMPG << endl;
    return 0;
}

