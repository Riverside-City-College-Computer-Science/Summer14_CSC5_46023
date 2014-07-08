/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap3_Prob1
 * Created on July 7, 2014, 7:20 PM
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

    cout << "Lets Play Rock-Paper-Scissors!" << endl;
    //Define all variables
    //Input variables
    
    char player1,
         player2,
         playAg;
    
    //Loop allowing for player to play as many times as wanted
    do {
        //Input of variables
    cout << "Enter R for Rock, P for Paper, or S for Scissors!" << endl;
    cout << "What does player one choose? \n";
    cin >> player1;
    cout << "What does player two choose? \n";
    cin >> player2;
    
    //Compare the two data entries and output data
    
    if ((player1 == 'P' && player2 == 'P')||
        (player1 == 'R' && player2 == 'R')||
        (player1 == 'S' && player2 == 'S')||
        (player1 == 'p' && player2 == 'p')||
        (player1 == 'r' && player2 == 'r')||
        (player1 == 's' && player2 == 's'))
        cout << "It's a tie! Nobody Wins!";
    else if (player1 == 'P' && player2 == 'R' || player1 == 'p' && player2 == 'r')
        cout << "Paper covers rock. Player one wins!";
    else if (player1 == 'R' && player2 == 'S' || player1 == 'r' && player2 == 's' )
        cout << "Rock breaks Scissors. Player one wins!";
    else if (player1 == 'S' && player2 == 'P' || player1 == 's' && player2 == 'p')
        cout << "Scissors cuts Paper. Player one wins!";
    else if (player1 == 'R' && player2 == 'P' || player1 == 'r' && player2 == 'p')
        cout << "Paper covers rock. Player two wins!";
    else if (player1 == 'S' && player2 == 'R' || player1 == 's' && player2 == 'r' )
        cout << "Rock breaks Scissors. Player two wins!";
    else if (player1 == 'P' && player2 == 'S' || player1 == 'p' && player2 == 's')
        cout << "Scissors cuts Paper. Player two wins!";
    else
        cout << "Invalid character input. Please try again!";
    
    //Ask if it should loop or not
    cout << "\n\nWould you like to play again(Y or N)? ";
    cin >> playAg;
    
    }
    while(playAg == 'Y'|| playAg == 'y');
    
    //Output goodbye
    cout << "\nSee you later!";
    
    //Exit Stage right
    return 0;
}

