/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 *
 * Created on July 2, 2014, 12:55 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    float wvlngth=0; // wavelength
    cout<<"Enter the radiation wavelength in e notation"<<endl;
    cin>>wvlngth;   
    if (wvlngth>=5) {
        cout<<"It is a Radio wave";
    }
    else
    if (wvlngth>=5e-3) {
        cout<<"It is a Microwave";
    }
    else
    if (wvlngth>=5e-6) {
        cout<<"It is an Infrared wave";
    }
    else
    if (wvlngth>=1e-7) {
        cout<<"It is a Visible wave";
    }
    else
    if (wvlngth>=1e-9) {
        cout<<"It is an Ultraviolet wave";
    }
    else
    if (wvlngth>=5e-10) {
        cout<<"It is an X-ray";
    }
    else
        cout<<"It is a Gamma ray";
     
    return 0;
}

