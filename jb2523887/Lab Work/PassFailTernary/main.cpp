/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 * Created on June 30, 2014, 11:35 AM
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
    int score;
    char grade;
    //score entry
    cout<<"Enter overall class score:"<<"  ";
    cin>>score;
    //Pass/Fail Grade
    cout<<"Your pass/fail grade is:";
    grade=(score>=70?'P':'F');
    cout<<grade<<endl;
    //Letter Grade
    cout<<"Your letter grade is:";
    grade=(score>=90)?'A':
          (score>=80)?'B':
          (score>=70)?'C':
          (score>=60)?'D':'F';
    cout<<grade;
    //exit stage right
    return 0;
}

