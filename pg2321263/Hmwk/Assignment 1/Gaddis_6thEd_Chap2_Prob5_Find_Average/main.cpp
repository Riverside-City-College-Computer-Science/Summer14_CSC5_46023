/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 * Created on June 25, 2014, 1:07 PM
 * Purpose: Find the average of five variables
 */

//System Libraries
#include <iostream>
using namespace std;

//User-defined Libraries

//Global Constants

//Function Prototypes

//Begin execution
int main(int argc, char** argv) {
    
    //Declare & define variables
    short   a = 28,     b = 32,
            c = 37,     d = 24,
            e = 33,     sum;
            
    //Calculations
    sum = a + b + c + d + e;
    
    //Simple text output
    cout<<"The average is "<<sum/5<<"."<<endl;
    
    //Finish him!!
    return 0;
}

