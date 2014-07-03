/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 1, 2014, 11:02 AM
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
    string mvi;                         //movie name
    short adlt,kds;                     //Adult & Kid tickets sold
    float apric,kpric,grss,pft;         //Adult & Kid Price,gross income, Profit
    
    //Initialize It
    apric=6;                            //Cost of Adult ticket is 6 dollars
    kpric=3;                            //Cost of Kid ticket is 7 dollars
    pft=2e-1f;                          //20 percent income Theater receives 
    
    //Output Text and Input Movie title,Adult tickets,Kid tickets        
    cout<<"Please Enter Movie: ";
    getline(cin, mvi);
    cout<<"Enter how many Adult tickets sold: "<<endl;
    cin>>adlt;
    cin.ignore();
    cout<<"Enter how many Kid tickets sold: "<<endl;
    cin>>kds;
    cin.ignore();
    cout<<"================================================="<<endl;
    cout<<"Movie Name: "<<"                  "<<"'"<<mvi<<"'"<<endl;
    cout<<"Adult Tickets Sold: "<<"                    "<<adlt<<endl;
    cout<<"Kid Tickets Sold: "<<"                      "<<kds<<endl;
    cout<<"Gross Box Office Profit: "<<"              ";
    
    //Calculate the Gross Income
    grss=(adlt*apric)+(kds*kpric);
    cout<<fixed<<setprecision(2)<<"$"<<grss<<endl;
    cout<<"Net Box Office Profit: "<<"                ";
    cout<<fixed<<setprecision(2)<<"$ "<<grss*pft<<endl;
    cout<<"Amount Paid to Distributor: "<<"           ";
    cout<<"$"<<grss-(grss*pft);
            
    //If the program does not run, clean and build then retry.
    return 0;
}

