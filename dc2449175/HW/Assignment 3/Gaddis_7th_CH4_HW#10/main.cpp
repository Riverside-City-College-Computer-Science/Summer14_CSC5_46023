/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 7, 2014, 9:33 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //inputs
    int pack = 99;
    int amt;

    //get the amount
    cout << "How many packages did you buy? " << endl;
    cin >> amt;
    
    //gather total
    int total = pack*amt;

    //create discounts based on how many bought
    if(amt < 10)
    {
        cout << "Your total is $ " << total << endl;
    }
    else if(amt >=10 && amt < 20)
    {   
        float newtot = total*.2;  //create the discount
        //subtrack from original to get new
        cout << "Your total is $ " << total-newtot << endl;
    }
    else if(amt >=20 && amt < 50)
    {   
        float newtot = total*.3;
        
        cout << "Your total is $ " << total-newtot << endl;
    }
    else if(amt >=50 && amt < 100)
    {   
        float newtot = total*.4;
        
        cout << "Your total is $ " << total-newtot << endl;
    }
    else if(amt >=100 )
    {   
        float newtot = total*.5;
        
        cout << "Your total is $ " << total-newtot << endl;
    }
    return 0;
}