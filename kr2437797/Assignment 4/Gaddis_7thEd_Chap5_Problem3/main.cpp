/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 10, 2014, 11:19 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Prototype Functions

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int yr;
    float lvl;
    
    //Initialize Variables
    yr=1;
    lvl=0;
    
    //While Statement: As long as years is less than 25, keep outputting
    while(yr<=25){
        
        //Calculation: Outputs Ocean Level Rise per year
        lvl+=1.5;              
        
        //Outputs
        cout<<"Year:"<<yr++<<endl;                              //Year & Increment
        cout<<"Ocean Level: "<<lvl<<" millimeters"<<endl;       //Output Millimeters
        
    }
            
    
    
    return 0;
}

