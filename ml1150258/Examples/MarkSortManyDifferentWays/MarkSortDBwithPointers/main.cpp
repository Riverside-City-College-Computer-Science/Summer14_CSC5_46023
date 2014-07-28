/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 28th, 2014, 08:11 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

void fillArray(int *,int *,int);      //Fill a random 2 digit array
void printArray(int *,int,int); //Print an array, perLine
void printArray(int *,int *,int,int); //Print an array, perLine
void swap(int &,int &);          //Swap with temp
void swapxor(int &,int &);       //Swap with xor
void swapptr(int *,int *);       //Swap with pointers
void minList(int *,int*,int,int);    //Find the minimum in a list
void markSort(int *,int *,int);       //Apply minList to the whole array
 
int main(int argc, char* argv[]) {
    //Declare an array
    const int SIZE=100;
    int array[SIZE];
    int index[SIZE];
    //Fill the array
    fillArray(array,index,SIZE);
    //Print the array
    cout<<"This is a random 2 digit array"<<endl;
    printArray(array,SIZE,10);
    //This is the initial index to that random array
    cout<<"Initial parallel indexed array"<<endl;
    printArray(index,SIZE,10);
    //Start figuring out a sort
    //Find the minimum in a list
    markSort(array,index,SIZE);
    //Print the result
    cout<<"Random 2 digit array after sort -> no change"<<endl;
    printArray(array,SIZE,10);
    cout<<"Indexed array after the sort -> this is the sorted order"<<endl;
    printArray(index,SIZE,10);
    cout<<"Original array printed with the sorted index"<<endl;
    printArray(array,index,SIZE,10);
    return 0;
}

void markSort(int a[],int indx[],int n){
    for(int i=0;i<n-1;i++){
        minList(a,indx,n,i);
    }
}

void minList(int a[],int indx[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        //Any and all of these will work
        //if(a[pos]>a[i])swap(a[pos],a[i]);
        //if(a[pos]>a[i])swapxor(a[pos],a[i]);
        //if(a[pos]>a[i])swapptr(a+pos,a+i);
        if(*(a+*(indx+pos))>a[indx[i]])swapptr(&indx[pos],&indx[i]);
    }
}

void swapptr(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
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

void printArray(int a[],int indx[],int n,int perLine){
    //Print out this number of elements->perLine
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<*(a+*(indx+i))<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
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

void fillArray(int a[],int indx[],int n){
    //If calling this function once then you can
    //place the random number seed here else needs
    //to go into main
    //Set the Seed
    srand(static_cast<unsigned int>(time(0)));
    //Create loop and fill the array with 2 digit numbers
    for(int i=0;i<n;i++){
        *(a+i)=rand()%90+10;
        indx[i]=i;
    }
}