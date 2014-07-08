/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 6, 2014, 7:16 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //inputs
    float len1, len2; 
    float wid1, wid2;

    //get the info
    cout << "Enter the length and width for rectangle 2" << endl;
    cin >> len1 >> wid1;
    cout << "Enter the length and width for rectangle 2" << endl;
    cin >> len2 >> wid2;
    //create area
    float area1 = len1*wid1;
    float area2 = len2*wid2;

    //check which is greater
    if(area1 > area2)
    {
        cout << "Rectangle 1 has greater area" << endl;
    }
    else if(area1 < area2)
    {
        cout << "Rectangle 2 has greater area" << endl;
    }
    else if(area1 == area2)
    {
        cout << "Both rectangles has equal area" << endl;
    }
        
    
    return 0;
}

