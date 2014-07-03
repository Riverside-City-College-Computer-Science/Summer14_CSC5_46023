/* 
 * File:   main.cpp
 * Author: Dr. Mark E.Lehr
 * Created on July 2, 2014, 10:24 AM
 */

//System Libraries
#include <cstdlib> //Setting the Random number seed
#include <iostream>//cin/cout
#include <ctime>   //Utilize time as input to seed
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare variables
    float n,guess,r;
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));  
    
    //Input the number
    n=rand()%15+2;
    
    //First Pass Babylonian Approximation
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output first pass results
    cout<<"Number to find the square root of = "
        <<n<<endl;
    cout<<"First pass guess = "<<guess<<endl;
    
    //Second Pass Babylonian Approximation
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output Second pass results
    cout<<"Second pass guess = "<<guess<<endl;
    
    //Third Pass Babylonian Approximation
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output Third pass results
    cout<<"Third pass guess = "<<guess<<endl;
    
    //Fourth Pass Babylonian Approximation
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output Fourth pass results
    cout<<"Fourth pass guess = "<<guess<<endl;

    return 0;
}

