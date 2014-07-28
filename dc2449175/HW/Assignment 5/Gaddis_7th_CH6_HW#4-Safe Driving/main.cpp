/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 23, 2014, 9:27 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int getAcc;

int main(int argc, char** argv) {
    
    //declare variables
    int temp = 99999999;
    string tempcity;
    string region;

    for(int i=1; i<=5; i++)
    {
        cout << "What region did this happen in?" << endl;
        cin >> region;
        
        if(getAcc < temp)
        {
            temp = getAcc;
            tempcity = region;
        }
    }

    return 0;
}

int getAcc
{
    int accident;
    cout << "How many accidents were there?" << endl;
    cin >> accident;

    return accident;
}