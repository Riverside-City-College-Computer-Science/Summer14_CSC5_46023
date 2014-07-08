/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 *  Created on July 2, 2014, 7:39 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {

   //Declare Variables
        float mpm, mph, spm;
        const int minHr=60, secHr=3600;
    
   //Displayed Text
    cout<<"Enter your pace in miles per hour: ";
    cin>>mph;
    cout<<"\n";
    
    //Calculations
    mpm = minHr/mph;
    spm = secHr/mph;
    
    //Displayed Results
    cout.setf(ios::fixed);
    cout.precision(2);  
    
    cout<<"Your pace is ";
    cout<<mpm;
    cout<<" minutes per mile or ";
     
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  
    
    cout<<spm;
    cout<<" seconds per mile.";
    cout<<"\n";
    
    //QED
    return 0;
}