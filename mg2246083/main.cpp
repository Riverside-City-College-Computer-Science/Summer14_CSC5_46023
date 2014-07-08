/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 2, 2014, 10:32 AM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global COnstants

//Function Prototypes

//Program Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    //Knowns
    unsigned char ckpBag=40;//Cookies per bag
    unsigned char srvBag=10;//Servings per bag
    unsigned short calSrv=300;//Calories per serving
    unsigned short nCokie;//Number of cookies
    //Output
    unsigned totCal;
    
    //Acquire the number of cookies consumed
    cout<<"How many cookies did you eat?"<<endl;
    cin>>nCokie;
    
    //Calculate the calories consumed
    //Number of cookies * the calories per cookie
    totCal=nCokie*calSrv*srvBag/ckpBag;
   
    //Output the calories consumed
    cout<<"You consumed "<<totCal<<" calories"<<endl;

    //Exit stage right
    return 0;
}

