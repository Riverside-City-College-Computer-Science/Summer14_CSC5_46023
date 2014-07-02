/* 
* File:   main.cpp
* Author: Krishen Wadhwani
* Purpose: Gaddis_7thEd_Chap3_Prob17
* Created on July 1, 2014, 1:10 PM
*/

//System level Libraries
#include <iostream>
#include <cmath>

using namespace std;

//User Defined Libraries

//Global Constants
const short CNV = 1/100;        //Conversion between desimal and percent

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{

   //Declare Variables
   //Input Variables
   float intRate,       //interest rate as a decimal
         pRate,         //interest rate in a percentage
         loan,          //loan amount  
         temp,          //temporary number
         nop;           //Number of payments to be made
   
   //Output Variables
   float pay;                   //Value for amount of payments
   
   //User input variables loan, percentage rate, and number of payments
   cout << "How much money did you take out on loan? \n";
   cin >> loan;
   
   cout << "At what interest rate did you take out the loan? \n";
   cin >> pRate;
   
   //converting percentage to decimal
   intRate = pRate/12/100;
   
   cout << "In how many payments do you want to pay off your loan? \n";
   cin >> nop;
   
   //Calculate the payments
   temp = pow(1+intRate,nop);
   pay = (intRate*temp)/(temp-1)*loan;
   
   //Output the data
   cout << "Each one of your payments will be " << pay <<"$." <<endl;
           
   
   
   
   return 0;
}