/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap3_Pro8
 * Created on July 7, 2014, 9:43 PM
 */

//System Level Libraries
#include <iostream>
#include <string>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    short cdNum=0;      //Number of cards that the User has
    string cdValN;     // The value of your card (as inputted by the user)
    unsigned short cdVal=0,  //The actual card value
                   totVal=0,  //The total value
                   count = 0; 
    
    cout << "How many cards do you have? You must have between 2 and 5 cards. ";
    cin >> cdNum;
    
    while (cdNum > count){
        //Decrement the value by one each loop
        count++;       
        //input value of  card
        cout << "What is the value of your card?";
        getline(cin, cdValN);
        
        //Correlate the card value to its number
        if (cdValN == 'Jack' || cdValN == 'King' || cdValN == 'Queen')
            cdVal = 10;
        else if (cdValN == 'Ace')
            cout << "Would you like to use your ace as a 1 or 11? ",
            cin >> cdVal,
            cin.ignore();
        else
            cdVal = cdValN;
        
        totVal=0;
        totVal = totVal + cdVal;
                    
    }
    
    cout << "Your total number is " << totVal;
    //Declare and Initialize All Variables
    
    return 0;
}