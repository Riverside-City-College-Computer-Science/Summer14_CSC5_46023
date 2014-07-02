/* 
 * File:   main.cpp
 * Author: Jonathon Lisonbee
 * Created on July 2, 2014, 1:00 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float SPEED_LIGHT = 2.99e8; //Speed of light in meters per second

//Function Prototypes

//Execution time!
int main(int argc, char** argv) {
        float   wvLngth, //Wavelength
                freq;    //Frequency
        
        //Input
        cout<<"Input the wavelength of the wave in meters.\n";
        cin>>wvLngth;
        
        //Calculations
        freq = SPEED_LIGHT / wvLngth;
        
        //Check for wave type
        if (wvLngth>=5e0){
            cout<<"The wave is a radio wave, and its frequency is "<<freq<<" Hz.\n";
        }
        if (wvLngth < 5e0&&wvLngth >= 5e-3){
            cout<<"The wave is a micro wave, and its frequency is "<<freq<<" Hz.\n";
        }
        if (wvLngth < 5e-3 && wvLngth >= 5e-6){
            cout<<"The wave is an infared wave, and its frequency is "<<freq<<" Hz.\n";
        }
        if (wvLngth < 5e-6&& wvLngth >= 1e-7){
            cout<<"The wave is a visible wave, and its frequency is "<<freq<<" Hz.\n";
        }
        if (wvLngth < 1e-7&& wvLngth >= 1e-9){
            cout<<"The wave is an ultraviolet wave, and its frequency is "<<freq<<" Hz.\n";
        }
        if (wvLngth < 1e-9&& wvLngth >= 1e-11){
            cout<<"The wave is an x-ray wave, and its frequency is "<<freq<<" Hz.\n";
        }
   //That's All Folks!
    return 0;
}

