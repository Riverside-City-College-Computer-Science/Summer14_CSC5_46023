/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on June 26, 2014, 1:45 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>

//User-defined Libraries

//Global Constants

//Function Prototypes

using namespace std;

//Begin execution
int main(int argc, char** argv) {

    //Declare and initialize variables
    float loan, ins, gas, oil, tire, maint, mnthCst, yearCst;
    
    //Request user input
    cout << "What is your car payment each month? $";
    cin >> loan;
    cout << "What is your monthly insurance bill? $";
    cin >> ins;
    cout << "How much do you spend per month in gas? $";
    cin >> gas;
    cout << "How much do you save per month for tire replacement? $";
    cin >> tire;
    cout << "What is your monthly maintenance cost? $";
    cin >> maint;
    
    //Calculations
    mnthCst = loan + ins + gas + tire + maint;
    yearCst = mnthCst * 12;
    
    //Output data
    cout << setprecision(2) << fixed;
    cout << "You spend $" << mnthCst << " per month, and $" << yearCst << " annually." << endl;
    
    //Finish him!!
    return 0;
}

