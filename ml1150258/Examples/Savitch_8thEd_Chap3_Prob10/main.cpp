/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 8th, 2014, 10:47 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    //Inputs
    float crudWt;//Crud Weight in lbs
    float nDays;//Number of days to calculate growth
    const unsigned char  seqWdth=5;//5 days between growth
    //Terms for Fibonacci
    unsigned char n,counter;//Terms in sequence and counter
    int fi,fim1,fim2;//Fibonacci fi, fi-1, fi-2
    
    //Initialize sequence members
    fim2=1;
    fim1=1;
    //Calculate the first term in the sequence
    fi=fim1+fim2;
    
    //Input the specifics for the crud
    cout<<"What is the initial crud wt in lbs?"<<endl;
    cin>>crudWt;
    cout<<"How many days is the growth allowed?"<<endl;
    cin>>nDays;
    
    //Start the fibonacci sequence
    n=nDays/seqWdth+1;
    counter=3;
    
    //Generate the Sequence
    while(counter<n){
        fim2=fim1;
        fim1=fi;
        fi=fim1+fim2;
        counter++;
    }
    
    //Output the results
    if(nDays<2*seqWdth)fi=fim2;
    crudWt*=fi;
    cout<<"Total Crud = "<<crudWt<<" lbs"<<endl;

    //Exit Stage right
    return 0;
}

