/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on June 25, 2014, 1:44 PM
 */

//User Libraries
#include <iostream>

using namespace std;

//User Defined Library

//Global Constants

//Function Prototypes


int main(int argc, char** argv) {
    
    //define and initialize the variables
    float payAmount=1700.0f,
          payPeriods=26,
          annualPay=payAmount*payPeriods;
    
    //output Annual Pay
    cout<<"Total Annual Pay for the Lucky Dude: "<<annualPay<<endl;
    return 0;
}

