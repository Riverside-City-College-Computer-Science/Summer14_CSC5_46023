/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on June 24, 2014, 9:41 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //5 items purchased
    float item1 = 12.95,
          item2 = 24.95,
          item3 = 6.95,
          item4 = 14.95,
          item5 = 3.95;

    float sum = item1+item2+item3+item4+item5;  //total for all
    float tax = sum*.06; //tax
    float total = sum+tax; //final sales price

    cout << "Item prices: " << endl;    //listing all 5 items & prices
    cout << item1 << endl;
    cout << item2 << endl;
    cout << item3 << endl;
    cout << item4 << endl;
    cout << item5 << endl;   
    cout << " " << endl;
    cout << "Subtotal: " << sum << endl;
    cout << "Sales Tax: " << tax << endl;
    cout << "Total: " << total << endl;
    

    
    return 0;
}

