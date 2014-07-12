/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 11, 2014, 4:49 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
 
    //declare variables
    short floors, rooms, taken, free;
    float totfree = 0;
    float tottaken = 0;
    float totrooms = 0;
    cout << "How many floors does the hotel have?" << endl;
    cin >> floors;

    //create loop for floors
    for(int height=1; height<=floors; height++)
    {
        //ask user for rooms in each floor
        cout << "How many rooms does floor #" << height << " have?" << endl;
        cin >> rooms;

        //how many are full
        cout << "How many rooms are occupied?" << endl;
        cin >> taken;
        free = rooms-taken;

        //after getting info store into totals
        totrooms += rooms;
        tottaken += taken;
        totfree += free;
    }

    //create % of occupied
    float empty;
    empty = (tottaken/totrooms)*100;
    
    //output results
    cout << "Total number of rooms: " ;
    cout << totrooms << endl;
    cout << "Total number of rooms taken: ";
    cout << tottaken << endl;
    cout << "Total number of rooms free: ";
    cout << totfree << endl;
    cout << "The hotel is around " << empty << "% occupied" << endl;

    return 0;
}

