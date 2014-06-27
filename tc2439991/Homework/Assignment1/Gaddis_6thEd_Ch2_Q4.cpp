/* 
 * File:   main.cpp
 * Author: Brynn Caddel
 * Created on June 25, 2014, 7:01 PM
 */

//User Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
//Declare and Initialize Variables
float 
    total=44.50f,               // Cost of the Meal
    tip=.15f,                   // Tip Percentage
    tax=0.0675f,                // Tax Percentage
    ttltax=(total*tax)+total,   // The Total Plus Tax
    taxamt=(total*tax),         // Tax Amount
    ttltip=(ttltax*tip),        // Tip Amount
    ttcst=(ttltax*tip)+ttltax;  // Total Amount
    
//Display the Results
    cout<<"Meal Cost: $"<<fixed<<setprecision(2)<<total<<endl;
    cout<<"Tax Amount: $"<<fixed<<setprecision(2)<<taxamt<<endl;
    cout<<"Tip Amount: $"<<fixed<<setprecision(2)<<ttltip<<endl;
    cout<<"Total Bill: $"<<fixed<<setprecision(2)<<ttcst<<endl;
   
    return 0;
}