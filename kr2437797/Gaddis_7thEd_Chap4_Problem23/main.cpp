/* 
 * File:   main.cpp
 * Author: Kevin
 *
 * Created on July 2, 2014, 3:30 PM
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
    char choice;
    int hours;
    
    //Input
    cout<<"Package [A,B or C]:  "<<endl;
    cin>>choice;
    cout<<"Hours"<<endl;
    cin>>hours;
    
    if(choice=='A'){
        //Declare Variables
        float temp=9.95;
        
        if(hours<=10)
            cout<<"$9.95";
        
        else if(hours>10)
            cout<<fixed<<setprecision(2)<<((hours-10)*2)+temp;
    }
    else if (choice=='B'){
        float temp=14.95;
        
        if(hours<=20)
            cout<<"Your cost is $14.95";
        
        else if (hours>20)
            cout<<fixed<<setprecision(2)<<"$"<<((hours-20)+1)+temp;   
    }
    else{
        cout<<"19.95"<<endl;
    }
    
    return 0;
}

