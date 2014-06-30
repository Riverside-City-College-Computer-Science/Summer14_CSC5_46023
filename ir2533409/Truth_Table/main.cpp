/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on June 30, 2014, 11:23 AM
 */
#include <iostream>
using namespace std;
//System Libraries

//User Libraries


//Global Constants


//Function Prototypes


//Execution Here!
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
    cout<<(x||y?'T':'F')<<"   ";
    cout<<((x^y)?'T':'F')<<"   ";
    cout<<(((x^y)^x)?'T':'F')<<"     ";
    cout<<(((x^y)^y)?'T':'F')<<"       ";
    cout<<((!(x&&y))?'T':'F')<<"       ";
    cout<<((!x||!y)?'T':'F')<<"       ";
    cout<<((!(x||y))?'T':'F')<<"      ";
    cout<<((!x&&!y)?'T':'F')<<endl;
    //Second row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<((x^y)?'T':'F')<<"   ";
    cout<<(((x^y)^x)?'T':'F')<<"     ";
    cout<<(((x^y)^y)?'T':'F')<<"       ";
    cout<<((!(x&&y))?'T':'F')<<"       ";
    cout<<((!x||!y)?'T':'F')<<"       ";
    cout<<((!(x||y))?'T':'F')<<"      ";
    cout<<((!x&&!y)?'T':'F')<<" "<<endl;
    //Third Row
    x=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<((x^y)?'T':'F')<<"   ";
    cout<<(((x^y)^x)?'T':'F')<<"     ";
    cout<<(((x^y)^y)?'T':'F')<<"       ";
    cout<<((!(x&&y))?'T':'F')<<"       ";
    cout<<((!x||!y)?'T':'F')<<"       ";
    cout<<((!(x||y))?'T':'F')<<"      ";
    cout<<((!x&&!y)?'T':'F')<<" "<<endl;
    //Fourth Row
    x=false,y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<((x^y)?'T':'F')<<"   ";
    cout<<(((x^y)^x)?'T':'F')<<"     ";
    cout<<(((x^y)^y)?'T':'F')<<"       ";
    cout<<((!(x&&y))?'T':'F')<<"       ";
    cout<<((!x||!y)?'T':'F')<<"       ";
    cout<<((!(x||y))?'T':'F')<<"      ";
    cout<<((!x&&!y)?'T':'F')<<" "<<endl;
    
    //End Here!
    return 0;
}

