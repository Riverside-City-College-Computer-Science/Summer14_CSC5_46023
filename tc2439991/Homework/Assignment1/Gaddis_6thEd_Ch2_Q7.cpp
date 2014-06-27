/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on June 25, 2014, 08:31 PM
 */

//System Libraries
#include <iostream>    

//User Defined Library

//Global Constants

//Function Prototypes

//Execution Begins Here
using namespace std;

int main(int argc, char** argv) {
    
//Declare and Initialize Variables
    float upocn=1.5f;    // Let the rise of the ocean level be 1.5 millimeters. 
    
//Calculating 5 year rise and output simple text
    cout<<"After 5 years, the ocean will be "<<upocn*5<<"mm higher."<<endl;
//Calculating 7 Year rise and output simple text
    cout<<"After 7 years, the ocean will be "<<upocn*7<<"mm higher."<<endl;
//Calculating 10 year rise and output simple text
    cout<<"After 10 years, the ocean will be "<<upocn*10<<"mm higher."<<endl;
    
//Fin
    return 0;
}