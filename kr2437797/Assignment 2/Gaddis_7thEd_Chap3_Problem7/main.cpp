/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 1, 2014, 12:53 PM
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
    short ckie, srvig;
    
    //Simple text Output
    cout<<"Please enter how many cookies you've eaten: "<<endl;
    cin>>ckie;                          //Input of how many cookies eaten
    cout<<"No judgement..."<<endl;      //reassuring output of simple text
    cout<<"Total calories consumed: ";
    cout<<ckie*75;                      //1 Cookie=75 calories
    
    return 0;
}

