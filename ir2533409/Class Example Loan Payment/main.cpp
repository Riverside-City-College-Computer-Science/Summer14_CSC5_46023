/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 1, 2014, 1:09 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
    //Define variables
    float   lnamt, //loan amount
            intrt, //Interest rate
            paymt, //Amount of payment per month
            totint; //Total interest Paid
    unsigned int
            numpmt; //number of payments
    cout<<fixed<<setprecision(2)<<endl;
    
    cout<<"Enter the loan amount: $";
    cin>>lnamt;
    cout<<"Enter the yearly percent rate: %";
    cin>>intrt;
    //Calculate
    intrt=(1.0f/12/100); //Conversion to percent
    
    cout<<"Enter the number of payments you would like to make: ";
    cin>>numpmt;
    //Calculations
    float temp=pow(1+intrt,numpmt);
    paymt=intrt*temp/(temp-1)*lnamt;
    
    //Total interest rate calculated
    totint=numpmt*paymt-lnamt;
    
    cout<<"The amount of monthly payments: $";
    cout<<paymt<<endl;
    
    cout<<"The amount of your total interest paid: $";
    cout<<totint<<endl;
    
    //End Here!
    return 0;
}

