/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 10, 2014, 11:56 AM
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
    float cal;
    float mins;
    
    //Input For statement
    for (mins=10;mins<=30;mins+=5){     //Starts at 10 and ends at 30, increments by 5
        //Calculation of calories Burned
         cal=mins*3.9;
        
        //Simple output of text and Result: Minutes
        cout<<"Minutes "<<mins<<endl;
        //Simple output of text and result: Calories        
        cout<<"Calories Burned :"<< cal;
        
        //Ends the line after Minutes
        if(mins<=30)
           cout<<endl; 
    }
        
        
    
    return 0;
}

