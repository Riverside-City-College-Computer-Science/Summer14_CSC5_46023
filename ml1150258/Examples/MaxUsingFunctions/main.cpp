/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 23, 2014, 11:25 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Prototype
float maxNum(float,float,float,float);
void display(float);
void input(float &,float &,float &,float &);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare variables
    float max,m1,m2,m3,m4;
    
    //Input the values
    input(m1,m2,m3,m4);
    
    //Determine the max
    max=maxNum(m1,m2,m3,m4);
    
    //Display the result
    display(max);

    //Exit stage right
    return 0;
}

void input(float &a,float &b,float &c,float &d){
    cout<<"Input 4 numbers"<<endl;
    cin>>a>>b>>c>>d;
}

void display(float mx){
    cout<<"The maximum is = "<<mx<<endl;
}

float maxNum(float n1,float n2,float n3,float n4){
    float max=n1;
    if(n2>max)max=n2;
    if(n3>max)max=n3;
    if(n4>max)max=n4;
    return max;
}

