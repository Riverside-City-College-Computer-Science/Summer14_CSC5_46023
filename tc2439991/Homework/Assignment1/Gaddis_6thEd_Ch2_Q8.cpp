/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on June 25, 2014, 8:37 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

//Declare and Initialize Variables
    const int SIZE = 5;
    float itm1 = 12.95f, // Item 1 costs $12.95
          itm2 = 24.95f, // Item 2 costs $24.95
          itm3 = 6.95f,  // Item 3 costs $6.95  
          itm4 = 14.95f, // Item 4 costs $14.95
          itm5 = 3.95f,  // Item 5 costs $3.95
          sTotal,        // Subtotal
          slsTax = 6e-2, // Let the sales tax be 6%  
          taxAmt,        // Tax Amount
          total;         // Total
    
//Calculations
    sTotal = itm1+itm2+itm3+itm4+itm5;
    taxAmt = sTotal*slsTax;
    total  = sTotal+taxAmt;
    
//Display Text
    cout<<setw(SIZE)<<"Customer's Purchases:"<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<setw(SIZE)<<"$"<<itm1<<endl;
    cout<<setw(SIZE)<<"$"<<itm2<<endl;
    cout<<setw(SIZE)<<"$"<<itm3<<endl;
    cout<<setw(SIZE)<<"$"<<itm4<<endl;
    cout<<setw(SIZE)<<"$"<<itm5<<endl;
    cout<<setw(SIZE)<<"Subtotal: $"<<sTotal<<endl;
    cout<<setw(SIZE)<<"Sales Tax: $"<<taxAmt<<endl;
    cout<<setw(SIZE)<<"Total: $"<<total<<endl;
    
//Fin
    return 0;
}