/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 23, 2014, 12:40 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
void celsius(int temp);
int main(int argc, char** argv) {
    
    //display info
    cout << "Table converting F into C degrees" << endl;
    cout << "F           C" << endl;
    //loop for 0-20 degrees
    for(int i=0; i<=20; i++)
    {
        //use conversion function
        celsius(i);
    }
    return 0;
}

void celsius(int temp)
{
    float conversion;
    conversion = (5*(temp-32))/9;
    cout << temp << "         " << conversion << endl;
}