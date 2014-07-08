/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Purpose: Truth Table
 * Created on June 30, 2014, 11:11 AM
 */

// System Level Libraries
#include <iostream>
using namespace std;

// User Defined Libraries

// Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Truth Table Header
    cout<<"The Truth Table.\n";
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)^X (X^Y)^Y !(X&&Y)";
    cout<<"!(X||!Y) !(X||Y) !X&&S!Y"<<endl;
    
    bool X=true, Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<((X^Y)^X?'T':'F')<<"       ";
    cout<<((X^Y)^Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"      ";
    cout<<(!X||!Y?'T':'F')<<"        ";
    cout<<(!(X||Y)?'T':'F')<<"      ";
    cout<<(!X&&!Y?'T':'F')<<"      "<<endl;
    
    Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<((X^Y)^X?'T':'F')<<"       ";
    cout<<((X^Y)^Y?'T':'F')<<"     ";
            
           
    
          
    
    
    

    return 0;
}

