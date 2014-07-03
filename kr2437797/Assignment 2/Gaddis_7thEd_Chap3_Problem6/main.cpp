/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 1, 2014, 12:11 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Here we go
int main(int argc, char** argv) {
    //Declare Variables
    float plltw;                //Pallet with widgets
    float pllt;                 //Pallet without widgets
    float bse;                  //Base weight
    unsigned short wdgt;        //Widget
    
    
    //Output simple text and input Pallet weight with or without widgets
    cout<<"Enter the weight of the pallet without widgets: ";
    cin>>pllt;
    cin.ignore();
    cout<<"Now enter the weight of the pallet with widgets: ";
    cin>>plltw;
    
    
    //Display weight without widgets
    bse=plltw-pllt;
    cout<<"Total number of widgets: "<<endl;
    
    //calculate how many widgets are on the pallet
    wdgt=bse/9.2;
    cout<<fixed<<setprecision(0)<<wdgt<<endl;
    return 0;
}

