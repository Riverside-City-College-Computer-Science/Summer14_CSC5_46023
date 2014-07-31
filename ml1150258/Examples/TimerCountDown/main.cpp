/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 30, 2014, 7:13 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//No global constants

//Function prototypes
void pause(int);
void cntDwn(int,int);

//Begin Execution here!
int main(int argc, char** argv) {
    //Setup the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Start the Count Down
    cntDwn(12,4);

    //Exit stage right!
    return 0;
}

void cntDwn(int strt,int paws){
    //Perform the countdown
    do{
        cout<<strt<<" seconds"<<endl;
        strt-=paws;
        pause(paws);
    }while(strt>0);
    cout<<strt<<" seconds"<<endl;
}

void pause(int secs){
    //Start the time
    int stp,wait,strt=time(0);
    do{
        stp=time(0);
        wait=stp-strt;
    }while(wait<=secs);
}