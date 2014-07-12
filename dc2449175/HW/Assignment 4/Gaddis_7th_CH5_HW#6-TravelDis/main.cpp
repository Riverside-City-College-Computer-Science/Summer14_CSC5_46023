/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 10, 2014, 1:21 PM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //declare variables
    float distance, speed;
    int hr;
    
    //enter information
    cout << "What is the speed of the vehicle in Mph?" << endl;
    cin >> speed;
    cout << "How many hours has it traveled?" << endl;
    cin >> hr;

    //set up table
    cout << "Hour    Distance Traveled" << endl;

    //for loop for distance traveled
    for( int i=1; i<=hr; i++)
    {
        //new distance adding to old
        distance = speed;
        float newdis;
        newdis += distance;
        cout << i << "         " << newdis << endl;
    }
        
    return 0;
}

