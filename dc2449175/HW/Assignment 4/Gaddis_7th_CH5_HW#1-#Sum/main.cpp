/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 10, 2014, 11:23 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //create variables
    int num,
          total;  //holds the numbers i will create

    //get the number
    cout << "Enter a number and see the total sum of its integers" << endl;
    cin >> num;

    //creat loop to add one by one
    for(int i=1; i<=num; i++)
    {
        total += i; //adds i to total
        }
    //output total
    cout << " " << endl;
    cout << "The total is " << total << endl;
    return 0;
}

