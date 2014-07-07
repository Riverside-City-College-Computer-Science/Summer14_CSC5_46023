/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 7, 2014, 11:23 AM
 */

nclude <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables
    short ln1;                //Length of Rectangle 1
    short ln2;                //Length of Rectangle 2
    short w1;                 //Width of Rectangle 1
    short w2;                 //Width of Rectangle 2
    
    //Output simple text and ask for input of Rectangle 1
    cout<<"Please enter the Length and Width of Rectangle One"<<endl;
    
    //Input of Length 1 and Width 1
    cin>>ln1>>w1;
    cin.ignore();
    
    //Output simple text and ask for input of Rectangle 2
    cout<<"Please enter the Length and Width of Rectangle Two"<<endl;
    
    //Input of Length 2 and Width 2
    cin>>ln2>>w2;
    cin.ignore();
    
    //Outputs the Area of both Rectangles
    cout<<"Area of Rectangle 1: "<<fixed<<setprecision(2)<<ln1*w1<<endl;
    cout<<"Area of Rectangle 2: "<<fixed<<setprecision(2)<<ln2*w2<<endl;
   
    //Determines which Rectangle has a greater area 
    if (ln1*w1>ln2*w2)
        cout<<"Rectangle 1 is greater than Rectangle 2";
    else cout<<"Rectangle 2 is greater than Rectangle 1"<<endl;
    
    return 0;
}

