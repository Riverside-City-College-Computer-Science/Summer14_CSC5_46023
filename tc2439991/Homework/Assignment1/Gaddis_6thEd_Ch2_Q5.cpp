/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on June 25, 2014, 7:37 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User-defined Libraries

//Global Constants

//Function Prototypes

//Begin Execution Here
int main(int argc, char** argv) {
    
//Declare and Initialize Variables
short   a = 28,  // Let a be 28 
        b = 32,  // Let b be 32
        c = 37,  // Let c be 37     
        d = 24,  // Let d be 24
        e = 33,  // Let e be 33     
        sum;     // Total
            
    //Calculations
    sum = a + b + c + d + e;
    
    //Display Text
    cout<<"The average is "<<sum/5<<"."<<endl;
    
    //Fin
    
    return 0;
}