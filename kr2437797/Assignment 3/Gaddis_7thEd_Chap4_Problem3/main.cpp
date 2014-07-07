/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 7, 2014, 10:43 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variabl
    unsigned short day, mnth, yr;
    
    //Asks Users for input
    cout<<"Please enter the day, month (in numeric form) and a two digit year"<<
           endl;
    
    //Input of Variables
    cin>>day>>mnth>>yr;
    cin.ignore();
    
    //Outputs the date that was entered
    cout<<"The Date you entered was "<<day<<"/"<<mnth<<"/"<<yr<<endl;
    
    //If/Else statement to determine if date is magic or not
    if (day*mnth==yr)
        cout<<"The date is magic (the book told me to say this...)";
    
    else cout<<"It's not magic... just a regular day."<<endl;
    
    
    return 0;
}

