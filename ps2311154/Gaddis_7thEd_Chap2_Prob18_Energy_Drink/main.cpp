/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th edition Chapter 2 Problem 18 Homework
 * Created on June 24, 2014, 11:39 AM
 */

//System Library
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short cusSrvy=12467;//Customers Surveyed
    float eDrnkp=1.4e-1f;//Percentage Energy Drinkers from Survey
    float cDrnkp=6.4e-1f;//Percentage of Citrus Drinkers of those Energy Drinkers
    unsigned short enDrnk,citDrnk;//Number of energy and citrus drinkers
    
    //Calculate the number of energy and citrus drinkers
    enDrnk=cusSrvy*eDrnkp;
    citDrnk=enDrnk*cDrnkp;
    
    //Output the results
    cout<<"Total Number of Customers Surveyed = "<<cusSrvy<<endl;
    cout<<"Number of Energy Drinkers = "<<enDrnk<<endl;
    cout<<"Number of Citrus Drinkers = "<<citDrnk<<endl;
    
    //Exit Stage Right!
    return 0;
}