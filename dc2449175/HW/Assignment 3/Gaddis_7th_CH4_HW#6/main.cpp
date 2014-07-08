/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 7, 2014, 8:01 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //inputs
    float mass;

    //get mass
    cout << "Enter the objects mass" << endl;
    cin >> mass;

    //calculate weight
    float weight = mass*9.8;
    float object = weight;
    // test to see if heavy/light
    if(object >= 1000)
    {
        cout << "Object is too heavy" << endl;
    }
    else if(object <= 1000)
    {
        cout << "Object is too light" << endl;
    }

    return 0;
}

