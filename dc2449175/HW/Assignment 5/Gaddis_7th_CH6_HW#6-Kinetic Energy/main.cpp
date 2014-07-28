/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 23, 2014, 11:51 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
//functions
void kEnergy(float mass, float velocity);
int main(int argc, char** argv) {
    
    //declare variables
    float mass, vel;

    //get info
    cout << "Please enter the objects mass" << endl;
    cin >> mass;
    cout << "Please enter the objects velocity" << endl;
    cin >> vel;

    kEnergy(mass,vel);

    return 0;
}

void kEnergy(float mass, float velocity)
{
    float kE;
    float temp = 0;

    temp = pow(velocity,2);
    kE = (mass*temp)/2;

    cout << "Kinetic Energy is : " ;
    cout << kE << " m/s" << endl;
}