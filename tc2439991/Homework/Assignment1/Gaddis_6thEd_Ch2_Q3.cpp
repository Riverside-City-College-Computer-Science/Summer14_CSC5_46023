/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on June 25, 2014, 6:30 PM
 */

//User Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Total sum of the purchases.
    short total=52;   // Let the total be 52
          
    float sstax=.04f, // Let the state sales tax be 4%
          cstax=.02f, // Let the county sales tax be 2%
          ttltx;      // Total tax
    
    //Calculation for the total sum of tax.
    ttltx=(total*sstax)+(total*cstax);
    
    //Display the total sales tax.
    cout<<"The total sales tax is $"<<ttltx<<"."<<endl;
    
    // Fin
    return 0;
}