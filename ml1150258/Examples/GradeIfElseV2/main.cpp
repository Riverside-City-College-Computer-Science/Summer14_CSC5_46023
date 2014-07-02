/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on June 30, 2014, 10:24 AM
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
    //Input a score from the keyboard
    cout<<"What was your score on the test?"<<endl;\
    cin>>score;
    //Output the grade pass/fail
    grade=(score>=70?'P':'F');
    cout<<"Your Pass/Fail grade = "<<grade<<endl;
    //For a letter grade
    if(score<60)grade='F';
    else if(score<70)grade='D';
    else if(score<80)grade='C';
    else if(score<90)grade='B';
    else grade='A';
    cout<<"Your Letter grade = "<<grade<<endl;
    //Exit stage right
    return 0;
}