/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 11, 2014, 9:04 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //declare variables
    float organ, avginc, days; //organisms/ avg increase per day/ days
    float totorgan; //add the orgranisms
     start:  //goto loop
    //ask for user input
    cout << "What is the starting size of the population?" << endl;
    cin >> organ;
    
    //cant have less than 2
    if(organ < 2) 
    {
        cout << "You cant use a number less than 2" << endl;
        goto start;
    }
    else
    {
        start2:
        cout << "What is the percentage it increase per day?" << endl;
        cin >> avginc;
        
        //useing another goto to check if number is negative
        if(avginc <= 0)
        {
            cout << "Please enter a percentage greater than 0" << endl;
            goto start2;
        }
        else
        {
            //getting days
            cout << "How many days will the organisms multiply?" << endl;
            cin >> days;
        }
        
        //loop to add orgasnism and % of it growing
        for(int time=1; time<=days; time++)
        {
            //add percent of orgamism to placeholder
            totorgan += (organ*(avginc/100))+organ;
            
            //output info
            cout << "Day #" << time << "   Organism Total: "
                 << totorgan << endl;
        }
            
            
    }
    return 0;
}

