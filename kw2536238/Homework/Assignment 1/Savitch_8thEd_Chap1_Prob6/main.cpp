/* 
* File:   main.cpp
* Author: Krishen Wadhwani
* Purpose: Savitch_8thEd_Chap1_Prob6
* Created on June 24, 2014, 1:30 PM
*/

//System library

#include <iostream> //ERROR: main.cpp:10:21: fatal error:  iostream: No such file or directory

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main (int argc, char** argv )   //ERROR: main.cpp:23:1: error: expected ‘,’ or ‘;’ before ‘{’ token
                                   //ERROR: mein.cpp isn't recognized 
                                   //ERROR: main.cpp:22:10: error: expected initializer before ‘int’
                                   //ERROR: main.cpp:22:10: error: expected initializer before ‘int’

{
   
   //Declare And Initialize All Variables
   
   int nop;    //Number of Pods
   int ppp;    //Peas Per Pod
   int total;  //Total Peas
   
   //Enter in Information
   cout << "Press return after entering a number. \n";
   cout << "Enter the number of pods: \n";

   cin >> nop; //ERROR: main.cpp:35:11: error: no match for ‘operator>’ in ‘std::cin > nop’
   
   cout << "Enter the number of peas in a pod:\n";
   cin >> ppp; //ERROR: main.cpp:42:5: error: ‘cim’ was not declared in this scope
   
   //Calculate the total number of peas
   total = nop * ppp; //ERROR: main.cpp:45:5: error: ‘toal’ was not declared in this scope
   
   //Output Results
   cout << "If you have ";      //ERROR: main.cpp:48:5: error: ‘cut’ was not declared in this scope
   cout <<nop;
   cout << " pea pods\n";       //ERROR: main.cpp:50:11: error: expected ‘;’ before string constant
   cout << "and ";
   cout << ppp;
   cout << " peas in each pod, then\n";
   cout << "you have ";
   cout << total;
   cout << " peas in all the pods.\n";
   
   return 0;
}                                //ERROR: main.cpp:58:13: error: expected ‘}’ at end of input