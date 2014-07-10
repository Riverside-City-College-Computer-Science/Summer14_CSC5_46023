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
    unsigned short cdVal,  //The actual card value
                   totVal=0,  //The total value
                   count = 0;
    string plAgain;               //Play Again
    
    do{
        //Input number of plays
        cout << "How many cards do you have? You must have between 2 and 5 cards. ";
        cin >> cdNum;
    
        //Loop for how many cards there are
        for (count=0;cdNum>count;count++){
             
                //input value of  card
                cout << "What is the value of your card? ";
                cin >> cdValN;
                
                //Correlate the card type to its number
                if (cdValN == "Jack" || cdValN == "King" || cdValN == "Queen" || cdValN == "10"||
                    cdValN == "jack" || cdValN == "king" || cdValN == "queen")
                    cdVal = 10;
                else if (cdValN == "Ace"){
                    cout << "Would you like to use your ace as a 1 or 11? ";
                    cin >> cdVal;
                }
                else if (cdValN == "2")
                    cdVal = 2;
                else if (cdValN == "3")
                    cdVal = 3;
                else if (cdValN == "4")
                    cdVal = 4;
                else if (cdValN == "5")
                    cdVal = 5;
                else if (cdValN == "6")
                    cdVal = 6;
                else if (cdValN == "7")
                    cdVal = 7;
                else if (cdValN == "8")
                    cdVal = 8;
                else if (cdValN == "9")
                    cdVal = 9;
        
                //calculate the total by incrementing totVal with cdVal
                totVal = totVal + cdVal;          
        }
    
    //Output data
        cout << "Your total number is " << totVal<<endl;
        
        if (totVal > 21)
            cout << "You busted!\n";
        else if (totVal = 21)
            cout << "BlackJack! You Win!\n";
        
        cout << "-----------------------------------------------------\n";
        
        //Ask user to loop program
        cout << "Would you like to play again(Yes or No)? ";
        cin >> plAgain;
    
        //Reset totVal
        if (plAgain == "yes"||plAgain == "Yes"){
                cout << "-----------------------------------------------------\n";
                totVal = 0;
        }
    
    }while (plAgain == "Yes"||plAgain=="yes");
    
    cout << "See you later!";

    return 0;
}