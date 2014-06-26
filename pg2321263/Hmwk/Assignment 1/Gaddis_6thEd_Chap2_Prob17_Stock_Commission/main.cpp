/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 * Created on June 25, 2014, 6:48 PM
 * Purpose: Calculate the costs of buying stock
 */

//System Libraries
#include <iostream>
#include <iomanip>

//User-defined Libraries

//Global Constants

//Function Prototypes

using namespace std;

//Begin execution
int main(int argc, char** argv) {

    //Establish and initialize variables
    const int SIZE = 22;
    int shares = 600;
    float ppshare = 2.177e1,    //Price per share
          comRate = 2e-2,       //Commission rate
          stkCost,              //Stock cost
          comCost,              //Commission cost
          totCost;              //Total cost            
    
    //Calculations
    stkCost = shares * ppshare;
    comCost = stkCost * comRate;
    totCost = stkCost + comCost;
    
    //Display simple text
    cout<<setprecision(2)<<fixed;
    cout<<setw(SIZE)<<"Number of stocks:  "<<shares<<endl;
    cout<<setw(SIZE)<<"Price per share: $"<<ppshare<<endl;
    cout<<setw(SIZE)<<"Cost of stocks: $"<<stkCost<<endl;
    cout<<setw(SIZE)<<"Commission: $"<<comCost<<endl;
    cout<<setw(SIZE)<<"Total: $"<<totCost<<endl;
    
    //Finish him!!
    return 0;
}

