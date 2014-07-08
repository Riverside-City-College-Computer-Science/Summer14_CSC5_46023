/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 8th, 2014, 10:47 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Part 1 Declare variables
    float aprxPi1=1;
    int nTerms=10000000;
    //Loop to approximate pi with infinite sequence
    for(int i=3;i<=nTerms/2;i+=4){
        aprxPi1+=(-1.0f/i+1.0f/(i+2));
    }
    aprxPi1*=4;
    //Output the results
    cout<<"Approx PI utilizing infinite sequence = "
        <<aprxPi1<<" with "<<nTerms<<" terms"<<endl;
    
    //Declare Part 2 Mark's Stochastic Integration
    float aprxPi2;
    int nDarts=nTerms,inCircle=0;
    float maxRand=pow(2,31)-1;
    srand(static_cast<unsigned int>(time(0)));
    //Throw Darts
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/maxRand;
        float y=rand()/maxRand;
        if(x*x+y*y<1)inCircle++;
    }
    aprxPi2=4.0f*inCircle/nDarts;
    
    //Output the results
    cout<<"Approx PI utilizing Darts = "
        <<aprxPi2<<" with "<<nTerms<<" terms"<<endl;
    
    //Exit stage right
    return 0;
}

