/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 1st, 2014, 12:24 AM
 */

//System Libraries
#include <iostream>//cout/cin
#include <iomanip> //Formatting Currency
#include <cmath>   //Power function
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    //Inputs
    float intRate;       //Interest rate per year
    unsigned int nPay;   //Number of Payments
    float loanAmt;       //Loan Amount
    //Outputs
    float payment;       //Monthly Payments
    float totInt;        //Total Interest Paid
    
    //Acquire the inputs
    cout<<"Loan Calculator"<<endl;
    cout<<"Loan amount Requested? $'s"<<endl;
    cin>>loanAmt;
    cout<<"The yearly interest rate in %"<<endl;
    cin>>intRate;
    cout<<"Number of monthly Payments"<<endl;
    cin>>nPay;
    
    //Calculate the results
    intRate*=(1.0f/12/100);//Conversion to percent and monthly
    float temp=pow(1+intRate,nPay);//Use a temp variable
    payment=intRate*temp/(temp-1)*loanAmt;
    
    //Calculate total interest paid
    totInt=nPay*payment-loanAmt;
    
    //Output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Payment = $"<<payment<<endl;
    cout<<"Cost of the Loan = $"<<totInt<<endl;
    
    //Exit stage right!
    return 0;
}

