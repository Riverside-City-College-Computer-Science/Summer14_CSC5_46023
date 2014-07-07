/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on June 26, 2014, 12:19 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int gas = 12; //gallons in gas
    int miles = 350;
    int mpg = miles/gas;  //calculation

    cout << "The car gets " << mpg << " miles per gallon" << endl;
    
    return 0;
}

