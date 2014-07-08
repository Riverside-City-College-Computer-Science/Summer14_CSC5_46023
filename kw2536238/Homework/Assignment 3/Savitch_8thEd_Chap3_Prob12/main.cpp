/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap3_Pro12
 * Created on July 7, 2014, 5:43 PM
 */

//System Level Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Defined Libraries

//Global Constants
float NUM = 4.0f;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare and Initialize Variables
    int n,             //number inputted by the user
        count = 0;     //count to help control loop
    float pi = 0;
    
    cout << "Let's approximate the value of Pi! \n";
            
    //Input value
    cout << "Please Enter a number: ";
    cin >> n;
    
    //Loop to complete series
    while (n > count){
        n--;
        pi = pi + 4*(pow(-1,n)/(2*n+1));
    };
        
    //Output the Data
    cout << "Pi has been approximated to be " << pi << ".";

    return 0;
}

