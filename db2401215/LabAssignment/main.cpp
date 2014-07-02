/* Lab Assignment
 * File:   main.cpp
 * Author: Daniel Boebinger
 * Created on July 1, 2014, 1:12 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare variables
    //Inputs and Constants
    float loan;   //Loan amount in dollars
    float inter;  //Interest rate in percent per year
    float numOpay;//Total number of payments
    //Outputs
    float payment;//Total payment per month in dollars
    float totcost;//Total cost of loan
    //Inputs
    cout<<"Enter the loan amount in dollars:"<<endl;
    cin>>loan;
    cout<<"Enter the interest rate in percent per year:"<<endl;
    cin>>inter;
    cout<<"Enter the total number of payments:"<<endl;
    cin>>numOpay;
           
    //Calculations
    //Calculate the payment in dollars
    payment=(inter/(12*100))*pow((1+inter/(12*100)),numOpay)/(pow((1+inter/(12*100)),numOpay)-1)*loan;
    //Calculate total cost of loan
    totcost=numOpay*payment-loan;
    
    //Output payment
    cout<<"The payment per month = $"<<payment<<endl;
    cout<<"Total cost of loan = $"<<totcost<<endl;
    
    //Exit stage right
    return 0;
}