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
int timer(int=0);

//Begin Execution here!
int main(int argc, char** argv) {
    //Setup the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Start the Count Down
    cout<<"Time before countdown = "<<timer()<<" secs"<<endl;
    cntDwn(12,4);
    cout<<"Time after countdown  = "<<timer()<<" secs"<<endl;
    
    //Stop the timer
    timer(1);
    cout<<"Time after stop  = "<<timer()<<" secs"<<endl;
    pause(5);
    cout<<"Time after 5 sec pause when stopped "<<timer()<<" secs"<<endl;
    
    //Restart the timer
    timer(2);
    cout<<"Time at restart  = "<<timer()<<" secs"<<endl;
    pause(5);
    cout<<"Time after 5 sec pause when restarted "<<timer()<<" secs"<<endl;

    //Reset the timer
    timer(3);
    cout<<"Time after reset "<<timer()<<" secs"<<endl;
    
    //Exit stage right!
    return 0;
}

//Timer function
//Input
//   flag -> 0 used as a timer
//   flag -> 1 stop the timer
//   flag -> 2 restart the timer
//   flag -> 3 reset
//Output
//   secs -> seconds elapsed
int timer(int flag){
    //Declare Variables
    static int strt=time(0);
    static int secs=time(0);
    static bool stop=false;
    int now=time(0);
    if(stop&&flag!=2){ //Stopped and not reset
        return secs;
    }else if(flag==0){ //Normal timer
        secs=now-strt;
    }else if(flag==3){ //Reset
        strt=time(0);
        secs=now-strt;
    }else if(flag==2){ //Restart
        stop=false;
        strt=now-secs;
    }else{             //When stopped
        stop=true;
        secs=now-strt;
    }
    return secs;
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
    }while(wait<secs);
}