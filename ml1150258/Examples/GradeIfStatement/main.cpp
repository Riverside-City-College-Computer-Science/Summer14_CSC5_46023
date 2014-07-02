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
    if(score>=90)grade='A';
    if(score<90&&score>=80)grade='B';
    if(score<80&&score>=70)grade='C';
    if(score<70&&score>=60)grade='D';
    if(score<60)grade='F';
    cout<<"Your Letter grade = "<<grade<<endl;
    //Exit stage right
    return 0;
}
