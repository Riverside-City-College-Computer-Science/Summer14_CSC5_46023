/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 * Created on June 25, 2014, 6:42 PM
 * Purpose: Calculate the price of a circuit board
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
    float profit = 4e-1,
          cost = 1.267e1,
          price;
    
    //Calculations
    price = cost * (1 + profit);
    
    //Display basic text
    cout <<setprecision(2)<<fixed;
    cout<<"The circuit board costs $"<<price<<" at the computer store."<<endl;
    
    //Finish him!!
    return 0;
}

