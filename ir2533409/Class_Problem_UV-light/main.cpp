/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 2, 2014, 12:54 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
//Declare variables
    float wvlngth,  //Wavelength
            wvetpe; //Wave type
    
    cout<<"Input the value of wavelength in meters\n"<<
            "to determine type of wave: "<<endl;
    cin>>wvlngth;
    //Output type of wave 
    if (wvlngth>5e0)
        cout<<"You have obtained a Radio wave."<<endl;
    if (wvlngth<=5e0&&wvlngth>5e-3)
        cout<<"You have obtained a Microwave."<<endl;
    if (wvlngth<=5e-3&&wvlngth>5e-6)
        cout<<"You have obtained an Infrared wave."<<endl;
    if (wvlngth<=5e-6&&wvlngth>1e-7)
        cout<<"You have obtained a Visible wave."<<endl;
    if (wvlngth<=1-7&&wvlngth>1e-9)
        cout<<"You have obtained a Ultraviolet wave."<<endl;
    if (wvlngth<=1e-9&&wvlngth>1e-11)
        cout<<"You have obtained an X-Ray wave."<<endl;
    if (wvlngth<=1e-11)
        cout<<"You have obtained Gamma Ray wave."<<endl;
    return 0;
}

