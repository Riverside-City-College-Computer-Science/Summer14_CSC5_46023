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
    int sum=0,col1,col2;
    float prod=1;
    ifstream input;
    
    //Open the input file
    input.open("data.csv");
    
    //Read in all data from the file
    while(input>>col1>>col2){
        prod*=col1;
        sum+=col2;
    }
    
    //Output
    cout<<"The prod of all the data in column 1 = "
        <<prod<<endl;
    cout<<"The sum of all the data in column 2 = "
        <<sum<<endl;
    
    //Exit stage right
    input.close();
    return 0;
}