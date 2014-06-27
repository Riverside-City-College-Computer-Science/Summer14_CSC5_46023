/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on June 24, 2014, 1:28 PM
 */

//User Library
#include <iostream>
#include <iomanip>

//User Defined
using namespace std;

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    
    //Declare Variables
    float estcst=6.2e-1f;
    int sales=4600000;
    
 
    //estcst=6.2e-1f; //East Coast division sales are 62% of total sales
    //sales=4600000;   //Total Sales equal 4.6 million
    
    //Output and result
    
    cout<< fixed << setprecision(2)<<estcst*sales<<endl;
    return 0;
}

