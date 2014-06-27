/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on June 25, 2014, 2:39 PM
 * Question: Sales Prediction
 */

//System Library
#include <iostream>
using namespace std;

//User-defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and Initialize Variables
    float revprct = 6.2e-1f;   //Revenue Percentage
    int totrev = 4.6e6;        //Total Revenue
    int ecrevg;                 //East Coast Revenue Generated

    //Calculation
    ecrevg = revprct*totrev;

    //Display Text
    cout<<"The East Coast Division made $"<<ecrevg<<" of the total $"<<totrev<<" revenue this year."<<endl;

    //Exit Stage Right
    return 0;
}