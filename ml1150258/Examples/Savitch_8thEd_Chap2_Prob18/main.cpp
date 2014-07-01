/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 1st, 2014, 12:24 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    //Inputs
    unsigned short cBarCal=230;//Number of calories in typical chocolate bar
    unsigned short wtLbs;      //Weight in lbs
    unsigned short ageYrs;     //Age in years
    unsigned short htInch;     //Height in inches
    char sex;                  //Sex is Male m/M or Female f/F
    //Outputs
    float bmr;                 //Basal Metabolic Rate
    float nCBars;              //Number of Candy bars to maintain weight
    
    //Acquire the inputs
    cout<<"Calculate how many candy bars a day you can eat!!!"<<endl;
    cout<<"What is your sex M/F"<<endl;
    cin>>sex;
    cout<<"What is your weight in lbs?"<<endl;
    cin>>wtLbs;
    cout<<"What is your height in inches?"<<endl;
    cin>>htInch;
    cout<<"What is age in years?"<<endl;
    cin>>ageYrs;
    
    //Calculate the BMR
    if(sex=='F'||sex=='f'){
        bmr=6.55e2f+4.3e0f*wtLbs+4.7e0f*htInch-4.7e0f*ageYrs;
    }else if(sex=='M'||sex=='m'){
        bmr=6.6e1f+6.3e0f*wtLbs+1.29e1f*htInch-6.8e0f*ageYrs;
    }else{
        cout<<"You mistyped M/F"<<endl;
    }
    nCBars=bmr/cBarCal;
    
    //Output the results
    if(sex=='F'||sex=='f'||sex=='M'||sex=='m'){
        cout<<"Your BMR = "<<bmr<<endl;
        cout<<"The number of candy bars you can eat = "<<
          nCBars<<endl;
    }else{
        cout<<"No Calculations Possible"<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}

