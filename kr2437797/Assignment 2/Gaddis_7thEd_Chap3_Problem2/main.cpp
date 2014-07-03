/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 1, 2014, 10:21 AM
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
    float clsA;
    float clsB;
    float clsC;
    
    //Simple Text Output
    cout<<"How many Class A tickets were sold?"<<endl;
    cin>>clsA;          //Input Class C tickets
    cin.ignore();
    cout<<"How many Class B tickets were sold?"<<endl;
    cin>>clsB;          //Input Class C tickets
    cin.ignore();
    cout<<"How many Class C tickets were sold?"<<endl;
    cin>>clsC;          //Input Class C tickets
    cin.ignore();
    cout<<"Total Income: ";
    
    //Calculate and Output total costs
    cout<<fixed<<setprecision(2)<<(clsA*15)+(clsB*12)+(clsC*9)<<endl;
            
        
    return 0;
    
}

