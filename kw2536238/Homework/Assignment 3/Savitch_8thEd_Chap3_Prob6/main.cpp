/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap3_Prob6
 * Created on July 7, 2014, 7:20 PM
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare and Initialize All Variables
    float ans1,     //One answer to the equation
          ans2,     //Second answer to the equation
          a,        
          b,
          c,
          det;    //The determinant = b*b -4*a*c
    char plAgain;    //To determine if process be repeats
    
    //Loop to allow multiple uses
    do {
    cout << "Let's find the answers to a quadratic equation!";
    cout << "Given your quadratic equation is in the form of ax^2 + bx + x = 0,\nWhat is a? ";
    cin >> a;
    cout << "What is b? ";
    cin >> b;
    cout << "What is c? ";
    cin >> c;
    
    //Calculate the determinant to see which roots are there
    det = b*b - 4*a*c;
    
    //Calculate the roots according to the determinant
    if (det > 0)
        ans1 = (-b + sqrt (det))/2/a,
        ans2 = (-b - sqrt (det))/2/a, 
        cout << "There are two irrational real roots: x = " << ans1 << " and " << ans2 << endl;
    else if (det == 0)
        ans1 = (-b + sqrt (det))/2/a,
        ans2 = (-b - sqrt (det))/2/a, 
        cout << "It is a perfect square! Your root is: x = " << ans1 <<endl;
    else if (det < 0)
        ans1 = -b/2/a,
        ans2 = sqrt(0-det)/2/a,
        cout << "There are two imaginary answers: x = " << ans1 << " + " << ans2 << "i" << endl,
        cout << setw(37) << " and " << ans1 << " - " << ans2 << "i" << endl;
    else 
        cout << "Invalid Input. ";
    
    //Ask user to loop the program
    cout << "Do you want to try again(Y or N)? ";
    cin >> plAgain;
    
    } while (plAgain == 'Y' || plAgain == 'y');
    
    //Output
    cout << "See you later!";
    
    //Exit Stage Right
    return 0;
}

