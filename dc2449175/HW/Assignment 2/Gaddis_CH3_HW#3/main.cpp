/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on June 25, 2014, 1:38 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //set up the 5 scores
    int score1,
        score2,
        score3,
        score4,
        score5;
    //enter test scores
    cout << "Enter the 5 scores to calculate average" << endl;
    cin >> score1;
    cin >> score2;
    cin >> score3;
    cin >> score4;
    cin >> score5;

    int avg = (score1+score2+score3+score4+score5)/5;  //creat avg
    cout << "Average test score is: " << avg << endl;
    return 0;
}

