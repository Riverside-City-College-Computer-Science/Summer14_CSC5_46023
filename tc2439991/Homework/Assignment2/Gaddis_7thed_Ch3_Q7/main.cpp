/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 1, 2014, 12:30 PM
 * Purpose: Write a program that calculates the average monthly rainfall for three months.
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv)
{
   //Declare Variables
   char month1[10], month2[10], month3[10]; //User will enter month 1, 2, and 3.
   float rnfl, avgRnfl, ttlRnFl = 0; //Rainfall, Average Rainfall, Total Rainfall

   //Displayed Text
   cout << "Enter three months: " << endl; //Prompts user to enter in 3 months.
   cin >> month1 >> month2 >> month3;
   
   cout << "Enter the amount of rainfall in inches " << month1 << "?" << endl; 
   cin >> rnfl;
   ttlRnFl += rnfl; //Prompts user to enter amount of rainfall for the first month.

   cout << "Enter the amount of rainfall in inches " << month2 << "?" << endl;
   cin >> rnfl;
   ttlRnFl += rnfl; //Prompts user to enter amount of rainfall for the second month.

   cout << "Enter the amount of rainfall in inches " << month3 << "?" << endl;
   cin >> rnfl;
   ttlRnFl += rnfl; //Prompts user to enter amount of rainfall for the third month.

   avgRnfl = ttlRnFl / 3; //The total amount of rainfall divided by 3 is the average rainfall.

   cout <<"The average amount of rainfall over "<<month1<<", "<<month2<<", "<<month3<<" was "<<avgRnfl<<" inches."<<endl;
   
   //Fin
   return 0;
}


