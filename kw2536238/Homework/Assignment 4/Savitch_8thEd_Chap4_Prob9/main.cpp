/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savtich_8thEd_Chap4_Prob9
 * Created on July 10, 2014, 10:34 AM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User defined libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) 
{

    //Declare and Initialize Variables
    //Inputs
    int age;          //age
    float ht,           //Height
          wt;           //Weight
    
    float temp;         //temporary variable
    
    //Outputs
    float jSize,        //Jacket Size
          hSize,        //Hat Size
          wSize;        //Waist size
    
    //User Inputs Values
    cout << "What is your height(in inches)? ";
    cin >> ht;
    cout << "What is your weight(in pounds)? ";
    cin >> wt;
    cout << "What is your age(in years)? ";
    cin >> age;
    
    //Calculate the hat size
    hSize = wt/ht*2.9f;
    
    //Calculate the jacket size   
    jSize = ht*wt/288;
    if (age >=40){      //If age >= 40, change size
        temp = ((age-30)/10);
        static_cast<float>(temp);
        temp = temp/8;
    }
    else
        temp = 0;
    jSize += temp;
    
    //Calculate the waist size
    wSize = (wt/5.7);
    if (age >=28){
        temp = (age-28)/2;
        static_cast<float>(temp);
        temp = temp/10;
    }
    else
        temp = 0;
    wSize += temp;
    
    cout << "Your Hat Size is "  << hSize << " inches"<<endl;
    cout << "Your Jacket Size is "  << jSize << " inches" <<endl;
    cout << "Your Waist Size is "  << wSize << " inches" <<endl;
    
        
    return 0;
}

