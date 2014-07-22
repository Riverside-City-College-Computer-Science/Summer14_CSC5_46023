/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 10, 2014, 1:33 PM
 */

#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc, char** argv) {
    
    //Declare Main Variables
    float per=.04;              //Percentage Increase
    
  
    //For Statement which sets Year at O and Membership Costs (x) at $2500
    //Also limits the loop to only show up to 6 Years of projected costs.
    for(float yr=1, x=2500;yr<=6;yr++){
       
       //Calculations
       x+=per*x;                 //Outputs Membership costs
      
       //Ouputs Simple Text of the Year(yr)and the projected cost(x)
       cout<<"Projected rates of Membership";
       cout<<"for Year: "<<fixed<<setprecision(0)<<yr<<endl;
       cout<<"Cost: $"<<fixed<<setprecision(2)<<x<<endl;
             
}
    return 0;
}

