/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 2, 2014, 10:25 AM
 * Purpose: Write a program that asks the user for an angle, entered in radians.
 */

#include <iostream>
#include <cmath>        // Needed to use trig function
using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float valx,         // value x is radian inputted by the user
          y1, y2, y3,   // y1-y6 refer to the angle outputs 
          y4, y5, y6;  
    
    //Displayed Text
        cout<<"Enter your angle value in radians: "<<endl;
        cin >> valx;
    
    //Calculations
        y1=sin(valx), y4=1/sin(valx), // 1/sin(x) is equivalent to csc(x)
        y2=cos(valx), y5=1/cos(valx), // 1/cos(x) is equivalent to sec(x)
        y3=tan(valx), y6=1/tan(valx); // 1/tan(x) is equivalent to cot(x) 
                                      // I included the extra trig functions just because :D
                                     
    //Displayed Results
        cout<<"sin(x): "<<y1<<endl;
        cout<<"cos(x): "<<y2<<endl;
        cout<<"tan(x): "<<y3<<endl;
        cout<<"csc(x): "<<y4<<endl;
        cout<<"sec(x): "<<y5<<endl;
        cout<<"cot(x): "<<y6<<endl;
        
    //QED
    return 0;
}

