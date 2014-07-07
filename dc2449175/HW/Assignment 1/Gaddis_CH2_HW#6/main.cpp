/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on June 24, 2014, 9:34 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int payamt = 1700;
    int payper = 26;
    int annual = payamt*payper;

    cout << "Employee's Annual Pay is: $" << annual << endl;
    return 0;
}

