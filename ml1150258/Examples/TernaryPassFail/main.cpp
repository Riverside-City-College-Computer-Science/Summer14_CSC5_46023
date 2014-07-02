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
    grade=(score>=90)?'A':
          (score>=80)?'B':
          (score>=70)?'C':
          (score>=60)?'D':'F';
    cout<<"Your Letter grade = "<<grade<<endl;
    //Exit stage right
    return 0;
}