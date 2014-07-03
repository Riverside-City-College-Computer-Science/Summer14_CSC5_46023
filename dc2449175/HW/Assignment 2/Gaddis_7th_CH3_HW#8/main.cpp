/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on June 30, 2014, 5:37 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float home; // value of home
    
    cout << "What is the value of your home? " << endl;
    cin >> home;
    float insur = home*.8;
    cout << "The minimun amount of insurance you should purchase is " << 
        insur << endl;

    return 0;
}

