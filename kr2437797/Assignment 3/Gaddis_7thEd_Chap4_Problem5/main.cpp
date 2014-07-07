/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 7, 2014, 11:50 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables
   float wght;
   float hght;
   float bmi;
    
    //Output Simple Text and ask for input
    cout<<"Please enter your weight (lbs) and height (in)"<<endl;
    
    //Input of the Variables
    cin>>wght>>hght;
    
    //Calculation of BMI
    bmi=(wght*730)/(hght*hght);
    
    //Outputs BMI to two decimal places
    cout<<"Your BMI: "<<fixed<<setprecision(2)<<bmi<<endl;
   
    //If/Else Statements to determine if underweight, overweight, or optimal
    if(bmi<=1.85e-1)                    //If BMI is less than 18.5 then under
        cout<<"Underweight";            
    if (bmi>=25)                        //If BMI is greater than 25 then over
        cout<<"Overweight";
    else                                //If BMI is in between then optimal
        cout<<"Optimal";
    
    return 0;
}

