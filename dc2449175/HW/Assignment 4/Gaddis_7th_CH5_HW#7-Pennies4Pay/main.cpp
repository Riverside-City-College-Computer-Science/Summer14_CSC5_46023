/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 11, 2014, 4:02 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //declare vairbles
    float cent = .01; //value of a penny
    int days;

    cout << "How many days are you working?" << endl;
    cin >> days;

    if(days<1)cout << "Please enter a number 1 or greater" << endl;
        
    else
    {
        //create table
        cout << "Day #     Pay" << endl;
        cout << "--------------" << endl;
        
        for(int time=1; time<=days; time++)
        {
            //output a penny if user enters a 1
            if(days==1)cout << "1        $0.01" << endl;
            
            else
            {
                //add penny every loop
                float dblcent = 0;
                dblcent += cent; 
            
        }
    }
            

    
    return 0;
}

