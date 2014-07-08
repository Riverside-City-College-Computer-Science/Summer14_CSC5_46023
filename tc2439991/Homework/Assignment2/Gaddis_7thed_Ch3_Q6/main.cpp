/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 1, 2014, 11:13 AM
 * Purpose: Write a program that asks for five test scores.
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
    float test1, //Test 1
          test2, //Test 2
          test3, //Test 3
          test4, //Test 4
          test5, //Test 5
          totl,  //Total for all five tests.
          avg;   //Average for the tests.

    //Displayed Text that Prompts User for Input
    cout << "What was your score on the first test? ";
    cin >> test1;

    cout << "What was your score on the second test? ";
    cin >> test2;

    cout << "What was your score on the third test? ";
    cin >> test3;
    
    cout << "What was your score on the fourth test? ";
    cin >> test4;
    
    cout << "What was your score on the fifth test? ";
    cin >> test5;

    //Calculations
    totl = test1 +test2 + test3 + test4 + test5; //Adds Tests 1-5 to find the total score.
    avg = totl / 5; // The total divided by 5 yields the average.

    //Displayed Results
    cout << "Your average is " << avg << "%." <<endl; // Displays the average.

    //Fin
return 0;
}


