/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savtich 8th Ed Chapter 3 Prob16
 * Created on July 7, 2014, 9:55 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare Variables
    int degF, 
        degC=100;
    
    degF = 9*degC/5+32;
    
    while (degC!=degF)
    {
        degC--;
        degF = 9*degC/5+32;
    }
    
    //Output Results
    cout << "Celsius = Fahrenheit at " <<degC <<endl;
    
    //Exit Stage Right
    return 0;
}