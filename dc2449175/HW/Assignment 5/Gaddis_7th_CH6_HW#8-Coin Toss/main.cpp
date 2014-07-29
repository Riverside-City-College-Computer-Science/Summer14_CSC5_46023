/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 23, 2014, 12:50 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

void coinflip();

int main(int argc, char** argv) {
    //for rand()
    srand(static_cast<unsigned int>(time(0)));

    //declare variables
    int tries;
    //get input
    cout << "How many times would you like to try?" << endl;
    cin >> tries;

    //loop for tries
    for(int i=0; i<=tries; i++)
    {
        coinflip();
    }

    return 0;
}

void coinflip()
{
    int coin = rand()%2+1;
    if(coin==1) cout << "HEADS" << endl;
    if(coin==2) cout << "Tails" << endl;
}
    