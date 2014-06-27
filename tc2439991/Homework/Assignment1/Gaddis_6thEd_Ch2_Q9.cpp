/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on June 25, 2014, 9:12 PM
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
    float perProf = 4e-1,   // Percent profit is 40%
          cbcost = 1.267e1, // Cost to produce the circuit board is $12.67
          price;            // Total
    
//Calculations
    price = cbcost * (1 + perProf);
    
//Display Text
    cout <<setprecision(2)<<fixed;
    cout<<"The circuit board costs $"<<price<<"."<<endl;
    
//Fin
    return 0;
}