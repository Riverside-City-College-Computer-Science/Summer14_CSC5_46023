/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2013, 2:45 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int seconds;
    int minutes =0;
    int hours =0;
    int days =0;
    
    
    cout<<"Seconds:  ";
    cin>>seconds;
    
    while(seconds>=86400){
        days++;
        seconds = seconds - 86400;
    }
    while(seconds>=3600){
        hours++;
        seconds -= 3600;
    }
    while(seconds>=60){
        minutes++;
        seconds -= 60;
    }
    
    cout<<endl;
    cout<<"Days     = "<<days<<endl
        <<"Hours    = "<<hours<<endl
        <<"Minutes  = "<<minutes<<endl
        <<"Seconds  = "<<seconds<<endl;
    
}