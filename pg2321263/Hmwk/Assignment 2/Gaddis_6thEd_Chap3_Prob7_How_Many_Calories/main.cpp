/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 * Created on June 26, 2014, 1:25 PM
 * Purpose: Calculate how many calories someone ate
 */

//System Libraries
#include <iostream>
#include <iomanip>

//User-defined Libraries

//Global Constants

//Function Prototypes

using namespace std;

//Begin execution
int main(int argc, char** argv) {

    //Declare and initialize variables
    int serv = 4;               //Number of cookies per serving
    float cal, cook;            //Total calories & cookies consumed
    short calPer = 300;         //Calories per serving, total cookies eaten
    
    //Request user inputs
    cout << "How many cookies did you eat? ";
    cin >> cook;
    
    //Calculations
    cal = (cook / serv) * calPer;
    
    //Output data
    if (cal >= 1000)
        cout << "You consumed " << cal << " calories, you fattie!!" << endl;
    else
        cout << "You consumed " << cal << " calories." << endl;

    //Finish him!!
    return 0;
}

