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
double pi=3.14159265;//Using double because of the number of significant digits
double mu=398600.4418;//Units: km^3/s^2 Using double because of the number of significant digits
//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare variables
    //Inputs
    float r1i;   //'r1' position value in the i direction in kilometers
    float r1j;   //'r1' position value in the j direction in kilometers
    float r1k;   //'r1' position value in the k direction in kilometers
    float r2i;   //'r2' position value in the i direction in kilometers
    float r2j;   //'r2' position value in the j direction in kilometers
    float r2k;   //'r2' position value in the k direction in kilometers
    int t;       //time passed between positions in seconds
    char otype;  //orbit type: prograde or retrograde
    //Outputs
    float r1;    //magnitude of position 1 vector in kilometers
    float r2;    //magnitude of position 2 vector in kilometers
    float r1xr2x;//r1 cross r2 x value in kilometers squared
    float r1xr2y;//r1 cross r2 y value in kilometers squared
    float r1xr2z;//r1 cross r2 z value in kilometers squared
    float theta; //delta theta (change in theta in radians)
    float a;     //'A' function for Lambert's Problem
    float z;     //value of 'Z' for Lambert's Problem (found using Newton's method)
    float c;     //C(z) function for Lambert's Problem
    float s;     //S(c) function for Lambert's Problem
    float fz;    //F(z) function for Lambert's Problem
    float fprime;//F'(z) function for Lambert's Problem
    float y;     //y(z) function for Lambert's Problem
    float y0;    //y(0) function for Lambert's Problem
    float f;     //f function for Lambert's Problem
    float g;     //g function for Lambert's Problem
    float fdot;  //fdot function for Lambert's Problem
    float gdot;  //gdot function for Lambert's Problem
    float v1i;   //'v1' velocity value in the i direction in kilometers per second
    float v1j;   //'v1' velocity value in the j direction in kilometers per second
    float v1k;   //'v1' velocity value in the k direction in kilometers per second
    float v2i;   //'v2' velocity value in the i direction in kilometers per second
    float v2j;   //'v2' velocity value in the j direction in kilometers per second
    float v2k;   //'v2' velocity value in the k direction in kilometers per second
    
    
    
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
    //Calculate the magnitude of the position vectors
    r1=sqrt(r1i*r1i+r1j*r1j+r1k*r1k);
    r2=sqrt(r2i*r2i+r2j*r2j+r2k*r2k);
    //Calculate r1 cross r2 in the z direction. Based on [(r1xr2)z=(r1xr2) dot k]
    r1xr2z=r1i*r2j-r1j*r2i;
    //Calculate delta theta in radians
    switch (otype){
        case '+':{
            if (r1xr2z>=0){
                theta=acos((r1i*r2i+r1j*r2j+r1k*r2k)/(r1*r2));
            }else{
                theta=2*pi-acos((r1i*r2i+r1j*r2j+r1k*r2k)/(r1*r2));
            }
            break;
        }
        case '-':{
            if (r1xr2z<0){
                theta=acos((r1i*r2i+r1j*r2j+r1k*r2k)/(r1*r2));
            }else{
                theta=2*pi-acos((r1i*r2i+r1j*r2j+r1k*r2k)/(r1*r2));
            }
            break;
        }
        default:{
            cout<<"(Assumed prograde due to invalid input for orbit type)";//Default to prograde because it is the most common orbit type
            if (r1xr2z>=0){
                theta=acos((r1i*r2i+r1j*r2j+r1k*r2k)/(r1*r2));
            }else{
                theta=2*pi-acos((r1i*r2i+r1j*r2j+r1k*r2k)/(r1*r2));
            }
            break;
        }
    }
    //Calculate 'A' function
    a=sin(theta)*sqrt(r1*r2/(1-cos(theta)));
    //Calculate Z by iterating using Newton's method until convergence
    float z=0;//Initialize variable
    do{
        if (z>0){
            c=(1-cos(sqrt(z)))/z;
            s=(sqrt(z)-sin(sqrt(z)))/pow(z,1/3);
        }else if (z<0){
            c=((cosh(sqrt(-z))-1)/(-z));
            s=(sinh(sqrt(z))-sqrt(-z))/pow(z,1/3);
        }else{
            c=1/2;
            s=1/6;
        }
        y=r1+r2+a((z*s-1)/sqrt(c));
        y0=r1+r2+a(-1/sqrt(1/2));
        if (!z==0){
            fprime=pow(y/c,3/2)*((c-3*s*s/(4*c))/(2*z)+3*s*s/(4*c))+a/8(3*s*sqrt(y)/c+a*sqrt(c/y));
        }else{
            fprime=sqrt(2)*pow(y0,3/2)/40+a/8(sqrt(y0)+a*sqrt(1/(2*y0)));
        }
        fz=pow(y/c,3/2)*s+a*sqrt(y)-sqrt(mu)*t;
        z-=fz/fprime;
    }
    while(fz/fprime>1e-5);
    //Calculate f
    f=1-y/r1;
    //Calculate g
    g=a*sqrt(y/mu);
    //Calculate fdot
    fdot=sqrt(mu)/(r1*r2)*sqrt(y/c)*(z*s-1);
    //Calculate gdot
    gdot=1-y/r2;
    //Calculate velocity at point 1
    v1i=1/g(r2i-f*r1i);
    v1j=1/g(r2j-f*r1j);
    v1k=1/g(r2k-f*r1k);
    //Calculate velocity at point 2
    v2i=1/g(gdot*r2i-r1i);
    v2j=1/g(gdot*r2j-r1j);
    v2k=1/g(gdot*r2k-r1k);
    
    //Output the results
    //NOTE: Output what kind of orbit it is (elliptical, hyperbolic, etc)
    //'Double Check' outputs
    cout<<"r1 = "<<r1<<endl;
    cout<<"r2 = "<<r2<<endl;
    cout<<"Theta = "<<theta<<" radians"<<endl;
    cout<<"A = "<<a<<endl;
    
    //Exit stage right
    return 0;
}