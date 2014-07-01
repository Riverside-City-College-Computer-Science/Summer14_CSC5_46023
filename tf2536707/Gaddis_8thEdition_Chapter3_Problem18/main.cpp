/* 
 * File:   main.cpp
 * Author: rcc
 * Created on July 1, 2014, 1:10 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;




int main(int argc, char** argv) {
//Declare Variables
    float intRate = 12 * (1.0f/12/100);
    unsigned short N = 36;
    float L = 10000;
    float temp = pow(1 + intRate, N);
    float payment = ((intRate * temp) /(temp - 1))* L;
//Output
    cout << setprecision(2) << fixed << showpoint << payment;
    return 0;
}

