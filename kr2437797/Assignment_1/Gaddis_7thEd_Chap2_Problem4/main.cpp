/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on June 25, 2014, 12:44 PM
 */

//User Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    
    //set the variables
    float ttl=44.50f,                   //meal cost
          tx=0.0675f,                   //tax percentage
          tip=.15f,                     //tip percentage
          ttltx=(ttl*tx)+ttl,           //total plus tax
          txamt=(ttl*tx),               //tax amount
          ttltp=(ttltx*tip),            //tip amount
          dinNdsh=(ttltx*tip)+ttltx;    //total cost
    
    //output of the results
    cout<<"Meal Cost:"<<fixed<<setprecision(2)<<ttl<<endl;
    cout<<"Tax amount:"<<fixed<<setprecision(2)<<txamt<<endl;
    cout<<"Tip amount"<<fixed<<setprecision(2)<<ttltp<<endl;
    cout<<"Total Bill:"<<fixed<<setprecision(2)<<dinNdsh<<endl;
   
    
    return 0;
}

