/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 3rd, 2014, 12:38 PM
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int sum1=0,sum2=0,col1,col2;
    ifstream input;
    
    //Open the input file
    input.open("data.csv");
    
    //Read in all data from the file
    while(input>>col1>>col2){
        sum1+=col1;
        sum2+=col2;
    }
    
    //Output
    cout<<"The sum of all the data in column 1 = "
        <<sum1<<endl;
    cout<<"The sum of all the data in column 2 = "
        <<sum2<<endl;
    
    //Exit stage right
    input.close();
    return 0;
}

