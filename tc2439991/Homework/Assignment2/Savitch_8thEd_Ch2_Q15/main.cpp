/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 1, 2014, 8:12 PM
 * Purpose: Write a program that calculates the
            velocity of sound in various temperatures.
 * 
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   
    //Declare Variables
        float strTmp;         // Starting Temperature
        float endTmp;         // Ending Temperature 
        float veloc;          // Velocity
        float temp;           // Temperature
    
     
    //Displayed Text
        cout<<"Please enter the starting temperature in Celsius degrees, ";
        cout<<"to the nearest whole degree: ";
        cin>>strTmp;
        cout<<"Please enter the ending temperature in Celsius degree, ";
        cout<<"to the nearest whole degree: ";
        cin>>endTmp;

    while (endTmp >= strTmp)
    {
        
    //Calculations  
        veloc = 331.3 + (0.61 * strTmp);          // Velocity Calculations
    
    //Displayed Results   
        cout<<"At ";
        cout<<strTmp;
        cout<<" degrees Celsius the velocity of sound is ";
        cout<<veloc;
        cout<<" m/s.";
        cout<<"\n";

    strTmp = strTmp + 1;

        }

       
    // QED
    
    
    return 0;
}