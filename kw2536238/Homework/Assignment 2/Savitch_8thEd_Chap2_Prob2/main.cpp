/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap2_Prob3
 * Created on July 1, 2014, 7:04 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Function Prototypes

//Global Constants

//Execution Begins Here!
int main(int argc, char** argv) 
{

    //Declare and Initialize All Variables
    //Inputs
    float moswAm,                        //Amount of sweetener needed to kill a mouse (in grams)
          mousWei,                       //Weight of the mouse (in grams)
          humWei;                        //Weight of the person
    const float SWSODA = 1e-3,          //Percentage of sweetener in soda (0.1%)
              SODABOT = 2e3;             //Weight of soda in a soda pop bottle (around 2000 grams)
    
    //Outputs
    float ratio,            //Ratio between sweetener and weight
          huswAm,           //Amount of sweetener required to kill the person
          botnum,           //Max number of bottles capable of being consumed
          botswAm;          //Amount of sweetener per bottle in grams
    
    //Input variables: amount of sweetener, weight of mouse, and weight of the person
    cout << "How many grams of artificial sweetener did the rat consume before dying? ";
    cin >> moswAm;
    cout << "How many grams did the mouse weigh? ";
    cin >> mousWei;
    cout << "How much do you want to weigh at the end of the diet? ";
    cin >> humWei;
    
    //Calculate the number of bottles the person can consume per day
    ratio = moswAm/mousWei;
    huswAm = ratio*humWei;
    botswAm = SWSODA*SODABOT;
    botnum = huswAm/botswAm;
    
    //Output the data    
    cout << "You may safely drink up to " << botnum << " bottles of soda pop.";
 
    return 0;
}

