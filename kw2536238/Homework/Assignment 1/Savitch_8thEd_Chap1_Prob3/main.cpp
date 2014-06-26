/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap1_Prob1
 * Created on June 24, 2014, 8:15 PM
 */

//System libraries

#include <iostream>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    
    //Declare and Initialize All Variables
    int nop;     //Number of pods
    int ppp;     //Peas Per Pod
    int total;   // Total Number of Peas
    
    //Enter in Values and Calculate Total Peas
    cout << "Hello \n";
    cout << "Enter the number of pods: \n";
    cin >> nop;
    cout << "Enter the number of peas in a pod: \n";
    cin >> ppp;
    total = nop / ppp;
   
    //Output All Data!
    cout << "If you have ";
    cout << nop;
    cout << " pea pods \n";
    cout << "and ";
    cout << ppp;
    cout << " peas in each pod, then \n"; 
    cout << "you have ";
    cout << total;
    cout << " peas in all the pods.\n";
    cout << "Good-Bye! \n";
    return 0;
}
