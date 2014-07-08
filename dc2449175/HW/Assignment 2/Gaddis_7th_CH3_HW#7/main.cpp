/* 
 * File:   main.cpp
 * Author: Kenton
 *
 * Created on June 30, 2014, 12:19 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int bag = 40; // number pof cookies
    int serving = 10; //servings per bag
    int calories = 300; //per serving
    int cookies;
    
    cout << "How many cookies did you eat? " << endl;
    cin >> cookies;
    
    if(cookies > 40 || cookies < 0)
    {
        cout << "There are not that amoutn in the bag" << endl;
        cout << "Enter an amount between 0-40" << endl;
        cin >> cookies;
       }
  
     //4 scookies per serving
    float newserv = cookies/4; //total servings
    float totcal = newserv*calories; // amount of calories consumned
    cout << "Number of servings consumned: " << newserv << endl;
    cout << "Number of calories consumned: " << totcal << endl;
        
       
        
    
    
    
    return 0;
}

