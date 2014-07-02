/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 2, 2014, 1:22 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare variables
    //Inputs and Constants
    float n;    //Compounding periods in years
    //Outputs
    float guess;//The guess to doubling money
    
    //Inputs
    cout<<"Guess the number of years to double your money with compound interest:"<<endl;
    cin>>n;
    
    //Calculations
    guess=pow((1+(72/(n*100))),n);
    
    //Determine if the answer is close to 2
    if (guess>2){
        cout<<"Your guess is too high and will get you "<<guess<<" times your money"<<endl;
    }else if (guess=2){
        cout<<"Your guess is perfect and will get you "<<guess<<" times your money"<<endl;
    }else {
        cout<<"Your guess is too low and will get you "<<guess<<" times your money"<<endl;
    }
    
    //Exit stage right
    return 0;
}
