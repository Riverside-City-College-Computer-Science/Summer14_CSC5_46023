/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 2, 2014, 1:43 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execute Here.
int main(int argc, char** argv) {
    //Declare variables
    float Ncmpd,    //Number of compounding periods
            intrst, //Interest rate
            futV,   //Future value
            prstV;  //Present value
    
    //Input values
    cout<<"Current balance: $";
    cin>>prstV;
    cout<<"Interest rate: %";
    cin>>intrst;
    cout<<"Number of compounding periods in years: ";
    cin>>Ncmpd;
    
    //Use loop to calculate future value
    futV=prstV;
    intrst*=(1.0f/100); //Convert interest rate to decimal value
    for(int year=1;year<=Ncmpd;year++){
        futV*=(1+intrst);
    }
    
    cout<<fixed<<setprecision(2)<<endl;
    
    //Output results
    cout<<"Future value using a loop: $"<<futV<<endl;
    //Do power function and compare to loop
    cout<<"Future value using power function: $"<<prstV*pow(1+intrst,Ncmpd)<<endl;
         
//End Here.
    return 0;
}

