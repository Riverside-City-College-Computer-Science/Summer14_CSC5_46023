/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on June 24, 2014, 9:15 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float meal = 44.50; //original cost
    float tip = .15*meal; //tip price
    float tax = .0675*meal; //tax
    float total = meal+tip+tax;

    cout << "Meal price: " << meal << endl;
    cout << "Tax is: " << tax << endl; //cal for tax
    cout << "Tip is: " << tip << endl;
    cout << "Total is: " << total << endl;
    
    return 0;
}

