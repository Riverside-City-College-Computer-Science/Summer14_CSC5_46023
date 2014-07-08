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
    char choice;
    
    //Loop until choice is not in the menu selection
    do{
        //Output the menu and input the choice
        cout<<"Type 1 for Problem X from Gaddis"<<endl;
        cout<<"Type 2 for Problem Y from Savitch"<<endl;
        cout<<"Type 3 for Error Problem"<<endl;
        cout<<"Type 4 for Problem B from Gaddis"<<endl;
        cin>>choice;
        
        //Place problem solutions in the switch statement
        cout<<endl;
        switch(choice){
            case  '1':{
                cout<<"Problem X here!"<<endl<<endl;
                break;
            }case '2':{
                cout<<"Problem Y here!"<<endl<<endl;
                break;
            }case '3':{
                //Declare variables
                float sum=0,constant=0.1f;
                int loop=10000000;
                //Loop
                for(int i=1;i<=loop;i++){
                    sum+=constant;
                }
                //Calculate the error
                float error=(sum-constant*loop)/(constant*loop)*100;
                //Output the Result
                cout<<"The sum of "<<constant<<" added "<<loop
                    <<" times is = "<<sum<<endl;
                cout<<"The actual value should be = "<<constant*loop<<endl;
                cout<<"The error is "<<error<<"%"<<endl<<endl<<endl;
                break;         
            }case '4':{
                cout<<"Problem B here!"<<endl<<endl;
                break;
            }default:{
                cout<<"Exit Menu"<<endl<<endl;
            }
        };
    }while(choice>='1'&&choice<='4');

    //Exit stage right!
    return 0;
}