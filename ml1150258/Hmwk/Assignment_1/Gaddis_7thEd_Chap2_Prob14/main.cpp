/* 
 * File:   main.cpp
 * Author: Dr. Mark E. lehr
 * Created on June 25, 2014, 6:05 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    const char NSIZE=25;//Includes the null terminator
    char name[NSIZE];//Character array (i.e. character string)
    const int ASIZE=60;//Includes the null terminator
    char address[ASIZE];//Character array (i.e. character string)
    char city[15],state[3],zip[6];
    char tlphone[14];
    
    //Input the data
    cout<<"Input your Name"<<endl;
    cout<<"Format FN MI LN"<<endl;
    cin.getline(name,NSIZE);
    cout<<endl<<"Input your address"<<endl;
    cout<<"Number, Street, Apt, POBox"<<endl;
    cin.getline(address,ASIZE);
    cout<<endl<<"Input city,state,zip"<<endl;
    cout<<"Format as city XX DDDDD"<<endl;
    cin>>city>>state>>zip;
    cout<<endl<<"Telephone number (DDD)DDD-DDDD"<<endl;
    cin>>tlphone;
    
    //Output the data
    cout<<"Name:    "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"City,State,ZIP  "<<city<<" "<<state<<" "<<zip<<endl;
    cout<<"Telephone #     "<<tlphone<<endl;
    
    //Exit stage right!
    return 0;
}

