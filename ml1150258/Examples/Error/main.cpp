/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 3rd, 2014, 12:38 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare a sum 
    float sum=0, constant=0.09f, error;
    unsigned int loop=10000000;
    
    //Loop and add a constant
    for(unsigned int i=1;i<=loop;i++)sum+=constant;
    error=(sum-constant*loop)/(constant*loop)*100;
    
    //Output the sum
    cout<<constant<<" added "<<loop<<" times = "
        <<sum<<endl;
    cout<<"The percentage error = "<<error<<"%"<<endl;

    return 0;
}

