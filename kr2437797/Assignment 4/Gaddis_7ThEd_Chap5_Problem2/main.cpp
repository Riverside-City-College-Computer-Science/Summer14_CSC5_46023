/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 10, 2014, 10:17 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Prototype Functions

//Execution Begins here!
int main(int argc, char** argv) {
    
    //For Statement:Initialization of c, test it to =127, add 1 to c
    for(char c=0;c=127;c++){
        
        //Output the ascii code
        cout<<c;
        
        //After every 16th line, create a new line
        if(c%16==15)
            cout<<endl;
    
    }
    return 0;
}

