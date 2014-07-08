/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on June 24, 2014, 9:06 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
float sales = .04;       //sales tax
float state = .02;       // state tax
float purchase = 52;   //Purchase

cout << "Item price: " << purchase << endl; //item price
cout << "Sales tax: " << purchase*sales << endl; //cal sales tax
cout << "State tax: " << purchase*state << endl; //cal state tax

 //total price
cout << "Total is: " << (purchase*sales)+(purchase*state)+purchase << endl;
    return 0;
}

