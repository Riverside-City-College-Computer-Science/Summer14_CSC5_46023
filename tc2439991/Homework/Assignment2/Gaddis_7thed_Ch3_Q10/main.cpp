/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on July 1, 2014, 1:00 PM
 * Purpose:Write a program that asks the user to input how many cookies 
 * they actually ate and then reports how many total calories were consumed.
 */

//System Libraries
#include <iostream>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const float cpb = 40;                       //cookies per bag
    const float spb = 10;                       //servings per bag
    const float cps = 300;                      //calories per serving
    float ckEtn, calCon;                        //cookies eaten, calories consumed
    float ckps = cpb / spb;                     //cookies per serving
    float calpCk = cps / ckps;                  //calories per cookie

    //Displayed Text
    cout << "There are " << ckps << " cookies per serving." << endl;
    cout << "There are " << calpCk << " calories per cookie." << endl;
    cout << "How many cookies did you eat?" << endl;
    cin >> ckEtn;

    //Calculations
    calCon = ckEtn * calpCk;

    //Displayed Results
    cout << "If you ate " << ckEtn << " cookies, then you consumed ";
    cout << calCon << " total calories." << endl;

    //Fin
return 0;

}

