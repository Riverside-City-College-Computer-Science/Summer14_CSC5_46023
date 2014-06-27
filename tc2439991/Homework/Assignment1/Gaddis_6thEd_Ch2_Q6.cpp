/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on June 25, 2014, 8:08 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
//Declare and Initialize Variables
 int payAmt = 1700,  // The amount of pay employee earns each period.
     nPayPer = 26,   // Total number of pay periods.
     annPay;         // The annual salary of the employee.
    
//Calculations
     annPay = payAmt*nPayPer;
    
//Display Text
     cout<<"The employee earns $"<<annPay<<" annually."<<endl;
    
//Fin
    
    return 0;
}
