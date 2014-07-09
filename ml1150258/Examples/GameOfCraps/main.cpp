/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 9th, 2014, 12:48 PM
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int nGames,wins=0,loss=0;
    
    //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Ask for the number of games to play
    cout<<"How many games of crap do you want to play"<<endl;
    cin>>nGames;
    
    //Loop on the number of Games
    for(int game=1;game<=nGames;game++){
        //Throw the dice
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum1=die1+die2;
        switch(sum1){
            case 7:case 11:{
                wins++;break;
            }case 2:case 3:case 12:{
                loss++;break;
            }default:{
                //Condition for throws = 4,5,6,8,9,10
                char sum2;
                do{
                    //Throw for the second sum
                    die1=rand()%6+1;
                    die2=rand()%6+1;
                    sum2=die1+die2;
                    //Determine a win or loss
                    if(sum2==7)loss++;
                    if(sum2==sum1)wins++;
                }while(!(sum2==7||sum1==sum2));
            }
        }
    }
    //Output the results
    cout<<"Number of Games played = "<<nGames<<endl;
    cout<<"Number of Games won    = "<<wins<<endl;
    cout<<"Number of Games lost   = "<<loss<<endl;
    
    //Exit stage right!
    return 0;
}