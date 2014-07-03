/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 2, 2014, 2:47 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float cls;          //Celsius
    float frh;          //Fahrenheit
    
    //Simple Text
    cout<<"Please enter the amount of Celsius you wish to convert: ";
    cin>> cls;          //Input Celsuis
    cin.ignore();
    
    //Calculation of the conversion to Fahrenheit
    frh=((9/5)*cls)+32;
    
    //Output of the Results
    cout<<fixed<<setprecision(2)<<frh<<" Degrees Fahrenheit"<<endl;
    return 0;
}

