/* 
 * File:   main.cpp
 * Author: Dr. Mark E. lehr
 * Created on July 2nd, 2014, 6:05 PM
 */


//System Libraries
#include <iostream>
using namespace std;


//User Libraries


//Global Constants


//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    const char MSIZE=10;//Includes the null terminator
    char month1[MSIZE];//Character array (i.e. character string)
    char month2[MSIZE];//Character array (i.e. character string)
    char month3[MSIZE];//Character array (i.e. character string)
   
    //Input the month name data
    cout<<"Input the 3 months"<<endl;
    cin>>month1>>month2>>month3;

    //Output the months
    cout<<"Month1:    "<<month1<<endl;
    cout<<"Month2:    "<<month2<<endl;
    cout<<"Month3:    "<<month3<<endl;
    
    //Continue with the solution to the problem
    //by inputing the rain/month and find the average
   
    //Exit stage right!
    return 0;
}
