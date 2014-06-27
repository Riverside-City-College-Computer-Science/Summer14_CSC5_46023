/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Created on June 24, 2014, 11:20 AM
 * Purpose: Homework Assignment 1
 */
//System library
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Declare and Initialize Variables
    
    unsigned short cus = 12467; //Total customers surveyed
    float enrgyp = 0.14f;       //Percentage of Energy Drinkers
    unsigned short toten;       //Total Number of Energy Drinkers
    float citrusp = 0.64f;      //Percentage of Energy Drinkers who Drink Citrus
    unsigned short totcis;      //Total Number of Citrus Drinkers
    
    //Calculate Energy and Citrus Drinkers
    
    toten = cus*enrgyp;         //Calculating the Total Number of Energy Drinkers
    totcis = toten*citrusp;     //Calculating the Total number of Citrus Drinkers
    
    //Output the Results!
    
    cout <<"The total number of customers who drink Citrus Energy Drinks is "<< totcis<<endl;
    
    return 0;
}