/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 * Created on June 25, 2014, 6:27 PM
 * Purpose: Determine amount of memory used by data types
 */

//System LIbraries
#include <iostream>
#include <iomanip>

//User-defined Libraries

//Global Constants

//Function Prototypes

using namespace std;

//Begin execution
int main(int argc, char** argv) {

    //Display simple text
    cout<<"Characters use "<<sizeof(char)<<" bytes."<<endl;
    cout<<"Integers use "<<sizeof(int)<<" bytes."<<endl;
    cout<<"Floats use "<<sizeof(float)<<" bytes."<<endl;
    cout<<"Doubles use "<<sizeof(double)<<" bytes."<<endl;
    
    //Finish him!!
    return 0;
}

