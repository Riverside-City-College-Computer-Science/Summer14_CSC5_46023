/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 2, 2014, 12:29 PM
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
    //Declare Variable
    float dmg;          //Total Replacement Cost
    float rcm;          //Minmum amount of Insurance       
    
    //Output Simple Text
    cout<<"I'm sorry about the damage. How much is it going to cost?"<<endl;
    cout<<"$";
    cin>>dmg;
    cin.ignore();
    
    //Calculation for Minimum amount of Insurance
    rcm=dmg*8e-1;
    
    //Output the Results
    cout<<"You should buy an insurance that covers "<<fixed<<setprecision(2);
    cout<<"$"<<rcm<<" of damage."<<endl;
    
    
    return 0;
}

