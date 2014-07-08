/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap3_Pro10
 * Created on July 7, 2014, 9:43 PM
 */

//System Level Libraries
#include <iostream>

using namespace std;

//User Defined Libraries

//Global Constants
float DAYSEQ = 1.0/5.0;  //The number of sequences divided by 5 days

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare and Initialize Variables
    float n;             //number of days as inputted by user
    float crudWei;       //Crud Weight in pounds
    float nn,            //number of sequences (divided by 5 days)
          fi,            //next number in sequence
          fim1 = 1,      //previous number
          fim2 = 1,      //number before fim2
          count = 3;     // USed for loop
    char plAgain;        //Used to loop program if user wants
    
    
    do {
        
    //User inputs values
    cout << "What is the initial weight of the crud? ";
    cin >> crudWei;
    cout << "How many days does the crud grow? ";
    cin >> n;
   
    //Convert from days to # of sequences
    nn = n*DAYSEQ+1;
    
    //Begin Fibonacci sequence
    fi = fim1+fim2;
    while(count < nn)
    {
        count++;
        fim2 = fim1;
        fim1 = fi;
        fi = fim1+fim2;
    }
    
    //Initial Values 
    if (n<5)fi = fim2;
    else if (n < 10)fi = fim1;
    
    //Find the actual value
    crudWei *= fi;
    
    //Output values
    cout << "There will be " << crudWei << " pounds of crud in the population after " << n << " days.";
    
    //Loop again?
    cout << "Will you like to calculate again(Y or N)?";
    cin >> plAgain;
    
    }while (plAgain == 'y' || plAgain == 'Y');
    
    cout << "See you later!";
    //Exit Stage Right
    return 0;
}