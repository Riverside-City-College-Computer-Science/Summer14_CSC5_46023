/* 
 * File:   main.cpp
 * Author: Carey, Bradd
 *
 * Created on June 24, 2014
 * 
 * Purpose:
 *      Elaborate on project 1 by introducing cin.  
 *      Show what happens with improper inputs are given
 */

//1
#include <iostream>//2

//3

//4

//5

//6
using namespace std;

/*
 * Gaddis 7th Edition
 * Chapter 2, Problem 4 ENHANCED:
 *      Write a program that computes the tax and tip on a restaurant bill for a patron with a
        $44.50 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
        be 15 percent of the total after adding the tax. Display the meal cost, tax amount, tip
        amount, and total bill on the screen.
 */
int main(int argc, char** argv) {
    //7
    float bill;
    float tax;
    float tip;
    float total;
    
    cout<<"||======================================||"<<endl;
    cout<<"||  Tip Calculator                      ||"<<endl;
    cout<<"||======================================||"<<endl;
    
    //8
    cout<<"||  Enter Your Bill:  $";
    cin>>bill;
    //9
    cout<<"||  Tax percent is 6.75%"<<endl;
    tax = bill * 0.0675;
    //10
    cout<<"||  Enter gratuity percent = ";
    cin>>tip;
    tip = bill * (tip/100.0);
    
    //11
    total = bill + tax + tip;
    
    //12
    cout<<"||======================================||"<<endl;
    cout<<"||  Bill  = $"<<bill<<endl;
    cout<<"||  Tax   = $"<<tax<<endl;
    cout<<"||  Tip   = $"<<tip<<endl;
    cout<<"||  Total = $"<<total<<endl;
    cout<<"||======================================||"<<endl;
    
    /*
     * Please give the technical term and use for the following:
     *  13)  cout
     *  14)  <<
     *  15)  endl
     *  16)  "stuff in here is called..?"
     */
    
    //17
    return 0;
}


