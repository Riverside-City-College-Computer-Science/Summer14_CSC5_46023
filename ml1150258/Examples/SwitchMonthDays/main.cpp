/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 2nd, 2014, 9:24 PM
 */

//System Libraries
#include <iostream>
#include <string.h>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    const int MSIZE=11;
    char month[MSIZE];
    int imonth;
    
    //Acquire the Month
    cout<<"Type in a month and the number of days "<<
          "in that month will be output"<<endl;
    cin>>month;
    if(!strcmp(month,"January"))  imonth=1;
    if(!strcmp(month,"February")) imonth=2;
    if(!strcmp(month,"March"))    imonth=3;
    if(!strcmp(month,"April"))    imonth=4;
    if(!strcmp(month,"May"))      imonth=5;
    if(!strcmp(month,"June"))     imonth=6;
    if(!strcmp(month,"July"))     imonth=7;
    if(!strcmp(month,"August"))   imonth=8;
    if(!strcmp(month,"September"))imonth=9;
    if(!strcmp(month,"October"))  imonth=10;
    if(!strcmp(month,"November")) imonth=11;
    if(!strcmp(month,"December")) imonth=12;
    
    //Output the number of days
    switch(imonth){
        case 1:case 3:case 5:case 7:case 8:case 10:
        case 12:cout<<"There are 31 days in "
                           <<month<<endl;
               break;
        case 2:cout<<"There are 28 days in "
                           <<month<<endl;
               break;
        case 4:case 6:case 9:        
        case 11:cout<<"There are 30 days in "
                           <<month<<endl;
               break;
        default:cout<<"Invalid Month"<<endl;  
    }
    //Exit Stage Right!
    return 0;
}

