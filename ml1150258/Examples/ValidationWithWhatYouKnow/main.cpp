/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 21, 2014, 9:42 AM
 * Purpose:
 *      Checking account number with what you know
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    char number[]="000";
    unsigned short sNum=atoi(number);
    int size=strlen(number);
    
    //You will need to read in the number with getline
    //I just embedded into code for quick check
    
    //Output the number formatted
    cout<<"The string length = "<<size<<endl;
    if(size==4){
        cout<<"The string number = "<<number<<endl;
        cout<<"Without formatting sNum = "<<sNum<<endl;
        cout<<"With formatting sNum = ";
        if(sNum<10){
            cout<<"000";
        }else if(sNum<100){
            cout<<"00";
        }else if(sNum<1000){
            cout<<"0";
        }
        cout<<sNum<<endl;
    }else{
        cout<<"Improper account number"<<endl;
    }
    
    //Exit Stage Right
    return 0;
}

