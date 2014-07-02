/* 
* File:   main.cpp
* Author: Krishen Wadhwani
* Purpose: Savitch_8thEd_Chap2_Prob14
* Created on July 1, 2014, 9:45 AM
*/

//System Level Libraries
#include <iostream>
#include <string>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv)
{

   //Declare and Initialize all Variables
   
   //Input Values
   unsigned short num; //Number between 100 and 120
   string inst,      //Instructors First Name
          name,      //Users Name
          food,      //A food name
          adj,       //Adjective 
          color,     //Color
          animal;    //Animal name
   
   cout << "Lets play MADLIBS!\n";
   
   //Inputting Values
   cout << "What is your instructors last name? \n";
   getline(cin, inst);
   cout << "What is your name? \n";
   getline(cin, name);
   cout << "Enter a number between 100 and 120: \n";
   cin >> num;
   
   //If the number isn't within the parameters, try again
   if (num <= 100 && num >= 120)
   {
       cout << "You didn't enter in a proper number!\n",
       cout << "Try Again:  \n",
       cin >> num;
   }
   cin.ignore();
   
   //Input Values (cont.)
   cout << "Enter an adjective: \n";
   getline(cin, adj);
   cout << "What is your favorite color? \n";
   getline(cin, color);
   cout << "What is your favorite animal? \n";
   getline(cin, animal);
   cout << "What is your favorite food? \n";
   getline(cin, food);
   cout << "\n";
       
   //Output the Values
   cout << "Dear Dr. " <<inst<< ",\n\n";
   cout << "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten " << food;
   cout << ", which made me turn " << color << " \nand extremely ill. I came down with a fever of " << num;
   cout << ". Next, my " << adj << " pet " << animal << " must have smelled the remains of the " <<food;
   cout << " \non my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late.";
   cout << "\n\nSincerely, \n" << name;
           
   //Exit Stage Right
   return 0;
}

