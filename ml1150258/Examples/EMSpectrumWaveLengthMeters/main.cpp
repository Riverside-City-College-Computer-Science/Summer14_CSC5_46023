/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 2nd, 2014, 7:15 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare variables
    float lambda;
    
    //Input wavelength
    cout<<"Input wavelength in meters"<<endl;
    cin>>lambda;
    
    //Output EM Band
    if(lambda>5e0f){
        cout<<"Radio Band"<<endl;
    }else if(lambda>5e-3f){
        cout<<"MicroWave Band"<<endl;
    }else if(lambda>5e-6f){
        cout<<"InfraRed Band"<<endl;
    }else if(lambda>1e-7f){
        cout<<"Visible Band"<<endl;
    }else if(lambda>1e-9f){
        cout<<"UltraViolet Band"<<endl;
    }else if(lambda>1e-11f){
        cout<<"XRay Band"<<endl;
    }else{
        cout<<"Gamma Ray Band"<<endl;
    }

    //Exit stage right!
    return 0;
}