/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on June 24, 2014, 9:22 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float var1 = 28,      // all variables
        var2 = 32,        
        var3 = 37,
        var4 = 24,
        var5 = 33;

    float sum = var1+var2+var3+var4+var5; //creating sum
    float avg = sum/5;

    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << avg << endl;

    
    return 0;
}

