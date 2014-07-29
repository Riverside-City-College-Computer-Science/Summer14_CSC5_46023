/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 22, 2014, 12:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */

void calculateRetail(float retail, float markup);

int main(int argc, char** argv) {

    //declare variables
    float price, increase;

    //get inputs
    cout << "Enter the price of the item." << endl;
    cin >> price;
    cout << "Enter the Markup Percentage" << endl;
    cin >> increase;

    //use function
    calculateRetail(price,increase);
    return 0;
}

void calculateRetail(float retail, float markup)
{
    float newprice = (retail*(markup/100))+retail;
    cout << fixed << setprecision(2) << endl;
    cout << "New Price is : " << newprice << endl;
}