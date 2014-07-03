/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 * Created on July 2, 2014, 1:25 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float _intrst=8; //interest = 8%
    float cpndper; //compounding periods
    float nmbr2; //Number close to 2
    float prcisn;
    
    cout<<"Enter the number of Compounding Periods"<<endl;
    cin>>cpndper;
    
    float temp;
    temp=1+((72/cpndper)/100);
    nmbr2=pow(temp,cpndper);
    
    prcisn=nmbr2-2;
    
    //cout<<prcisn;
    return 0;
}

