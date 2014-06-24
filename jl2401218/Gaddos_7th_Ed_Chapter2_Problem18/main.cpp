/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Created on June 24, 2014, 11:20 AM
 * Purpose: Homework #1
 */

//System Library
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    // Declare and initialize variables
    unsigned short custSur=12467; //Number of Surveyed Customers
    float eDrnkP=.14f;            //Percentage of Customers that bought at least one energy drink
    float cDrnkP=.64f;            //Percentage of Citrus energy drinkers
    unsigned short enDrnkr;       //Number of Customers who bought energy drinks
    unsigned short citDrnkr;      //Number of Customers who bought citrus energy drinks
    
    //Calculate number of energy and citrus drinkers
    enDrnkr=custSur*eDrnkP;
    citDrnkr=enDrnkr*cDrnkP;
    
    //Ouput Results
    cout<<"Number of Energy Drinkers = "<<enDrnkr<<endl;
    cout<<"Number of Citrus Flavored Energy Drinkers = "<<citDrnkr<<endl;
    
    //End of Program
    
    return 0;
}

