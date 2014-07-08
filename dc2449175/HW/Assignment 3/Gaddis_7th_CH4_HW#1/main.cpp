/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 2, 2014, 1:21 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    // inputs
    int var1;
    int var2;
    
    cout << "Enter 2 numbers" << endl;
    cin >> var1;
    cin >> var2;
    
    if(var1 > var2)
    {
        cout << var1 << " is bigger than " << var2 << endl;
    }
    else if(var2 > var1)
    {
        cout << var2 << " is bigger than " << var1 << endl;
    }
    else if(var2 = var1)
    {
        cout << var2 << " is equal to " << var1 << endl;
    }
    return 0;
}

