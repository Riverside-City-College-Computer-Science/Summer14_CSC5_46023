/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 7th, 2014, 10:10 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Proper way to test for an equality
    //given a floating variable
    
    //Declare a variable
    int numLoops=1000;
    float sum=0,frac=0.1f;
    float tol=frac/2;
    float product=frac*numLoops;
    
    //Loop the sum
    int i;
    for(i=1;!(sum>=(product-tol))&&(sum<=(product+tol));i++){
        sum+=frac;
        cout<<"i="<<i<<" sum="<<sum<<endl;
    }

    return 0;
}

