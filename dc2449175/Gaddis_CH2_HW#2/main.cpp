/* 
 * File:   main.cpp
 * Author: Daniel Canales*
 * Created on June 24, 2014, 8:58 PM
 */

#include <cstdlib>
#include <iostream> 

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
float annual = 4.6;
float profit = 0.62;
int newprofit = (annual*profit);

cout << "If the company made " << annual << " million this year" << endl;
cout << "Their profit would be " << newprofit << " million" << endl;
    return 0;
}

