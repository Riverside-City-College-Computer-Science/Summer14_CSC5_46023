/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Craps
 * Created on July 9, 2014, 10:16 AM
 */

//System Level libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare and Initialize Variables
    char sum, dice1, dice2, largest=6, smallest=6;
    int throws;
    int c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0, c10=0, c11=0, c12=0, cE=0;
    int checksum;
    
    ///Set our random number seed
    
    srand(static_cast<unsigned int>(time(0)));
    
    //Input the number of throws
    cout << "How many times do you want to throw the dice? ";
    cin >> throws;
    
    //Loop # of throws
    
    for (int roll = 1;roll<=throws;roll++) 
    {
    //Roll the Dice and take the sum
    dice1 = rand()%6+1; //Gives a number between 1 and 6
    dice2 = rand()%6+1; //Gives a number between 1 and 6
    sum = dice1 + dice2;
    
    if (sum > largest) largest = sum;
    else if (sum < smallest) smallest = sum;
    
    //determine occurrence frequency
    switch(sum)
    {
        case 2:c2++;break;
        case 3:c3++;break;
        case 4:c4++;break;
        case 5:c5++;break;
        case 6:c6++;break;
        case 7:c7++;break;
        case 8:c8++;break;
        case 9:c9++;break;
        case 10:c10++;break;
        case 11:c11++;break;
        case 12:c12++;break;
        default:cE++;
    };
    
    }
    //Output results
    checksum = +c2+c3+c4+c5+c6+c7+c8+c9+c10+c11+c12;
    
    cout << "The largest number is " << static_cast<int>(largest)<< "\n";
    cout << "the smallest number is " << static_cast<int>(smallest)<< "\n";
    cout << "The total number of 2s drawn are " <<setw(9)<< static_cast<int>(c2)<< "\n";
    cout << "The total number of 3s drawn are " <<setw(9)<< static_cast<int>(c3)<< "\n";
    cout << "The total number of 4s drawn are " <<setw(9)<< static_cast<int>(c4)<< "\n";
    cout << "The total number of 5s drawn are " <<setw(9)<< static_cast<int>(c5)<< "\n";
    cout << "The total number of 6s drawn are " <<setw(9)<< static_cast<int>(c6)<< "\n";
    cout << "The total number of 7s drawn are " <<setw(9)<< static_cast<int>(c7)<< "\n";
    cout << "The total number of 8s drawn are " <<setw(9)<< static_cast<int>(c8)<< "\n";
    cout << "The total number of 9s drawn are " <<setw(9)<< static_cast<int>(c9)<< "\n";
    cout << "The total number of 10s drawn are " <<setw(8)<< static_cast<int>(c10)<< "\n";
    cout << "The total number of 11s drawn are " <<setw(8)<< static_cast<int>(c11)<< "\n";
    cout << "The total number of 12s drawn are " <<setw(8)<< static_cast<int>(c12)<< "\n";
    
    
    //Exit Stage right
    return 0;
}

