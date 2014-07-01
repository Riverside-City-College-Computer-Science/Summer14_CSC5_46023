/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 1, 2014, 1:08 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    //inputs
    float IntRate;              //Interest Rate
    unsigned short loanAmt;     //Loan Amount
    unsigned short numPay;      //Number of Payments
    //outputs                   
    float pay;                  //Payment
    float totInt;               //Total interest paid
   
//Input Data
    cout<<"Enter interest rate per year: ";     
    cin>>IntRate;
    cout<<"Enter number of payments: ";
    cin>>numPay;
    cout<<"Enter loan amount: ";
    cin>>loanAmt;
    
//Calculate payment
    IntRate*=(1.0f/12/100);     //Conversion to percent
    float temp=pow(1+IntRate,numPay);//Use temp variable 
    pay=IntRate*temp/(temp-1)*loanAmt;
    
//Calculate total interest paid
    totInt=numPay*pay-loanAmt;
    
//Output Results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Your payment is $"<<pay<<".\n";
    cout<<"Cost of the loan is $"<<totInt<<endl;
            
//Exit Stage Right
    return 0;
}

