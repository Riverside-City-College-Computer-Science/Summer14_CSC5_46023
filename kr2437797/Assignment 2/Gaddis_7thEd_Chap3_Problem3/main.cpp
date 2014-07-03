/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 1, 2014, 10:35 AM
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
    //Declare variables
    float tst1;         //Input of Test Score 1
    float tst2;         //Input of Test Score 2
    float tst3;         //Input of Test Score 3
    float tst4;         //Input of Test Score 4
    float tst5;         //Input of Test Score 5
    float tst6;         //Input of Test Score 6
    
    //Simple Text, Input of variables,
    cout<<"Please input 5 test scores: "<<endl;
    cin>>tst1>>tst2>>tst3>>tst4>>tst5;
    cin.ignore();
    
    //Calculation of Test Averages
    cout<<fixed<<setprecision(1)<<(tst1+tst2+tst3+tst4+tst5)/5<<endl;
    
    return 0;
}

