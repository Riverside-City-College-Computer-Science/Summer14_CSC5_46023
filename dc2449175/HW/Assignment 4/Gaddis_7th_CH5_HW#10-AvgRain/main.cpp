/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 11, 2014, 8:24 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //declare variables
    int years, cntmonth; //years & month counter
    float rainfall, totrain;
   
    //ask how many years
    cout << "How many years are you going to calculate?" << endl;
    cin >> years;
    
    //create loop for years
    for(int time=1; time<=years; time++)
    {
        //create loop for months
        for(int month=1; month<=12; month++)
        {
            //get rain 12 times (every month per year)
            cout << "How many inches of rainfall happen during month #" <<
                    month << " year #" << time << endl;
            cin >> rainfall;
            //add to complete for year
            totrain += rainfall;
            //same thing but for month
            cntmonth++;
        }
    }

    //create avg
    float avgrain = totrain/cntmonth;
    //output results
    cout << "Total numbers of months: " << cntmonth << endl;
    cout << "Total inches of rainfall: " << totrain << endl;
    cout << "Average rainfall: " << avgrain << endl;

    return 0;
}

