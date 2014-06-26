/* 
 * File:   main.cpp
 * Author: Patrick
 * Created on June 24, 2014, 5:09 PM
 * Purpose: Compute the tax and tip on a restaurant bill
 */

//System Library
#include <iostream>
using namespace std;

//User-defined Libraries

//Global Constants

//Function Prototypes

//Begin program execution
int main(int argc, char** argv) {

    //Establish variables
    float taxrate = 6.75e-2;       //Tax Rate
    float tiprate = 1.5e-1;        //Tip Rate
    float bill = 4.45e1;           //Meal Charge
    float taxcost;                 //Tax Amount
    float tipcost;                 //Tip Amount

    //Calculations
    taxcost = bill * taxrate;
    tipcost = bill * tiprate;

    //Display simple text
    cout<<"With a bill of $"<<bill<<", the tax is $"<<taxcost<<", and the tip is $"<<tipcost<<"."<<endl;

    //End program
    return 0;
}

