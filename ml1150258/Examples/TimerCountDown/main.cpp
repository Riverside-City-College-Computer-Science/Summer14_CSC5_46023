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
void pause(int);     //Pause in seconds
void cntDwn(int,int);//Count down from X to 0 by increment Y
int timer(int=0);    //Just like a stop watch controlled by a flag

//Begin Execution here!
int main(int argc, char** argv) {
    //Setup the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Start the Count Down
    cout<<"Time before countdown = "<<timer()<<" secs"<<endl;
    cntDwn(12,4);//Start count down at 12 sec, Increment by 4 secs
    cout<<"Time after countdown  = "<<timer()<<" secs"<<endl;
    
    //Stop the timer
    timer(1);//Stop the timer -> 1
    cout<<"Time after stop  = "<<timer()<<" secs"<<endl;
    pause(5);//Pause 5 seconds
    cout<<"Time after 5 sec pause when stopped "<<timer()<<" secs"<<endl;
    
    //Restart the timer
    timer(2);//Restart the timer -> 2
    cout<<"Time at restart  = "<<timer()<<" secs"<<endl;
    pause(5);//Pause 5 seconds
    cout<<"Time after 5 sec pause when restarted "<<timer()<<" secs"<<endl;

    //Reset the timer
    timer(3);//Reset the timer -> 3
    cout<<"Time after reset "<<timer()<<" secs"<<endl;
    
    //Exit stage right!
    return 0;
}

//Timer function
//Input
//   flag -> 0 used as a timer default
//   flag -> 1 stop the timer
//   flag -> 2 restart the timer
//   flag -> 3 reset
//Output
//   secs -> seconds elapsed
int timer(int flag){
    //Declare Variables
    static int strt=time(0);//Remember the start
    static int secs=time(0);//Remember elapsed time
    static bool stop=false; //Remember if timer stopped
    int now=time(0);        //Current time
    //What state is the timer in?
    if(stop&&flag!=2){ //Stopped and not reset
        return secs;
    }else if(flag==0){ //Normal timer, defaulted parameter
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

//Count Down
//Input
//  strt -> Countdown start (secs)
//  paws -> time output increment (secs)
void cntDwn(int strt,int paws){
    //Perform the countdown
    do{
        cout<<strt<<" seconds"<<endl;
        strt-=paws;
        pause(paws);
    }while(strt>0);
    cout<<strt<<" seconds"<<endl;
}

//Pause function
//Input
//  secs -> Number of seconds to pause execution
void pause(int secs){
    //Start the time
    int stp,wait,strt=time(0);
    //Wait the required number of seconds
    do{
        stp=time(0);
        wait=stp-strt;
    }while(wait<secs);
}