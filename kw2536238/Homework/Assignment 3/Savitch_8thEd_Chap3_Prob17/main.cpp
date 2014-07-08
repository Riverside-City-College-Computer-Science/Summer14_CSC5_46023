/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap3_Prob17
 * Created on July 7, 2014, 3:13 PM
 */

//System Level Libraries
#include <iostream>
#include <string>
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
    
    string actStat;     //Activity status
    
    //Outputs
    float bmr,      //The Basal Metabolic Rate of the Individual
          nBmr,      //The new bmr with exercise considered
          choc,     //Number of Chocolate Bars
          enChoc = 230;   //Energy from one chocolate bar
    
    float sed = 1.2f,       //Change in bmr for a sedentary person
          someAct = 1.3f,   //Change in bmr for a somewhat active person
          act = 1.4f,       //Change in bmr for an active person
          highAct = 1.5f;   //Change in bmr for a highly active person
    
    
    
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
    
    cout << "Would you classify your exercise habits as sedentary, somewhat active (exercise occasionally), active, or Highly active?";
    getline (cin, actStat);
    
    if (actStat == 'Sedentary' || actStat == 'sedentary')
        nBmr = bmr*sed;
    else if (actStat == 'somewhat active' || actStat == 'Somewhat Active')
        nBmr = bmr*someAct;
    else if (actStat == 'Active' || actStat == 'active')
        nBmr = bmr*act;
    else if (actStat == 'highly active' || actStat == 'Highly Active')
        nBmr = bmr*highAct;
    else
        cout << "Invalid Input.";
    
    //Calculate the number of chocolate bars to fulfill the basal metabolic rate
    choc = nBmr/enChoc;
    
    //Output the values
    cout << "Your basal metabolic rate is " << nBmr << ".\n";
    cout << "You will require " << choc << ".\n";
    
    //Exit Stage Right
    return 0;
    
}

