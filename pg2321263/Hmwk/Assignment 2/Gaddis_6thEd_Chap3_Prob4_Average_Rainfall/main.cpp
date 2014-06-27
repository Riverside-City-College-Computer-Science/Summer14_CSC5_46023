/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 * Created on June 26, 2014, 12:53 PM
 * Purpose: Calculate the average rainfall over 3 months
 */

//System Libraries
#include <iostream>
#include<iomanip>

//User-defined Libraries

//Global Constants

//Function Prototypes

using namespace std;

//Begin execution
int main(int argc, char** argv) {

    //Declare and initialize variables
    const int MONTH = 10;
    char month1[MONTH], month2[MONTH], month3[MONTH];
    float rnfall, avgRain;
    
    //Request user input
    cout << "What was the first month of recorded rainfall? ";
    cin.getline(month1, MONTH);
    cout << "What was the second month of recorded rainfall? ";
    cin.getline(month2, MONTH);
    cout << "What was the third month of recorded rainfall? ";
    cin.getline(month3, MONTH);
    cout << "What was the total rainfall in those three months? (inches) ";
    cin >> rnfall;
    
    //Calculations
    avgRain = rnfall / 3;
    
    //Display results
    cout << setprecision(1) << fixed;
    cout << "In the months of " << month1 << ", " << month2 << ", and " << month3 << " there was an average of ";
    cout << avgRain << " inches of rainfall." << endl;
    
    //Finish him!!
    return 0;
}

