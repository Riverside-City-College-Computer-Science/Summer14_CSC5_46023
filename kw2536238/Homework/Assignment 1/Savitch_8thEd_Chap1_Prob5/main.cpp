/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap1_Prob5
 * Created on June 25, 2014, 12:35 AM
 */

//System Library
#include <iostream>

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

using namespace std;

int main(int argc, char** argv) 
{
    //Decleration of All Variables
    int num1;       //First Inputted Integer Value
    int num2;       //Second Inputted Integer Value
    int sum;        //Sum of the Two Integer Values
    int product;    //Product of the Two Integer Values
    
    //Prompt for Inserting Numbers
    cout <<"What is the First Number?\n";
    cin >> num1;
    cout <<"What is the Second Number?\n";
    cin >> num2;
    
    //Calculating Values
    sum = num1 + num2;
    product = num1*num2;
    
    //Output of Values
    cout << "The sum of the values is ";
    cout <<sum;
    cout <<"\n";
    cout << "The product of the values is ";
    cout <<product;
    cout << "\n\nThis is the end of the program \n ";
               
    return 0;
}

