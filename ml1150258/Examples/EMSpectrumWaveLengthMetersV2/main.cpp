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
    string band="";
    
    //Input wavelength
    cout<<"Input wavelength in meters"<<endl;
    cin>>lambda;
    
    //Output EM Band
    cout<<((lambda>=5e0f)  ?"Radio Band         ":
           (lambda>=5e-3f) ?"MicroWave Band     ":
           (lambda>=5e-6f) ?"InfraRed Band      ":
           (lambda>=1e-7f) ?"Visible Band       ":
           (lambda>=1e-9f) ?"UltraViolet Band   ":
           (lambda>=1e-11f)?"XRay Band          ":
                           "Gamma Ray Band     ")
        <<endl;

    //Exit stage right!
    return 0;
}