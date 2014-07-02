/* 
* File:   main.cpp
* Author: Krishen Wadhwani
* Purpose: Savitch_8thEd_Chap2_Prob4
* Created on July 1, 2014, 11:53 AM
*/

//System Level Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants
const float CNV = 1.0/12.0; //Conversion between months and years

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
   //Declare Variables
   //Input Variables
   float oSalary,              // The original salary
         pIncr;                //The percentage increase for the employee salary
   unsigned short time;        //time in years for which the retroactive pay will take play
   
   //Output Variables
   float retPay,               //Retroactive Pay
         nSalary,              //New annual salary
         monSal;               //New monthly salary
   
   //User Inputs Variables
   cout << "What is your original annual salary? ";
   cin >> oSalary;
   pIncr = 7.6e-2;     //The pay increase is at a constant 7.6%
   cout << "How long is your retroactive pay(in months)?";
   cin >> time;        //Time for retroactive pay in months
   retPay = oSalary*pIncr*time*CNV;    //Calculate retroactive pay
   nSalary = oSalary*(1+pIncr);        //calculate the new salary
   monSal = nSalary*CNV;               //Calculate the new monthly salary
   
   //Output the data
   cout << "Your retroactive pay will be: " <<retPay<<"$"<<endl;
   cout << "Your annual salary will be: " <<nSalary<<"$"<<endl;
   cout << "Your monthly salary will be: " <<monSal<<"$"<<endl;
   
   //Exit stage right
   return 0;
}

