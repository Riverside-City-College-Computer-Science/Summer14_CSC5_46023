/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 * Created on June 25, 2014, 6:33 PM
 * Purpose: Calculate the distance a vehicle can travel on one tank of gas
 */

//System Libraries
#include <iostream>
#include <iomanip>

//User-defined Libraries

//Global Constants

//Function Prototypes

using namespace std;

//Begin execution
int main(int argc, char** argv) {

    //Establish and initialize variables
    int tank = 20;          //Gallons of fuel per tank
    float mpgTwn = 21.5,    //Miles per gallon (town)
          mpgHwy = 26.8,    //Miles per gallon (highway)
          rngTwn,           //Miles per tank (town)
          rngHwy;           //Miles per tank (highway)
    
    //Calculations
    rngTwn = mpgTwn * tank;
    rngHwy = mpgHwy * tank;
    
    //Display simple text
    cout<<"The vehicle can travel "<<rngTwn<<" miles in town."<<endl;
    cout<<"The vehicle can travel "<<rngHwy<<" miles on highway."<<endl;
    
    //Finish him!!
    return 0;
}

