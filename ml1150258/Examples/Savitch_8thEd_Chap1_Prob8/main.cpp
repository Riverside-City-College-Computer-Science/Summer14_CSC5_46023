/* 
 * File:   main.cpp
 * Author: Dr. Mark E. lehr
 * Created on June 26, 2014, 11:20 AM
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and open a file
    ifstream input;
    input.open("money.dat");
    ofstream output;
    output.open("change.dat");
    
    //Declare Variables
    char nQ,nN,nD,nP;//Number of Quarters,Nickles,Dimes,Pennies
    unsigned short cents;
    
    //Input the number of coins
    cout<<"On 1 line input number of Quarters "<<endl;
    cout<<"then Nickles,Dimes, and lastly Pennies"<<endl;
    cout<<"Values from 0 to 9 only"<<endl;
    input>>nQ>>nN>>nD>>nP;
    cout<<nQ<<" "<<nN<<" "<<nD<<" "<<nP<<endl;
    output<<nQ<<" "<<nN<<" "<<nD<<" "<<nP<<endl;
    
    //Calculate the cents
    cents=(nQ-48)*25+(nN-48)*5+(nD-48)*10+(nP-48);
    
    //Output the results
    cout<<"Total cents = "<<cents;
    output<<"Total cents = "<<cents;
    
    //Exit stage right!
    input.close();
    output.close();
    return 0;
}

