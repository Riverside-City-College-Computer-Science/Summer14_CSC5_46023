/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 22, 2014, 1:23 PM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/*
 * 
 */
void getArea(float len, float wid);

int main(int argc, char** argv) {
    
    //declare variables
    float length, width;

    //input
    cout << "Please enter the length" << endl;  
    cin >> length;
    cout << "Please enter the width" << endl;  
    cin >> width;

    //use function
    getArea(length , width);
    return 0;
}

void getArea(float len, float wid)
{
    float area;
    area = len*wid;
    cout << "Area is " << area << endl;
    cout << "Length is " << len << endl;
    cout << "Width is " << wid << endl;

}
