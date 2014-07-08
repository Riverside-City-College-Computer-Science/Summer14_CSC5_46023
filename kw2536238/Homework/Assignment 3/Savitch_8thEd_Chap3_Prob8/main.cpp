/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap3_Pro8
 * Created on July 7, 2014, 9:43 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    char cdNum=0;      //Number of cards that the User has
    char cdValN;     // The value of your card (as inputted by the user)
    unsigned short cdVal=0,  //The actual card value
                   totVal=0,  //The total value
                   count = 0; 
    
    cout << "How many cards do you have? You must have between 2 and 5 cards. ";
    cin >> cdNum;
    
    while (cdNum > count){
        //Decrement the value by one each loop
        cdNum++;       
        //input value of  card
        cout << "What is the value of your card?";
        cin >> cdValN;
        
        //
        if (cdValN == 'J' || cdValN == 'K' || cdValN == 'Q')
            cdVal = 10;
        else if (cdValN == 'A')
            cout << "Would you like to use your ace as a 1 or 11? ",
            cin >> cdVal;
        else
            cdVal = cdValN;
        
        totVal += cdVal;
                    
    }
    
    cout << "Your total number is " << totVal;
    //Declare and Initialize All Variables
    
    return 0;
}