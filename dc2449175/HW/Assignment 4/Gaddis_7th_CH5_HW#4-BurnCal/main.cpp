/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 10, 2014, 12:44 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip> //set precision
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //declare variables
    float cal = 3.9;
    float totcal = 0;
    cout << "Minutes    Calories Burned" << endl;
    cout << "--------------------------" << endl;

    //set precision
    cout << fixed << setprecision(1) << endl;

    //loop 30xs to complete
    for(int min=1; min <=30; min++)
    {
        //add the calories per min
        totcal += cal;
        
        //output when 15/20/25/30
        if(min==10 || min==15 || min==20 || min==25 || min==30)
        {
            cout << min << "            " << totcal << endl;
        }
    }
    return 0;
}

