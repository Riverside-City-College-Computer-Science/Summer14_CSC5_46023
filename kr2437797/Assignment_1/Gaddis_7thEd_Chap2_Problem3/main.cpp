/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on June 25, 2014, 11:20 AM
 */

//User Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    
    //The total Sum of the purchases
    short ttl=52;
          
    float sstx=.04f,    //State Sales tax is 4%
          cstx=.02f,    //County Sales Tax is 2%
          ttltx;        //Total tax
    
    //Calculation of total sum of tax
    ttltx=(ttl*sstx)+(ttl*cstx);
    
    //Output the Result of Total Sales Tax
    cout<<"The total sales tax is $"<<ttltx<<endl;
    
    
    
   
    
   
    
    return 0;
}

