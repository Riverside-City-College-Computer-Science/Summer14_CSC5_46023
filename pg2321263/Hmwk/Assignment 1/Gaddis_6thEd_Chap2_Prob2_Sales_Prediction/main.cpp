/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 * Created on June 24, 2014, 4:59 PM
 * Purpose: Sales Prediction
 */

//System Library
#include <iostream>
using namespace std;

//User-defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {

    //Establish variables
    float revp = 6.2e-1f;   //Revenue percentage
    int rev = 4.6e6;        //Total revenue
    int ecrev;              //East coast revenue generated

    //Calculation
    ecrev = revp * rev;

    //Display simple text
    cout<<"The east coast division generated $"<<ecrev<<" of the total $"<<rev<<" revenue this year."<<endl;

    //End Program
    return 0;
}

