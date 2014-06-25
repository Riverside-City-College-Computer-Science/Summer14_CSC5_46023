/* 
 * File:   main.cpp
 * Author: Kenton
 *
 * Created on June 24, 2014, 9:37 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float ocean = 1.5;

    cout << "Current ocean rises around " << ocean << " MM per year" << endl;
    cout << "In 5 years: " << ocean*5 << endl;
    cout << "In 7 years: " << ocean*7 << endl;
    cout << "In 10 years: " << ocean*10 << endl;

    return 0;
}

