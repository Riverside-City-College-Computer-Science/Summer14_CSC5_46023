/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap1_Prob8
 * Created on June 25, 2014, 6:03 PM
 */

//System libraries
#include <iostream>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Declare and Initialize All Variables
    short quat, //Number of Quarters
        dime, //Number of Dimes
        nick, //Number of Nickels
        totq, //Total cents for quarters
        totd, //Total cents for dimes
        totn, //Total cents for nickels
        total; //Total cents
    
    //Calculate the total cents for each specific type of money
    
    //Total amount of money from quarters
    cout << "How many quarters do you have? \n";
    cin >> quat;
    totq = quat*25;
    
    //Total amount of money from dimes
    cout << "How many dimes do you have? \n";
    cin >> dime;
    totd = dime*10;
    
    //total amount of money from nickels
    cout << "How many nickels do you have? \n";
    cin >> nick;
    totn = nick*5;
    
    //Calculate the total amount of money
    total = totq + totd + totn;
            
    //Output the Data!
    cout << "You have a total of ";
    cout << total;
    cout <<" cents! Wow, you must be rich!";
    return 0;
}

