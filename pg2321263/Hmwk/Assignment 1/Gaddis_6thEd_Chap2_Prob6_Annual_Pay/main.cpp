/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 * Created on June 25, 2014, 1:28 PM
 * Purpose: Calculate annual salary
 */

//System Libraries
#include <iostream>

using namespace std;

//User-defined Libraries

//Global Constants

//Function Prototypes

//Begin program execution
int main(int argc, char** argv) {
    
    //Establish Variables
    int     payAmt = 1700,      //Amount of pay the employee earns each pay period
            payPer = 26,        //Number of pay periods
            annPay;             //Annual salary of employee
    
    //Calculations
    annPay = payAmt*payPer;
    
    //Simple text output
    cout<<"The employee earns $"<<annPay<<" annually."<<endl;
    
    //Finish him!!
    return 0;
}

