/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 1, 2014, 10:36 AM
 * Purpose: Write a program that calculates a car’s gas mileage.
 */

//System Libraries
#include <iostream>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

        //Declare Variables
        unsigned short gallons;     // Gallons
        unsigned short miles;       // Miles
        float mpg;                  // Miles Per Gallon

        //Displayed Text that Prompts User for Input
	cout <<"How many gallons can your car hold?\n";          //Prompts user for an input.
	cin >> gallons;                                          //Stores user input for how many gallons.
	cout <<"How many miles can you drive on a full tank?\n"; //Prompts user for an input.
	cin >> miles;                                            //stores input from user in miles
	
        //Calculations
	mpg = static_cast<float>(miles) / gallons;               //Divides miles by gallons and stores as MPG
	
        //Final Results Displayed
	cout << "Your car gets " << mpg                          //Displays MPG
             << " miles to the gallon.\n";                   
	
        //QED
	return 0;
}

