/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap2_Prob12
 * Created on June 29, 2014, 2:49 PM
 */

//System Level Libraries
#include <iostream>
#include <cmath>

using namespace std;

//User Defined Libraries

//Function prototype

//Execution Begins Here!
int main(int argc, char** argv) 
{

    //Declare and Initialize All Variables
    float r,        //Used for calculating the square root of n
          n,        //Number to be taken the square root
          guess;    //Guess for what the square root is
    
    //Input the Data (the number and guess)
    cout << "Please enter in the number you want to find the square root of: ";
    cin >> n;
    cout << "Please enter in your guess: ";
    cin >> guess;
        
    //Calculate the square root
    if (guess = pow(n,0.5))
        cout << "The square root of " << n <<" is " << guess; //Output if data is right
    else
        r = n/guess,
        guess = (guess+r)/2;
        
    return 0;
}

