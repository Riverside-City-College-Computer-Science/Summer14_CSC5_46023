/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 1st, 2014, 10:24 AM
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
    //Meanging of the grade
    switch(grade){
        case 'a':
        case 'A':{
            cout<<"You received a score greater than or equal to 90"<<endl;
            break;
        }
        case 'b':
        case 'B':{
            cout<<"You received a score greater than or equal to 80"<<endl;
            break;
        }
        case 'c':
        case 'C':{
            cout<<"You received a score greater than or equal to 70"<<endl;
            break;
        }
        case 'd':
        case 'D':{
            cout<<"You received a score greater than or equal to 60"<<endl;
            break;
        }
        default:{
            cout<<"You received a score less than 60"<<endl;
            break;
        }
    }
    //Exit stage right
    return 0;
}