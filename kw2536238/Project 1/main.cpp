/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Blackjack Player
 * Created on July 9, 2014, 10:16 AM
 */

//System Level libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

//User Defined Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare and Initialize Variables
    unsigned short cdVal1, cdVal2;
    string cdName1, cdName2;
    unsigned short wins = 0, losses = 0;
    unsigned short nGames = 0;
    
    cout << "Let's play some Texas Hold'Em!!\n";
    cout << "How many Games would you like to play? ";
    cin >> nGames;
    
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    for(int game=1;game<=nGames;game++)
    {
        
        //Randomly choose 
        cdVal1 = rand()%13+1;
        cdVal2 = rand()%13+1;
        
        if (cdVal1 == 1)
            cdName1 = "Ace";
        else if (cdVal1 == 2)
            cdName1 = "2";
        else if (cdVal1 == 3)
            cdName1 = "3";
        else if (cdVal1 == 4)
            cdName1 = "4";
        else if (cdVal1 == 5)
            cdName1 = "5";
        else if (cdVal1 == 6)
            cdName1 = "6";
        else if (cdVal1 == 7)
            cdName1 = "7";
        else if (cdVal1 == 8)
            cdName1 = "8";
        else if (cdVal1 == 9)
            cdName1 = "9";
        else if (cdVal1 == 10)
            cdName1 = "10";
        else if (cdVal1 == 11)
            cdName1 = "Jack";
        else if (cdVal1 == 12)
            cdName1 = "Queen";
        else if (cdVal1 == 13)
            cdName1 = "King";
        else
            cdName2 = "error";
        
        if (cdVal2 == 1)
            cdName2 = "Ace";
        else if (cdVal2 == 2)
            cdName2 = "2";
        else if (cdVal2 == 3)
            cdName2 = "3";
        else if (cdVal2 == 4)
            cdName2 = "4";
        else if (cdVal2 == 5)
            cdName2 = "5";
        else if (cdVal2 == 6)
            cdName2 = "6";
        else if (cdVal2 == 7)
            cdName2 = "7";
        else if (cdVal2 == 8)
            cdName2 = "8";
        else if (cdVal2 == 9)
            cdName2 = "9";
        else if (cdVal2 == 10)
            cdName2 = "10";
        else if (cdVal2 == 11)
            cdName2 = "Jack";
        else if (cdVal2 == 12)
            cdName2 = "Queen";
        else if (cdVal2 == 13)
            cdName2 = "King";
        else
            cdName2 = "error";
        
        cout << "Your cards are a " << cdName1 << " and a " << cdName2 <<endl;
        
        
    }
    return 0;
}