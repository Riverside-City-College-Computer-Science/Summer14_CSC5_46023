/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on June 25, 2014, 10:12 PM
 */

//System Libraries
#include <iostream>     //Defines the standard input/output stream objects

//User Defined Library

//Global Constants

//Function Prototypes

//Execution begins here
using namespace std;


int main(int argc, char** argv) {
    
    //Variable Declaration
    float oshn=1.5f;    //the rise of the ocean level is 1.5 millimeters
    
    //Calculating 5 year rise and output simple text
    cout<<"After 5 Years, the ocean will be "<<oshn*5<<"mm higher."<<endl;
    //Calculating 7 Year rise and output simple text
    cout<<"After 7 Years, the ocean will be "<<oshn*7<<"mm higher."<<endl;
    //Calculating 10 year rise and output simple text
    cout<<"After 10 Years, the ocean will be "<<oshn*10<<"mm higher."<<endl;
    
   

       
    return 0;
}

