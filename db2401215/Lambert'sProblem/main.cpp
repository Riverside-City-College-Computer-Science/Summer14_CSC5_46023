/* Lambert's Problem
 * File:   main.cpp
 * Author: Daniel Boebinger
 * Created on July 8, 2014, 10:58 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare variables
    //Inputs
    float r1i; //'r1' position value in the i direction in kilometers
    float r1j; //'r1' position value in the j direction in kilometers
    float r1k; //'r1' position value in the k direction in kilometers
    float r2i; //'r2' position value in the i direction in kilometers
    float r2j; //'r2' position value in the j direction in kilometers
    float r2k; //'r2' position value in the k direction in kilometers
    int t;     //time passed between positions
    char otype;//Orbit type: prograde or retrograde
    //Outputs
    float v1i; //'v1' velocity value in the i direction in kilometers per second
    float v1j; //'v1' velocity value in the j direction in kilometers per second
    float v1k; //'v1' velocity value in the k direction in kilometers per second
    float v2i; //'v2' velocity value in the i direction in kilometers per second
    float v2j; //'v2' velocity value in the j direction in kilometers per second
    float v2k; //'v2' velocity value in the k direction in kilometers per second
    
    
    
    //Input Values      
    cout<<"Enter the first position of the object"<<endl;
    cout<<"in orbit in kilometers in vector format:"<<endl;
    cin>>r1i>>r1j>>r1k;
    cout<<"Enter the second position of the object"<<endl;
    cout<<"in orbit in kilometers in vector format:"<<endl;
    cin>>r2i>>r2j>>r2k;
    cout<<"Enter the number of seconds passed between positions"<<endl;
    cin>>t;
    cout<<"Enter '+' if the orbit is prograde or"<<endl;
    cout<<"'-' if the orbit is retrograde"<<endl;
    cin>>otype;
    
    //Calculations
    //Calculate the estimated price after inflation
    newcost=cost+cost*years*(inflate/100);
    
    //Output the results
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Estimated cost of item(s)"<<endl<<"due to inflation = $"<<newcost;
    
    //Exit stage right
    return 0;
}