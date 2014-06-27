/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on June 25, 2014, 10:20 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>

//User Defined Libraries

//Global Constants

//Function Prototypes

using namespace std;

//Execution Begins Here
int main(int argc, char** argv) {

//Declare and Initialize Variables
    int tank = 20;          // Gallons of fuel per tank
    float mpgTwn = 21.5,    // Miles per gallon in town
          mpgHwy = 26.8,    // Miles per gallon on the highway
          Twn,              // Miles per tank in town
          Hwy;              // Miles per tank on the highway
    
//Calculations
    Twn = mpgTwn * tank;
    Hwy = mpgHwy * tank;
    
//Display Text
    cout<<"The vehicle is able to travel "<<Twn<<" miles in town."<<endl;
    cout<<"The vehicle is able to travel "<<Hwy<<" miles on the highway."<<endl;
    
//Fin
    return 0;
}