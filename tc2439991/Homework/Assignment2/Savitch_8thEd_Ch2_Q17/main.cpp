/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 1, 2014, 7:52 PM
 * Purpose: Write a program that outputs the number of gallons stored in a well.
 */

#include <iostream>
#include <cmath>
using namespace std;

//Global Constants
int const C = 12;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare Variables
        float rad;                     // Radius
        float hght;                    // Height    
        float vol;                     // Volume
        float tmpRad;                  // Temp Radius
        float tmpInc;                  // Temp Increase
        float volg;                    // Gallons of Water
        const float pi = 3.1415926535; // 1 Cubic Foot of Water
        const float gallons = 7.48;
    
    //Displayed Text
        cout<<"Enter the radius of your well in inches: ";
        cin>>rad;
        cout<<"\n";
        cout<<"Enter the height of your well in feet: ";
        cin>>hght;
        cout<<"\n";
            
    //Calculations
        tmpRad = pow(rad,2);
        tmpInc = pow(C,2);
        vol    = pi * (tmpRad/tmpInc) * hght;
        volg   = vol * gallons;

    //Two Decimal Precision
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

    //Displayed Results
        cout<<"Your well will hold ";
        cout<<volg;
        cout<<" gallons of water.";
        cout<<"\n";    

    //QED
        
    return 0;
}