/* 
 * File:   main.cpp
 * Author: Kevin Ruvas
 *
 * Created on July 9, 2014, 11:07 AM
 */


#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int num,total=0;
    
    do{
        cout<<"Please enter a Positive Integer:  ";
        cin>>num;
        cin.ignore();
        //break;
    }while(num<1);
   
    int i = 0;
    while(i<=num){
        total += i;
        i++;
        cout<<total<<endl;
    }
    
    /*for(int i=0; i<=num; i++){
        total += i;
        cout<<total<<endl;
    }*/
            
    return 0;
}

