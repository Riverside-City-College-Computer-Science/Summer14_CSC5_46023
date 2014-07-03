/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 * Lab Example
 * Created on July 1, 2014, 1:06 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants
const float pcntCon = 1e-2;


//Execution starts here
int main(int argc, char** argv) {
    //Declare Variables
    
    //Inputs
    unsigned int loanAmt;
    unsigned short numPay;
    float intRate;
    
    //Outputs
    float pymtVal;
    
    //Input values
    cout<<"What is the amount of the loan?"<<endl;
    cin>>loanAmt;
    cout<<"What is the loan interest rate in percent?"<<endl;
    cin>>intRate;
    cout<<"What is the number of payments?"<<endl;
    cin>>numPay;
    
    //Convert interest rate to a decimal value
    intRate*=pcntCon;
    
    //Calculate Payment Value
    float temp=pow(1+intRate,numPay);
    pymtVal=((intRate*temp)/(temp-1))*loanAmt;
    
    //Output values
    cout<<"The payment value is $"<<pymtVal;
    

    return 0;
}

    
