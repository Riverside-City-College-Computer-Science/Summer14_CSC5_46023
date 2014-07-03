/* 
 * File:   main.cpp
 * Author: Kenton
 *
 * Created on June 30, 2014, 5:56 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float C; // celcius
    
    cout << " How many degrees Celcius? " << endl;
    cin >> C;
    
    float F = (9/5)*(C) + 32;
    cout << C << " degrees C is equal to " << F << " degrees F" << endl;
    return 0;
}

