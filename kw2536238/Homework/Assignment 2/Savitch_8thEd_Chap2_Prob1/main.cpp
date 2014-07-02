/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 *Purpose: Savitch_8thEd_Chap2_Prob1
 * Created on June 28, 2014, 4:03 PM
 */

//System Level Libraries
#include <iostream>

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


using namespace std;

int main(int argc, char** argv) 
{

    //Declare and Initialize Variables
    float ounce,    //Weight, given in ounces
            tons;   //Weight, given in metric tons
    
    //Input the weight in ounces
    cout << "Please Input the number of ounces: ";
    cin >> ounce;
    
    //Calculate the Conversion
    tons = ounce/35273.92;
    
    //Output the data!
    cout << "If you have " << ounce;
    cout << " ounces, then there is a total of " << tons;
    cout << " metric tons! \n";
    return 0;
}

