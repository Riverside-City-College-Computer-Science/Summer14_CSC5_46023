/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on June 25, 2014, 1:16 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int gas; //gallons
    int miles; //how far its going
    

    cout << "How many gallons of gas can fit in tank? " << endl; 
    cin >> gas; //entering amount of gallons

    cout << "How many miles can it go on a full tank" << endl;
    cin >> miles; // entering distance

    int mpg = gas/miles; //determine mpg

    cout << "The car travels: " << mpg << " per gallon" << endl;
    
    
    return 0;
}

