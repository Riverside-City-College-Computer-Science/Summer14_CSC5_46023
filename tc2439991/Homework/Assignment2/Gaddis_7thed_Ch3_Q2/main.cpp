/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 1, 2014, 11:13 AM
 * Purpose: Write a program that asks how many tickets for each class of seats 
 * were sold, then displays the amount of income generated from ticket sales.
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
    unsigned short pA = 15; //Class A seats cost $15
    unsigned short pB = 12; //Class B seats cost $12
    unsigned short pC = 9;  //Class C seats cost $9
    unsigned int qtyA, qtyB, qtyC, revA, revB, revC, revTotal;

    //Displayed Text
    cout << "How many Class A seats ($" << pA << ") were sold? ";
    cin >> qtyA;

    cout << "How many Class B seats ($" << pB << ") were sold? ";
    cin >> qtyB;

    cout << "How many Class C seats ($" << pC << ") were sold? ";
    cin >> qtyC;

    //Calculations
    revA = qtyA * pA;
    revB = qtyB * pB;
    revC = qtyC * pC;
    revTotal = revA + revB + revC;

    //Displayed Results
    cout << "Class A seats generated total revenue of $" << revA << endl;
    cout << "Class B seats generated total revenue of $" << revB << endl;
    cout << "Class C seats generated total revenue of $" << revC << endl;
    cout << "Total revenue from all seat sales was $" << revTotal << endl;

    //QED
return 0;
}


