/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch 8thEd_Chap2_Prob6
 * Created on June 30, 2014, 11:27 AM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{

    //Initialize and Declare all Variables
    unsigned short capacity,    //capacity of the room
                   total,       //total number of people in the room
                   dif;         //difference between the number of people in the room and the capacity
    
    //Input capacity
    cout << "What is the maximum room capacity? ";
    cin >> capacity;
    
    //Input the total number of people
    cout << "\nHow many people are attending the meeting? ";
    cin >> total;
    
    //Determine if it violates the fire regulations
    if (capacity >= total)      //Less people than the capacity
        dif  = capacity - total, //Calculate how many more people can fit
        cout << "It is legal to hold the meeting. " << dif << " more people may attend";      //Output the data
    else                        //More people than the capacity
        dif  = total - capacity, //Calculate how many people must leave
                cout << "The meeting violates the fire regulations! You have " << dif << " too many people!";
                
    return 0;
}