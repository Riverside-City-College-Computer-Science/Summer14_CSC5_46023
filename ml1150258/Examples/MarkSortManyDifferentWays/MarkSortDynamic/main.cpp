/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 28th, 2014, 08:11 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int *fillArray(int);      //Fill a random 2 digit array
void printArray(int [],int,int); //Print an array, perLine
void swap(int &,int &);          //Swap with temp
void swapxor(int &,int &);       //Swap with xor
void minList(int [],int,int);    //Find the minimum in a list
void markSort(int [],int);       //Apply minList to the whole array
 
int main(int argc, char** argv) {
    //Declare an array
    int size=100;
    //Fill the array
    int *array=fillArray(size);
    //Print the array
    printArray(array,size,10);
    //Start figuring out a sort
    //Find the minimum in a list
    markSort(array,size);
    //Print the result
    printArray(array,size,10);
    //Exit stage right
    delete []array;
    return 0;
}

void markSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        minList(a,n,i);
    }
}

void minList(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        //Any and all of these will work
        //if(a[pos]>a[i])swap(a[pos],a[i]);
        if(a[pos]>a[i])swapxor(a[pos],a[i]);
    }
}

void swapxor(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}


void printArray(int a[],int n,int perLine){
    //Print out this number of elements->perLine
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

int *fillArray(int n){
    //If calling this function once then you can
    //place the random number seed here else needs
    //to go into main
    //Set the Seed
    srand(static_cast<unsigned int>(time(0)));
    //Allocate memory
    int *a=new int[n];
    //Create loop and fill the array with 2 digit numbers
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
    return a;
}