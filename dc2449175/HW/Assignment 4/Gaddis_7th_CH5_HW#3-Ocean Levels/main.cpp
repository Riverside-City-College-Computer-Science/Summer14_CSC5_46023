/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 10, 2014, 12:35 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //delcare varibles
    float ocean = 1.5;

    //show years and height
    cout << "Year      Height Risen" << endl;
    cout << "-----------------------" << endl;

    //use to set everything to 1 decimal place
    cout << fixed << setprecision(1) << endl;
    
    //create for loop to show and display years
    for(int year=1; year<=25; year++)
    {
        //adding ocean to height
        float height;
        height += ocean;
        cout << year << "             " << height << " mm" << endl;
        } 
    return 0;
}

