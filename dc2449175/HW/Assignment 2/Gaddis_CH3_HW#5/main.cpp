/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on June 26, 2014, 12:59 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float ktix = 3.00;
    float atix = 6.00;
    //how many tixs were sold
    int ksales; 
    int asales;
    string name; //movie name

    //ask user to enter the info
    cout << "What was the movie title? " << endl;
    cin >> name;
    cout << "How many adult tickets were sold?" << endl;
    cin >> asales;
    cout << "How many kids tickets were sold?" << endl;
    cin >> ksales;
    
    //calculating info
    float tkids = ktix*ksales; //total kids sales
    float tadults = atix+asales; //total adult sales
    float gross = tkids+tadults; //total sales combined
    float profit = gross*.2 ; //theater profit 20% of gross
    float remain = gross-profit; // remainder going to dist

    //Displaying information
    cout << "Movie Name: " << name << endl;
    cout << "Adult Tickets sold: " << asales << endl;
    cout << "Child Tickets sold: " << ksales << endl;
    cout << "Gross Profit total: " << gross << endl;
    cout << "Net Box Office:     " << profit << endl;
    cout << "Amount paid to Dist " << remain << endl;
    
    return 0;
}

