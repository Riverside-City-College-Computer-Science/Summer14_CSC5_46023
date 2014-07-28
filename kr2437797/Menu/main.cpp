/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 28, 2014, 12:12 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
//User Libraries

//Global constants

//Function Prototypes
void con();
void displayMenu();
int getMenu();
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void endProgram();

//Execution begins here!
int main(int argc, char** argv) {

        int input;
    do{
        displayMenu();
        input=getMenu();
        switch(input){

            case 1: problem1();break;
            case 2: problem2();break;
            case 3: problem3();break;
            case 4: problem4();break;
            case 5: problem5();break;
            case 6: problem6();break;
            case 7: endProgram();break;
            default:(input);
        };
    
    }while(input<7);
    
    return 0;
}

void con()
{
 cout<<"Press Enter to continue..."<<endl;
 cin.ignore();
}

void displayMenu()
{
 cout<<"[1] Problem 1"<<endl;
 cout<<"[2] Problem 2"<<endl;
 cout<<"[3] Problem 3"<<endl;
 cout<<"[4] Problem 4"<<endl;
 cout<<"[5] Problem 5"<<endl;
 cout<<"[6] Problem 6"<<endl;
 cout<<"[7] Exit Program"<<endl;
 
}

int getMenu()
{
    int input;
    cin>>input;
    return input;
}

void problem1()
{

}
void problem2()
{

}

void problem3()
{

}

void problem4()
{

}

void problem5()
{

}

void problem6()
{

}

void endProgram()
{
    cout<<"Now exiting Program..."<<endl;
    con();
    cin.ignore();
}
