/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 23, 2014, 1:02 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
//functions
void presentValue(float future, float intrest, float years);

int main(int argc, char** argv) {
    //declare variables
    float intrest, future, years;

    //get inputs
    cout << "Please enter how many years you wish to save for" << endl;
    cin >> years;
    cout << "Please enter how much you would like to have in that account" << endl;
    cin >> future;
    cout << "What would be the intrest rate" << endl;
    cin >> intrest;
    
    presentValue(future,intrest,years);


    return 0;
}

void presentValue(float future, float intrest, float years)
{
    intrest /= 100;
    int temp = pow((1+intrest),years);
    float present;

    present = future/temp;
    cout << "You will need to deposit $" << present << " now" << endl;
}

    