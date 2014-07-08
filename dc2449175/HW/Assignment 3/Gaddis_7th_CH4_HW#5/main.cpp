/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 6, 2014, 7:29 PM
 */

#include <cstdlib>
#include <iostream> 
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //inputs
    float weight, height; //punds and inches
    //get info
    cout << "Enter your weight in lbs" << endl;
    cin >> weight;
    cout << "Enter your height in inches" << endl;
    cin >> height;
    
    //using pow to place for bmi cal
    float temp = pow((weight*7.03/height),2);
    float bmi = temp;

    //cant figure out if calculation is correct
    cout << bmi << endl;
    if(bmi >= 18.5 && bmi <= 25)
    {
        cout << "You have optimal BMI" << endl;
    }
    else if(bmi < 18.5 )
    {
        cout << "You are under optimal BMI" << endl;
    }
    else if(bmi > 25 )
    {
        cout << "You are over optimal BMI" << endl;
    }
    
    return 0;
}

