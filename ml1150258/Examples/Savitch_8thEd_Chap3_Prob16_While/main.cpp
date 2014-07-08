/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 7th, 2014, 10:10 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables
    int degC=100,degF=9*degC/5+32;
    
    //Use a file loop for the test
    while(degC!=degF){
        degC--;
        degF=9*degC/5+32;
    }
    
    //Output the result
    cout<<"Celsius = Fahrenheit at "<<degC<<endl;

    //Exit Stage Right
    return 0;
}