/* 
 * File:   main.cpp
 * Author: Idalia Ramirez
 * Created on July 7, 2014, 12:50 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries


//Global Constants


//Function Prototypes


//Execute Here.
int main(int argc, char** argv) {
    float a,   //Input a
            b, //Input b
            c, //Input c
            g, //discriminant
            x1, //Positive root value
            x2; //Negative root value
    
    cout<<"Welcome to the Quadratic Equation program."<<endl;
    cout<<"Input value for a: ";
    cin>>a;
    cout<<"Value for b: ";
    cin>>b;
    cout<<"Value for c: ";
    cin>>c;
    
    //Calculations
    g=b*b-4*a*c;
    if(g>0){
        x1=(-b+(sqrtf(g)))/(2*a);
        x2=(-b-(sqrtf(g)))/(2*a);
        cout<<"The roots are: "<<x1<<" and "<<x2<<"."<<endl;
    }else{
        x1=x2=-b/(2*a);
        float imag=sqrtf(-g)/(2*a);
        cout<<"Root 1 = "<<x1<<" +"<<imag<<"i"<<endl;
        cout<<"Root 2 = "<<x2<<" -"<<imag<<"i"<<endl;
    }
            


    return 0;
}
