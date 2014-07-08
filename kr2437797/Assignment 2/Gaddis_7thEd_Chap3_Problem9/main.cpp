/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 2, 2014, 1:21 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables
    float ln;           //Loan Payment
    float ins;          //Insurance cost
    float gz;           //Gas cost
    float oil;          //Oil cost
    float trz;          //Tire cost
    float mntz;         //Maintenance Cost
    
    //Output simple text
    cout<<"It's that time again: Bills."<<endl;
    cout<<"Please enter your Loan Payment for your car: $";
    cin>>ln;            //Input Loan Payment
    cin.ignore();
    cout<<"Now your Insurance: $";
    cin>>ins;           //Input Insurance cost
    cin.ignore();
    cout<<"Gas?: $";
    cin>>gz;            //Input Gas cost
    if (gz>30)          //If Gas costs more than 30 dollars output statement
    cout<<"Man, that's a lot."<<endl;
    cout<<"Now enter your oil costs: $";
    cin>>oil;           //Input Oil cost
    cin.ignore();
    cout<<"And Tires?: $";
    cin>>trz;           //Input Tire cost
    cin.ignore();
    cout<<"Last but not least, Maintenance: $";
    cin>>mntz;          //Input Maintenance cost
    cin.ignore();
    
    //Monthly Calculations
    cout<<"Monthly cost: $"<<ln+gz+oil+trz+mntz<<fixed<<setprecision(2)<<endl;
    
    //Yearly calculations
    cout<<"Yearly Costs: $";
    cout<<fixed<<setprecision(2)<<(ln+gz+oil+trz+mntz)*12<<endl;
    
    
    //Simple Output Text
    cout<<"Ouch."<<endl;
    cout<<"You should ride a bike or take the bus...";
    
            
            
            
    
            
            
    return 0;
}

