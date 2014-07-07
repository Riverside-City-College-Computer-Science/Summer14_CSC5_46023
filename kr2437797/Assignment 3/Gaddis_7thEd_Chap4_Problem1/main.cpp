/* 
 * File:   main.cpp
 * Author: Kevin
 *
 * Created on July 3, 2014, 1:31 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num1;                                   //First number input
    int num2;                                   //Second number input
    int rslt;                                   //Result of the Greater number
    //Simple Text Output
    cout<<"Enter two numbers: "<<endl;
    
    //Input First and Second Number Input
    cin>>num1>>num2;
    cin.ignore();
    
    //If/Else Statement
    rslt=num1>num2?num1:num2;
    
    //Outputs the Result with simple text
    cout<<rslt<<" is the greater number"<<endl;
             
    
    return 0;
}

