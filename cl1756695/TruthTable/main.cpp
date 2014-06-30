/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: (o ell he ruth)*T
 * Created on June 30, 2014, 10:25 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!

int main(int argc, char** argv) {
    
    //Setup the truth table
    cout<<"The Truth Table"<<endl;//Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||!Y ";
    cout<<"!(X||Y) !X&&!Y"<<endl;
    
    //First Row
    bool x=true,y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(!x&&y?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!x||y?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    //Second Row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(!x&&y?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!x||y?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    //Third Row
    x=false, y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(!x&&y?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!x||y?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    //Fourth Row
    x=false,y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(!x&&y?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!x||y?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<endl;

    return 0;
}

