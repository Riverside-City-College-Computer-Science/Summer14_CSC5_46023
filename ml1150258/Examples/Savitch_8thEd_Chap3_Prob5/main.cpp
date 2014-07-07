/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 3rd, 2014, 12:38 PM
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
    char day,dum;
    unsigned short minutes,hour;
    float bill;
    
    //Input the data
    cout<<"Telephone Bill for a Call"<<endl;
    cout<<"Input the day of the Week"<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl;
    cin>>day>>dum;
    cout<<"Input the time of the call"<<endl;
    cout<<"Military Time 1:30PM = 13:30 military"<<endl;
    cin>>setw(2)>>hour>>dum>>dum>>dum;
    cout<<"Input the duration of call in minutes"<<endl;
    cin>>minutes;
    
    //Calculate the Bill
    if(day=='S'){
        bill=1.5e-1f*minutes;
    }else{
        if(hour>=8&&hour<18){
            bill=4e-1f*minutes;
        }else{
            bill=2.5e-1f*minutes;
        }
    }
    
    //Output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Your Phone Bill = $"<<bill<<endl;

    //Exit stage right
    return 0;
}

