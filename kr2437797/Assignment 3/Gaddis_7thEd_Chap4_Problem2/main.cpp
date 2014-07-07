/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 2, 2014, 4:30 PM
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
    int choice;
    
    //Output Simple text
    cout<<"Please enter an integer between 1-10"<<endl;
    
    //Input variable
    cin>>choice;
    cin.ignore();
    
    //Switch Statement to implement output and convert into Roman Numeral
    switch (choice){
        case 1:cout<<"Roman Numeral I"<<endl;           //Converts 1 to I
                 break;
        case 2:cout<<"Roman Numeral II"<<endl;          //Converts 2 to II
                 break;
        case 3:cout<<"Roman Numeral III"<<endl;         //Converts 3 to III
                 break;
        case 4:cout<<"Roman Numeral IV"<<endl;          //Converts 4 to IV
                 break;
        case 5:cout<<"Roman Numeral V"<<endl;           //Converts 5 to V
                 break;
        case 6:cout<<"Roman Numeral VI"<<endl;          //Converts 6 to VI
                 break;
        case 7:cout<<"Roman Numeral VII"<<endl;         //Converts 7 to VII
                 break;
        case 8:cout<<"Roman Numeral VIII"<<endl;        //Converts 8 to VIII
                 break;
        case 9:cout<<"Roman Numeral IX"<<endl;          //Converts 9 to IX
                 break;
        case 10:cout<<"Roman Numeral X"<<endl;          //Converts 10 to X
                 break;
        //Outputs error message if number is invalid      
        default:cout<<"You did not enter an integer between 1-10."<< endl;
            
    } 
    return 0;
}

