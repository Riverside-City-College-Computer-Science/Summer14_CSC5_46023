/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on June 30, 2014, 12:07 PM
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
    
    float tnk;      //Amount of gas the Tank can hold
    float mls;      //Miles car can run on a full tank
    
    //Simple output of text
    cout<<"Please enter how many gallons your car can hold: "<<endl;
    
    //Input the amount of gas the tank can hold
    cin>>tnk;   
    cin.ignore();
    cout<<"Now enter how many miles it can drive on a full tank: "<<endl;
    
    //Input miles
    cin>>mls;   
    cin.ignore();
    
    //Calculation of MPG by diving miles by the amount in the tank
    cout<<"Your MPG: "<<fixed<<setprecision(2)<<mls/tnk<<endl;
    
    return 0;
}

