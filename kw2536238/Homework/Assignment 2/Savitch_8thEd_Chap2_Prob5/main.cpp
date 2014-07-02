/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap2_Prob5
 * Created on July 1, 2014, 10:16 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) 
{

    //Declare and Initialize Variables
    //Inputs
    float tLoan,    //"Face-Value" loan amount, meaning how much money the consumer wants
          pRate,    //The interest rate at which the loan is taken out on in percent
          dRate,    //The interest rate at which the loan is taken out on in decimals
          time;     //Total time to pay off the loan
    
    //Outputs 
    float fLoan, //Total Loan that the consumer should take out in order to pay everything off
          monPay;  //Monthly payment to pay off the loan
    
    //Input values from user
    cout << "How much money do you want? ";
    cin >> tLoan;
    cout << "What is the interest rate (percent) at which you will be taking the loan? ";
    cin >> pRate;
    cout << "How much time do you want to have the loan for (in years)";
    cin >> time;
    
    //Calculate the values
    float temp;
    dRate = pRate/100;
    temp = 1-(dRate*time);
    fLoan = tLoan/temp;
    monPay = fLoan/(time*12);
    
    //Output the Values
    cout << "Your total loan should be " << fLoan << "$." << endl;
    cout << "Your monthly payment would be " << monPay << "$." << endl;
    
    //Exit Stage Right!
    return 0;
}

