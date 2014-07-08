/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 3, 2014, 1:05 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //inputs
    int number;
    cout << "Enter a number to convert into Roman " << endl;
    cout << "Enter a number between 1-10" << endl;
    cin >> number;
   
    //checking to see if between 1-10
    if(number >= 1 && number <=10)
    {
        switch(number)
        {
            //cases for 1-10
            case 1: cout << "I" << endl;
                    break;
            case 3: cout << "III" << endl;
                    break;
            case 4: cout << "IV" << endl;
                    break;
            case 5: cout << "V" << endl;
                    break;
            case 6: cout << "VI" << endl;
                    break;
            case 7: cout << "VII" << endl;
                    break;
            case 8: cout << "VIII" << endl;
                    break;
            case 9: cout << "IX" << endl;
                    break;
            case 10: cout << "X" << endl;
                    break;
        }
    }
    //anything not between 1-10
    else
    {
        cout << "That number is not between 1 and 10" << endl;
        }
    
    return 0;
}

