/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 1, 2014, 10:42 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Here we go
int main(int argc, char** argv) {
    
    //Declare Variables
    string month1,month2,month3;
    float ran1,ran2,ran3;
    
    //Output simple text
    cout<<"Enter the Months you are Averaging: "<<endl;
    cin>>month1>>month2>>month3;
    cin.ignore();
    cout<<"Enter amount of Rainfall for each month: "<<endl;
    
    //Input the Average Rainfall
    cin>>ran1>>ran2>>ran3;
    cin.ignore();
    cout<<"The average rainfall for ";
    cout<<month1<<", "<<month2<<", and "<<month3<<" is ";
    
    //Calculation of Average Rain Fall
    cout<<fixed<<setprecision(2)<<(ran1+ran2+ran3)/3<<" inches.";
    return 0;
}

