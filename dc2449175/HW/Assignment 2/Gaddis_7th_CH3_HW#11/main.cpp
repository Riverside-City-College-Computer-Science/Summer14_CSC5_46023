/* 
 * File:   main.cpp
 * Author: Kenton
 *
 * Created on June 30, 2014, 6:02 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float US; // dollars
    float yen;
    float euro;
    
    cout << "US dollar amount " << endl;
    cin >> US;
    yen = US*83.14;
    euro = US*.7337;
    cout << "$" << US << " dollars equals to: " << yen << 
            " yen" << endl;
    cout << "Or " << euro << " euros" << endl;
    return 0;
}

