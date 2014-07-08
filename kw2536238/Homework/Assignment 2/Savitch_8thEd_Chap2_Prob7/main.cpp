/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap2_Prob13
 * Created on July 2, 2014, 10:26 AM
 */

//System Level Libraries
#include <iostream>

using namespace std;

//User Defined Libraries

//Global Constants
const float SSTAX = 0.06f,       //Social Security Tax (6%)
            FEDTAX = 0.14f,      //Federal Income Tax (14%)
            STTAX = 0.05f,       //State Income Tax (5%)
            UNIDUE = 10.00f;        //Money due for Union Taxes

//Function Prototypes                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````-

int main(int argc, char** argv)
{

    //Declare and Initialize All Variables
    //Inputs
    int time,           //Number of hours the employee worked this week
        dep;            //Number of dependents that the employee has
    const float PAY = 16.78f,    //Pay per hour
                DEPDUE = 35.00f; //Dues for having 3 or more dependents
    
    //Outputs
    float grPay,        //Gross amount of money made
          netPay;       //Amount of money actually made after accounting for taxes
    
    //Input Values from the User
    cout << "How many hours did you work this week? ";
    cin >> time;
    cout << "How many dependents do you have? ";
    cin >> dep;
    
    //Check for overtime
    if (time > 40)
        grPay = 40*PAY + (time-40)* 1.5*PAY;    //Overtime pay equation
    else
        grPay = time*PAY;                       //For less pay than 40 hours
    
    //Temporary variable made in order for clarity
    float temp; 
    temp = 1-SSTAX - FEDTAX - STTAX;    //Accounting for the percentage taxes (Social security, federal income, and state income taxes)
            
    //Check for number of dependents
    if (dep >= 3)
        netPay = grPay*temp - UNIDUE - DEPDUE;  //If there are 3+ dependents, then there is an extra due
    else 
        netPay = grPay*temp - UNIDUE;           //< 3 dependents means no extra dues
    
    //Output the data
    cout << "If you work " << time << " hours a week, your gross pay will be \n";
    cout << grPay << "$, but after taxes and dues, you will only \nmake " << netPay;
    cout << "$. The government sucks.";
    
    //Exit Stage Right
    return 0;
}