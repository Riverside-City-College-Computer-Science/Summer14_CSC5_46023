/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savtich 8th Ed Chapter 3 Prob5
 * Created on July 7, 2014, 9:55 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare Variables
    //Input variables
    char day, dum;
    unsigned short min, hour;
    
    //Output variables
    float bill;
    
    //Input the data
    cout << "Telephone Bill for a Call: \n";
    cout << "Input the day of the week: (Mo Tu We Th Fr Sa Su) ";
    cin >> day >> dum;
    cout << "Input the time the call was started in military time: ";
    cin >> setw(2) >> hour>>dum>>dum>>dum;
    cout << "Input the duration time of the call (in minutes): ";
    cin >> min;
    
    //See which equation to use to calculate bill
    if (day == 'S'||day == 's')
        bill = 1.5e-1f*min;
    
    else if (hour>=8 && hour<=18)
        bill = 4e-1f*min;
    
    else 
        bill = 2.5e-1f*min;
    
    
    //Output results
    cout << "Your total bill will be " << bill << "$." << endl;
        
    //Exit Stage Right
    return 0;
}