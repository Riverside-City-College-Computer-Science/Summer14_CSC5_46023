/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 7, 2014, 8:58 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //inputs
    float pennies,nickels,dimes,quarters,change;
    cout << "Enter the amount of pennies you have" << endl;
    cin >> pennies;
    cout << "Enter the amount of nickels you have" << endl;
    cin >> nickels;
    cout << "Enter the amount of dimes you have" << endl;
    cin >> dimes;
    cout << "Enter the amount of quarters you have" << endl;
    cin >> quarters;

    //calculate
    pennies *= .01;
    nickels *= .05;
    dimes *= .10;
    quarters *= .25;
    
    //gather total
    change = pennies+nickels+dimes+quarters;
    
    //check if = to 1
    if( change == 1)
    {
        cout << "$" << change << endl;
        cout << "You have won the game" << endl;
    }
    else if( change >= 1)
    {
        cout << "$" << change << endl;
        cout << "You are over" << endl;
    }
    else if( change <= 1)
    {
        cout << "$" << change << endl;
        cout << "You are under" << endl;
    }
    return 0;
}

