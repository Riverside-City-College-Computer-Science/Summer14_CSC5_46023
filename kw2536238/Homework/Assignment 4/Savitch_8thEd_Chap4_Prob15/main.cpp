/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap4_Prob15
 * Created on July 10, 2014, 11:16 AM
 */

//System Level Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//User Defined Libraries

//Global Constants
const float CNVDC = 1.0/100.0f;  //Cents to Dollars Conversion

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare and Initialize Variables
    unsigned int twnkCt = 350; 
    string coinNm;
    float totInp = 0,
          coinVal = 0,
          totDol = 0,
          change;
    
    cout << "Hello! A twinkie costs $3.50. Please input the \nfirst coin that you want insert into the machine \n(dollar, quarter, dime, nickel): ";
    cin >> coinNm;
        
    if (coinNm == "dollar"){
        coinVal = 100;
    }
    else if (coinNm == "quarter"){
        coinVal = 25;
    }
    else if (coinNm == "dime"){
        coinVal = 10;
    }
    else if (coinNm == "nickel"){
        coinVal = 5;
    }
    
    cout<<fixed<<showpoint<<setprecision(2); 
    totInp += coinVal;
    totDol = totInp*CNVDC;
    cout << "------------------------------------\n";
    cout << "So far your total is $" << totDol <<endl;
    
    while (totInp <= twnkCt){

        cout << "What is your next coin? ";
        cin >> coinNm;
        
        cout << "------------------------------------\n";
        if (coinNm == "dollar"){
            coinVal = 100;
        }
        else if (coinNm == "quarter"){
            coinVal = 25;
        }
        else if (coinNm == "dime"){
            coinVal = 10;
        }
        else if (coinNm == "nickel"){
            coinVal = 5;
        }
        else 
            cout << "Invalid input!";
        
        totInp += coinVal;
        totDol = totInp*CNVDC;
        cout << "So far your total is $" << totDol <<endl;
    }
    change = totDol - twnkCt*CNVDC;
    cout << "-----------------------------------------------------------------------------------\n";
    cout << "You have more than $3.50! Enjoy your deep fried twinkie! Your change will be " << change << "$. " << endl;
        
    return 0;
}

