/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 10, 2014, 1:33 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    short yr;
    float ppy;
    float x=2500
    
    

    for(yr=0;yr<=6;yr++){
        
       ppy+=.04*x;
       cout<<ppy;
       
       if(yr>=6)
           cout<<endl;
               
             
    }
    return 0;
}

