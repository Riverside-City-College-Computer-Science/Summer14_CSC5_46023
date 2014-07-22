/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 21, 2014, 12:42 PM
 */

//System Libraries
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

//Global constants
const int COLS=10;

//Function Prototypes
void  filAray(int [][COLS],int);
void  prnAray(const int [][COLS],int);
float average(const int [][COLS],int);
int   minimum(const int [][COLS],int);
int   maximum(const int [][COLS],int);
float average(const int [][COLS],int,int&,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare the array and its maximum size
    const int MAXROWS=200;
    int array[MAXROWS][COLS];
    int actSize,nRows,nCols,mxAray,mnAray;
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Prompt for inputs
    cout<<"Rows of Array to fill <= 200"<<endl;
    cin>>actSize;
    
    //Fill the Array
    filAray(array,actSize);
    
    //Print the Array
    prnAray(array,actSize);
    
    //Output some interesting information
    cout<<"The average = "<<average(array,actSize)<<endl;
    cout<<"The average = "<<average(array,actSize,mxAray,mnAray)<<endl;
    cout<<"The max value = "<<mxAray<<endl;
    cout<<"The min value = "<<mnAray<<endl;
    mxAray=maximum(array,actSize);
    mnAray=minimum(array,actSize);
    cout<<"The max value = "<<mxAray<<endl;
    cout<<"The min value = "<<mnAray<<endl;
    
    //Exit stage right!
    return 0;
}

//Function that finds the min an array
//Inputs
//   a -> An array of size >=n
//   n -> The actual size not the maximum size of the array
//Outputs
//   mn -> max value of the array
int   minimum(const int a[][COLS],int n){
    int mn=a[0][0];
    //Loop for the sum and max/min
    for(int row=0;row<n;row++){
        for(int col=0;col<COLS;col++){
            if(mn>a[row][col])mn=a[row][col];
        }
    }
    return mn;    
}

//Function that finds the max an array
//Inputs
//   a -> An array of size >=n
//   n -> The actual size not the maximum size of the array
//Outputs
//   mx -> max value of the array
int   maximum(const int a[][COLS],int n){
    int mx=a[0][0];
    //Loop for the sum and max/min
    for(int row=0;row<n;row++){
        for(int col=0;col<COLS;col++){
            if(mx<a[row][col])mx=a[row][col];
        }
    }
    return mx;    
}

//Function that averages an array
//Inputs
//   a -> An array of size >=n
//   n -> The actual size not the maximum size of the array
//Outputs
//   average -> average of the array
//   mx -> max value of the array
//   mn -> min value of the array
float average(const int a[][COLS],int n, int &mx, int &mn){
    //Declare a sum and initialize min and max
    float sum=0;
    mx=mn=a[0][0];
    //Loop for the sum and max/min
    for(int row=0;row<n;row++){
        for(int col=0;col<COLS;col++){
            if(mn>a[row][col])mn=a[row][col];
            if(mx<a[row][col])mx=a[row][col];
            sum+=a[row][col];
        }
    }
    return sum/n/COLS;
}

//Function that averages an array
//Inputs
//   a -> An array of size >=n
//   n -> The actual size not the maximum size of the array
//Outputs
//   average -> average of the array
float average(const int a[][COLS],int n){
    //Declare a sum
    float sum=0.0f;
    for(int row=0;row<n;row++){
        for(int col=0;col<COLS;col++){
            sum+=a[row][col];
        }
    }
    return sum/n/COLS;;
}

//Function that outputs the entire actual size of the array
//Inputs
//     a -> The random 2 digit array
//     n -> The actual size of the array
//     c -> The number of columns
void prnAray(const int a[][COLS],int n){
    //Declare any variables
    cout<<endl<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<COLS;col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

//Function that fills the array with 2 digit numbers
//Inputs
//   a -> An array of size >=n
//   n -> The actual size not the maximum size of the array
//Outputs
//   a -> as well filled
void filAray(int a[][COLS],int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<COLS;col++){
            a[row][col]=rand()%90+10;
        }
    }
}