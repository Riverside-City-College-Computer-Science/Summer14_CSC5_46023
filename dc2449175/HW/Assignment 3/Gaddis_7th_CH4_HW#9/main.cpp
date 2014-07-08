/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 7, 2014, 9:19 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //create a random number generator
    srand((unsigned)time(0));
    
    //inputs
    int num1 = rand()%100;
    int num2 = rand()%100;
    int ans = num1+num2;

    //show 2 numbers to add
    cout << num1 << " + " << num2 << " = ? " << endl;

    //create guess
    int guess;
    cout << "What is the answer?" << endl;
    cin >> guess;

    if(guess == ans)
    {
        cout << "Your answer is correct" << endl;
    }
    else 
    {
        cout << "Your answer is incorrect" << endl;
    }

    return 0;
}

