/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 16, 2014, 10:21 AM
 */

//System Libraries
#include <iomanip>
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

//Global Constants
const float PI=4*atan(1.0);
const float CNVRDEG=180/PI;

//Function Prototypes
void  readFile(char []);
void  intrpPts(char [],float,float&,float&,float&,float&);
float intrpVl(float,float,float,float,float);
void  display(float,float,float,float,float,float);
int   timItrp(int,float,float,float,float,float);
int   timSin(int,float);

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Test the file for any data problems
    char fn[]="SinSpreadsheet.csv";
    //readFile(fn);
    
    //Find the interpolation points
    float angleR=85/CNVRDEG,x1,x2,y1,y2;
    
    //Find the points and interpolate the value
    intrpPts(fn,angleR,x1,x2,y1,y2);
    float yValue=intrpVl(angleR,x1,x2,y1,y2);
    
    //Record the time it takes for each function
    cout<<"Note:  This program might take 20 secs or longer to run!"<<endl;
    int loop=1000000000;
    float timeI=timItrp(loop,angleR,x1,x2,y1,y2);
    float timeS=timSin(loop,angleR);
    
    //Display the results
    display(x1,angleR,x2,y1,yValue,y2);
    cout<<"The interpolated time for "<<loop
        <<" loops = "<<timeI<<" secs"<<endl;
    cout<<"The function time for sin "<<loop
        <<" loops = "<<timeS<<" secs"<<endl;

    //Exit stage right!
    return 0;
}


//Return the time it takes to perform n interpolations
int timItrp(int n,float x,float x1,float x2,float y1,float y2){
    //Declare timing variables
    unsigned int strt,stop;
    float yValue;
    
    //Loop the results
    strt=static_cast<int>(time(0));
    for(int i=1;i<=n;i++){
        yValue=intrpVl(x,x1,x2,y1,y2);
    }
    stop=static_cast<int>(time(0));
    
    //Return the total time
    return stop-strt;
}

//Return the time it takes to call the sin function n times
int timSin(int n,float x){
    //Declare timing variables
    unsigned int strt,stop;
    float yValue;
    
    //Loop the results
    strt=static_cast<int>(time(0));
    for(int i=1;i<=n;i++){
        yValue=sin(x);
    }
    stop=static_cast<int>(time(0));
    
    //Return the total time
    return stop-strt;
}

//Display the area in the table to be interpolated
void  display(float x1,float x,float x2,
              float y1,float y,float y2){
    //Display the Heading
    cout<<"Deg Radians  Sin       Error%"<<endl;
    
    //Calculate the error
    float actVal=sin(x);
    float error=(y-actVal)/actVal*100;
    
    //Display the data
    cout<<x1*CNVRDEG<<" "<<x1<<" "<<y1<<endl;
    cout<< x*CNVRDEG<<" "<<x<<" "<<y<<" "<<error<<endl;
    cout<<x2*CNVRDEG<<" "<<x2<<" "<<y2<<endl;
    
    //Return from function
    return;
}

//Interpolate a value from 4 data points in a table
float intrpVl(float x,float x1,float x2,float y1 ,float y2){
    return y1+(y2-y1)/(x2-x1)*(x-x1);
}

//Find the 4 data points in a table which will be
//utilized later for an interpolation
void intrpPts(char fn[],float x,
        float &x1,float &x2,float &y1,float &y2){
    
    //Declare a fstream
    ifstream input;
    
    //Open the file stream
    input.open(fn);
    
    //Start with the first values in the table
    input>>x1>>y1;
    
    //Loop until finding the interpolation point
    while(input>>x2>>y2){
        if(x<x2)break;//When you have found the interpolation point
        x1=x2;
        y1=y2;
    }
    
    //Close the file stream
    input.close();
    return;
}

//Function to display contents of the file
void readFile(char fn[]){
    //Declare a fstream
    ifstream input;
    
    //Open the file stream
    input.open(fn);
    
    //Declare variables
    float angleR,angleD,sinTab;
    
    //Loop on file inputs and display
    cout<<fixed<<showpoint<<setprecision(7);
    cout<<"  Angle Rad  "
        <<"  Angle Deg  "
        <<"  Sin Table  "
        <<"  Act Sin    "<<endl;
    while(input>>angleR>>sinTab){
        angleD=angleR*CNVRDEG;
        cout<<setw(11)<<angleR<<"  "
            <<setw(11)<<angleD<<"  "
            <<setw(11)<<sinTab<<"  "
            <<setw(11)<<sin(angleR)<<endl;
    }
    
    //Close the file stream
    input.close();
    return;
}