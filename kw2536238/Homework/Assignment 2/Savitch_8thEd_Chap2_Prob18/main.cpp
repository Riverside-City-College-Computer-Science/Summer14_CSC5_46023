/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap2_Prob18
 * Created on June 29, 2014, 3:13 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Function Prototypes

//Execution Starts Here

int main(int argc, char** argv) 
{

    //Declare and Initialize All Variables
    //Inputs
    char gender;    //Gender of the Individual
    float weight,   //Weight of the Individual (pounds)
          height,   //Height of the Individual (inches)
          age;      //Age of the Individual (years)
    
    //Outputs
    float bmr,      //The Basal Metabolic Rate of the Individual
          choc,     //Number of Chocolate Bars
          enChoc = 230;   //Energy from one chocolate bar
    
    
    //Input in gender, weight, height, and age:
    cout << "Are you male or female? Enter 'm' for male and 'f' for female: ";
    cin >> gender;
    cout << "Enter in you weight in pounds: ";
    cin >> weight;
    cout << "Enter in your height: ";
    cin >> height;
    cout << "Enter in your age: ";
    cin >> age;
    
    //Calculate the Basal Metabolic Rate
    if(gender == 'f'||gender == 'F')
        bmr = 655 + (4.3*weight)+ (4.7*height) + (4.7*age);
    else if (gender == 'm'||gender == 'M')
        bmr = 66 + (6.3*weight) + (12.9*height) + (6.8*age);
    
    //Calcualte the number of chocolate bars to fulfill the basal metabolic rate
    choc = bmr/enChoc;
    
    //Output the values
    cout << "Your basal metabolic rate is " << bmr << ".\n";
    cout << "You will require " << choc << ".\n";
    
    //Exit Stage Right
    return 0;
    
}