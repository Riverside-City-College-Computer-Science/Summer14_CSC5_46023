/* Chapter 2 Problem 14
 * File:   main.cpp
 * Author: Daniel Boebinger
 * Created on June 26, 2014, 11:28 AM
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
    const char CSIZE=30;
    char citStZi[CSIZE];
    const int TSIZE=14;
    char tlphone[TSIZE];
    
    //Input the data
    cout<<"Input your Name"<<endl;
    cout<<"Format FN MI LN"<<endl;
    cin.getline(name,NSIZE);
    cout<<endl<<"Input your address"<<endl;
    cout<<"Number, Street, Apt, POBox"<<endl;
    cin.getline(address,ASIZE);
    cout<<endl<<"Input city,state,zip"<<endl;
    cout<<"Format as city XX DDDDD"<<endl;
    cin.getline(citStZi,CSIZE);
    cout<<endl<<"Telephone number (DDD)DDD-DDDD"<<endl;
    cin.getline(tlphone,TSIZE);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
  
    
    //Output the data
    cout<<"Name:    "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"City,State,ZIP  "<<citStZi<<endl;
    cout<<"Telephone #     "<<tlphone<<endl;
    
    //Exit stage right!
    return 0;
}
