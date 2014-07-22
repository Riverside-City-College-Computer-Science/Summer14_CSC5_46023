/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 14th, 2014, 12:28 PM
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void hdTails();

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Set the Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Loop on function call, flip a coin 10 times
    for(int i=1;i<=10;i++){
        hdTails();
    }

    return 0;
}

//Simple heads or tails function
void hdTails(){
    
    //Determine if a flip of a coin is heads or tails
    bool heads=rand()%2;//Remainder 0,1
    
    //Output the result
    if(heads)cout<<"Heads flipped"<<endl;
    else cout<<"Tails flipped"<<endl;
    
}

