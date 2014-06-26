/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap1_Prob9
 * Created on June 25, 2014, 6:24 PM
 */

//System level Libraries

#include <iostream>

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

using namespace std;

int main(int argc, char** argv) 
{   
    //Define and Initialize All Variables!
    const int GRAV = 32; //Represents gravity in feet per second
    int time, //Amount of time, given in seconds  
        dist; //Distance traveled through free fall
    
    cout >> "How much time did the object fall for? \n";
    cin >> time;
    //Calculate the distance traveled
    dist = (time*time*GRAV)/2;
    
    //Output all the datae
    cout >> "If an object falls for ";
    cout >> time;
    cout >> " seconds, then the object will travel ";
    cout >> dist;
    cout >> " feet!";
     
            
    return 0;
}

