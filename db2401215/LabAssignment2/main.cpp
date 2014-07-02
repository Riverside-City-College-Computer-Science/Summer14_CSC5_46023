/* Lab Assignment 2
 * File:   main.cpp
 * Author: Daniel Boebinger
 * Created on July 2, 2014, 12:50 PM
 */

//System Libraries
#include <iostream>
using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare variables
    //Inputs and Constants
    float wavel; //wavelength in meters
    
    //Inputs
    cout<<"Enter the wavelength of light in meters:"<<endl;
    cin>>wavel;
    
    //Determine the radiation type
    if (wavel>5e-0){
        cout<<"The Radiation Type for this wavelength is Radio"<<endl;
    }else if (wavel>5e-3){
        cout<<"The Radiation Type for this wavelength is Microwave"<<endl;
    }else if (wavel>5e-6){
        cout<<"The Radiation Type for this wavelength is Infrared"<<endl;
    }else if (wavel>5e-7){
        cout<<"The Radiation Type for this wavelength is Visible"<<endl;
    }else if (wavel>5e-9){
        cout<<"The Radiation Type for this wavelength is Ultraviolet"<<endl;
    }else if (wavel>5e-11){
        cout<<"The Radiation Type for this wavelength is X-Ray"<<endl;
    }else {
        cout<<"The Radiation Type for this wavelength is Gamma Ray"<<endl;
    }
   
    //Exit stage right
    return 0;
}
