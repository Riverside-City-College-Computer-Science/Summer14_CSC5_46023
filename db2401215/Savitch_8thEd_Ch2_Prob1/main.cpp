/* Chapter 2 Problem 1
 * File:   main.cpp
 * Author: Daniel Boebinger
 * Created on June 26, 2014, 12:31 PM
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and initialize variables
    float cerWe;//(known/input)cereal weight for one box of cereal in ounces
    float cerTon;//(unknown)cereal weight output in metric tons
    const float METTON = 35273.92;//(known/constant) ounces per metric ton
    float boxNum;//(unknown)number of boxes needed to yield 1 metric ton of cereal

    //Input Cereal Weight
    cout << "Enter the weight of the cereal in ounces then press return:" << endl;
    cin >> cerWe;
    
    //Calculations
    //Calculate the cereal weight in metric tons
    cerTon = cerWe / METTON;
    //Calculate number of boxes needed to yield 1 metric ton
    boxNum = 1 / cerTon;

    //Output the results
    cout << "Weight of the breakfast cereal = "<< cerTon << " metric tons" << endl;
    cout << setprecision(0) << fixed;//rounds to the nearest box
    cout << "Number of cereal boxes needed to yield one metric ton = "<< boxNum << " boxes" << endl;
    
    //Exit Stage Right!
    return 0;
}
