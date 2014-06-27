/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 * Created on June 26, 2014, 12:38 PM
 * Purpose: Calculate miles per gallon
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

    //Declare and initialize variables
    float tank, range, mpg;
    
    //Request input
    cout << "What is the fuel capacity of your vehicle? (gallons) ";
    cin >> tank;
    cout << "How far can you drive on one tank? ";
    cin >> range;
    
    //Calculations
    mpg = range / tank;
    
    //Output data
    cout << setprecision (3);
    cout << "Your vehicle gets " << mpg << " MPG." << endl;
    
    //Finish him!!
    return 0;
}

