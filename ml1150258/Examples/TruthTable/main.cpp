/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 30, 2014, 10:24 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare 3 variables
    char a=50,b=51,temp;
    //Output the values
    cout<<"Initialized Values for a and b"<<endl;
    cout<<"a="<<static_cast<int>(a)<<" b="<<static_cast<int>(b)<<endl;
    cout<<"a="<<a<<" b="<<b<<endl;
    //Swap with a memory position and output
    temp=a;
    a=b;
    b=temp;
    cout<<"After the Swap in memory"<<endl;
    cout<<"a="<<static_cast<int>(a)<<" b="<<static_cast<int>(b)<<endl;
    cout<<"a="<<a<<" b="<<b<<endl;
    //Swap in place and output
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After the Swap in place"<<endl;
    cout<<"a="<<static_cast<int>(a)<<" b="<<static_cast<int>(b)<<endl;
    cout<<"a="<<a<<" b="<<b<<endl;
    //Setup the truth table
    cout<<endl<<"The Truth Table"<<endl;
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X ";
    cout<<"X^Y^Y !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    //First row
    bool x=true,y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"  "<<endl;
    //Second row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"  ";
    
    //Exit stage right!
    return 0;
}

