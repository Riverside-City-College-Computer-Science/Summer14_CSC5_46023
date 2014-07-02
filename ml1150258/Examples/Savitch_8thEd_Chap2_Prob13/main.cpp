/* 
 * File:   main.cpp
 * Author: Dr. Mark E.Lehr
 * Created on July 2, 2014, 10:24 AM
 */

//System Libraries
#include <cstdlib> //Setting the Random number seed
#include <iostream>//cin/cout
#include <ctime>   //Utilize time as input to seed
using namespace std;

//User Libraries

//Global Constants
const float CNVHRMN=60.0f;//60 min in an hour
const float CNVMNSC=CNVHRMN;//60 sec in a minute

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare variables
    float mph,fMin;//miles per hour and float number of minutes
    int iMin,iSec; //integer minutes and seconds
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Calculations
    mph=rand()%28+1;//Fastest human around 28mph, range [1,28]
    fMin=CNVHRMN/mph;//Floating point # minutes to do the mile
    iMin=fMin;
    iSec=(fMin-iMin)*CNVMNSC;//Truncation
    
    //Output the results
    cout<<"Speed = "<<mph<<" mph"<<endl;
    cout<<"Equal to 1 mile in "<<iMin<<" minutes "
        <<iSec<<" seconds"<<endl;
    
    //Exit stage right!
    return 0;
}

