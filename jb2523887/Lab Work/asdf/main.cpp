/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 1, 2014, 12:05 PM
 */

#include <cstdlib> 
#include <string>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float rain1;
    string month1;
    char repeat;
    
    getline(cin,month1,' ');
    cin>>rain1;
    cin.ignore();
    
    cout<<month1<<"  "<<rain1;
    return 0;
}

