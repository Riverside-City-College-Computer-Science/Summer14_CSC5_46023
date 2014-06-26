/* 
 * File:   main.cpp
 * Author: mdaly001
 * Created on June 24, 2014, 4:13 PM
 */

#include <iostream>

using namespace std;

// User Defined Libraries

// Global Constants

// Funtion Prototypes

// Execution Starts Here!

int main(int argc, char** argv) {
    
    //Declare and Initialize Variables
        unsigned short katBuy = 600; //How many shares Kathryn bought
        float shPrc = 21.77f; //Price per share
        float cmmsn = .2e-1f; //Broker's commission off total buys
        float bseCst, brkrCut, total; //Totals of purchase
    
    //Calculations for Problem
        bseCst=katBuy*shPrc; //Basecost of total buys
        brkrCut=cmmsn*bseCst; //Broker's cut of the buy
        total=brkrCut+bseCst; //Total amount spent by Kat

    //Output the Results
        cout<<"Base cost of share buys: $"<<bseCst<<endl;
        cout<<"Broker's cut off of Kathryn: $"<<brkrCut<<endl;
        cout<<"Total amount spent by Kathryn: $"<<total<<endl;

    //End of program    
    return 0;
}

