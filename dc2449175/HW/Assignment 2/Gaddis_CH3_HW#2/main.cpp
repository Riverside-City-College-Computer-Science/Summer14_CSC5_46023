/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on June 25, 2014, 1:24 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int seatA = 15;
    int seatB = 12;
    int seatC = 9;    //prices of seats
    int soldA,
        soldB,
        soldC;  //how many seats got sold

        //getting info for seat sales
    cout << "How many seats for A were sold?" << endl;
    cin >> soldA;
    cout << "How many seats for B were sold?" << endl;
    cin >> soldB;
    cout << "How many seats for C were sold?" << endl;
    cin >> soldC;

    //totals for each ticket
    int totalA = (seatA*soldA);
    int totalB = (seatB*soldB);
    int totalC = (seatC*soldC);
    //grand total
    int total = totalA+totalB+totalC;

    cout <<"Total ticket sales are: $ " << total <<endl;


    return 0;
}

