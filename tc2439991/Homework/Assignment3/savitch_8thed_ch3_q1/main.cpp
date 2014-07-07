/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 7, 2014, 10:14 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char p1;                    //Signifies Player 1
    char p2;                    //Signifies Player 2
    char ans;                   //Signifies the Answer
    
    //Displayed Text
   do{   
    cout<<"Do you want to play Rock Paper Scissors!?"<<endl;
    cout<<"Enter r for rock, p for paper, and s for scissors."<<endl;
    cout<<"Player #1, make your selection: ";
    cin>>p1;
    cout<<"Player #2 make your selection: ";
    cin>>p2;

    //Player #1 Rock Selections
    if (p1 == 'r' || p1 == 'R')
    {
        if(p2 == 'r' || p2 == 'R')
            cout<<"Tie Game."<<endl;
    
        if(p2 == 'p' || p2 == 'P')
            cout<<"Paper beats rock! Player #2 wins!"<<endl;
    
        if(p2 == 's' || p2 == 'S')
            cout<<"Rock beats scissors! Player #1 wins!"<<endl;
    }else
            cout<<"";
    
    //Player #1 Paper Selections  
    if (p1 == 'p' || p1 == 'P')
    {
        if(p2 == 'r' || p2 == 'R')
            cout<<"Paper beats rock! Player #1 wins!"<<endl;
    
        if(p2 == 'p' || p2 == 'P')
            cout<<"Tie Game."<<endl;
    
        if(p2 == 's' || p2 == 'S')
            cout<<"Scissors beat paper! Player #2 wins!"<<endl;
        }else
            cout<<"";
    
    //Player #1 Scissor Selection
    if (p1 == 's' || p1 == 'S')
    {
        if(p2 == 'r' || p2 == 'R')
            cout<<"Rock beats scissors! Player #2 wins!"<<endl;
    
        if(p2 == 'p' || p2 == 'P')
            cout<<"Scissors beat paper! Player #1 wins!"<<endl;
    
        if(p2 == 's' || p2 == 'S')
            cout<<"Tie game."<<endl;
        }else
            cout<<"";
     
         cout<<"Would you like to play again?"<<endl;
         cout<<"Enter Y for yes, N for no: ";
         cin>>ans;
         cout<<"\n";
     } while ( ans == 'y'|| ans == 'Y');

    cout<<"Thanks for playing!";
    
    //QED
    
    return 0;
}