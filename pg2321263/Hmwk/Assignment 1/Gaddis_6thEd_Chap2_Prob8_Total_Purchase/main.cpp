/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 * Created on June 25, 2014, 1:42 PM
 * Purpose: Calculate total purchase price
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User-defined Libraries

//Global Constants

//Function Prototypes

//Begin program execution
int main(int argc, char** argv) {

    //Establish variables
    const int SIZE = 15;
    float item1 = 12.95f,   item2 = 24.95f,
          item3 = 6.95f,    item4 = 14.95f,
          item5 = 3.95f,    subTtl,
          slsTax = 6e-2,    taxAmt,
          total;
    
    //Calculations
    subTtl = item1 + item2 + item3 + item4 + item5;
    taxAmt = subTtl * slsTax;
    total = subTtl + taxAmt;
    
    //Simple text output
    cout<<setprecision(2)<<fixed;
    cout<<setw(SIZE)<<"Subtotal: "<<"$"<<subTtl<<endl;
    cout<<setw(SIZE)<<"Sales Tax: "<<"$"<<taxAmt<<endl;
    cout<<setw(SIZE)<<"Total: "<<"$"<<total<<endl;
    
    //Finish him!!
    return 0;
}

