/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 7th, 2014, 1:13 PM
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
    
    //Declare variables
    float salary,mniRate,yrlDepP,retSav;
    unsigned short years=50;
    float inSavgs=0;
    
    //Input values
    cout<<"Salary when retiring? $"<<endl;
    cin>>salary;
    cout<<"Muni Bond Rate? %"<<endl;
    cin>>mniRate;
    cout<<"Yearly Dep? %"<<endl;
    cin>>yrlDepP;
    
    //Calculate the amount to save for retirement
    yrlDepP/=100;//Convert to fraction
    mniRate/=100;//Convert to fraction
    retSav=salary/mniRate;
    cout<<"Savings required to retire = $"<<retSav<<endl;
    
    //Output are yearly Savings Account
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Year      Savings      Interest    Deposit"<<endl;
    for(int year=0;year<=years&&inSavgs<retSav;year++){
        float interst=inSavgs*mniRate;
        float deposit=yrlDepP*salary;
        cout<<setw(4)<<year<<
              setw(13)<<inSavgs<<
              setw(13)<<interst<<
              setw(13)<<deposit<<endl;
        inSavgs+=(interst+deposit);
    }

    //Exit stage right!
    return 0;
}