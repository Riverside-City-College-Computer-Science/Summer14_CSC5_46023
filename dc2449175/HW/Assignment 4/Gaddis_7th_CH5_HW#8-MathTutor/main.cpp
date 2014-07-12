/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 11, 2014, 4:25 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //create for random # gen
    srand(static_cast<unsigned int>(time(0)));

    //decalre variables
    short menu;
    int ans;
    int realans; //real answer to num1 num2
    char choice; // give option to redo
    
    do
    {  
        //inside loop to make random everytime
        int num1 = rand()%100+1; //give them only numbers 1-100
        int num2 = rand()%100+1; 

         //give options for menu
        cout << "Choose what kind of problem you want?" << endl;
        cout << "1 for Addition" << endl;
        cout << "2 for Subtraction" << endl;
        cout << "3 for Multiplication" << endl;
        cout << "4 for Division" << endl;
        cin >> menu;

        //switch for the cases
        switch(menu)
        {
            case 1: realans = num1+num2;
                    cout << num1 << "+" << num2 << endl;
                    cin >> ans; //enter answer
                    if(realans==ans) cout << "Your are correct" << endl;
                    else cout << "Sorry you are wrong" << endl;
                    break;

            case 2: realans = num1-num2;
                    cout << num1 << "-" << num2 << endl;
                    cin >> ans; //enter answer
                    if(realans==ans) cout << "Your are correct" << endl;
                    else cout << "Sorry you are wrong" << endl;
                    break;

            case 3: realans = num1*num2;
                    cout << num1 << "*" << num2 << endl;
                    cin >> ans; //enter answer
                    if(realans==ans) cout << "Your are correct" << endl;
                    else cout << "Sorry you are wrong" << endl;
                    break;

            case 4: realans = num1/num2;
                    cout << num1 << "/" << num2 << endl;
                    cin >> ans; //enter answer
                    if(realans==ans) cout << "Your are correct" << endl;
                    else cout << "Sorry you are wrong" << endl;
                    break;
        }
        cout << "Would you like to go again?" << endl;
        cin >> choice;
      }while(choice == 'Y' || choice == 'y');
    return 0;
}

