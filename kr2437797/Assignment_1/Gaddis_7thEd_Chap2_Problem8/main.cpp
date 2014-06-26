/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on June 26, 2014, 10:21 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Library

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    
    //Declare and Initialize the Variables
    float itmon=12.95f,                         //Item one costs 12.95
          itmtw=24.95f,                         //Item two costs 24.95
          itmth=6.95f,                          //Item three costs 6.95
          itmfou=14.95f,                        //Item four costs 14.95
          itmfiv=3.95f,                         //Item five costs 3.95
          tx=0.06f,                             //Sales tax is 6%
          sum=itmon+itmtw+itmth+itmfou+itmfiv;  //Calculation of subtotal
   
    //Output of Simple text and Calculations
    cout<<"Purchases of Customer:"<<endl;
    cout<<itmon<<endl;
    cout<<itmtw<<endl;
    cout<<itmth<<endl;
    cout<<itmfou<<endl;
    cout<<itmfiv<<endl;
    cout<<"Subtotal: "<<sum<<endl;
    cout<<"Amount of Sales Tax: "<<fixed<<setprecision (2)<<(sum*tx)<<endl;
    cout<<"Total: "<<fixed<<setprecision (2)<<(sum*tx)+sum<<endl;
  
    return 0;
}

