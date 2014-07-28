/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 23, 2014, 11:19 AM
 */

#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;

/*
 * 
 */
void falling(int time);

int main(int argc, char** argv) {
    
    for(int i=1; i<=10; i++)
    {
        int secs;
        cout << "Enter the falling time" << endl;
        cin >> secs;        
        cout << "Distance " << i << endl;
        falling(secs);
        
    }

    return 0;
}

void falling(int time)
{
    float distance;
    float g = 9.8;
    float temp;
    temp = pow(time,2);
   
    distance = (g*time)/2;
    cout << distance << " fall time " << endl;
}