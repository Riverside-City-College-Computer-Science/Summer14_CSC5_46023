/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 21, 2014, 12:42 PM
 */

//System Libraries
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

//Global ants

//Function Prototypes
void  filAray(vector<int> &,int);
void  prnAray(const vector<int> &,int,int);
float average(const vector<int> &,int);
int   minimum(const vector<int> &,int);
int   maximum(const vector<int> &,int);
float average(const vector<int> &,int,int&,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare the array and its maximum size
    const int MAXSZ=200;
    vector<int> array(MAXSZ);
    int actSize,nRows,nCols,mxAray,mnAray;
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Prompt for inputs
    cout<<"Size of Array to fill <= 200"<<endl;
    cin>>actSize;
    cout<<"How many rows to display <= Size of the Array?"<<endl;
    cin>>nRows;
    
    //Calculate the number of columns
    nCols=actSize/nRows;
    
    //Fill the Array
    filAray(array,actSize);
    
    //Print the Array
    prnAray(array,actSize,nCols);
    
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
int   minimum(const vector<int> &a,int n){
    int mn=a[0];
    //Loop for the sum and max/min
    for(int i=1;i<n;i++){
        if(mn>a[i])mn=a[i];
    }
    return mn;    
}

//Function that finds the max an array
//Inputs
//   a -> An array of size >=n
//   n -> The actual size not the maximum size of the array
//Outputs
//   mx -> max value of the array
int   maximum(const vector<int> &a,int n){
    int mx=a[0];
    //Loop for the sum and max/min
    for(int i=1;i<n;i++){
        if(mx<a[i])mx=a[i];
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
float average(const vector<int> &a,int n, int &mx, int &mn){
    //Declare a sum and initialize min and max
    float sum=a[0];
    mx=mn=a[0];
    //Loop for the sum and max/min
    for(int i=1;i<n;i++){
        sum+=a[i];
        if(mx<a[i])mx=a[i];
        if(mn>a[i])mn=a[i];
    }
    return sum/n;
}

//Function that averages an array
//Inputs
//   a -> An array of size >=n
//   n -> The actual size not the maximum size of the array
//Outputs
//   average -> average of the array
float average(const vector<int> &a,int n){
    //Declare a sum
    float sum=0.0f;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum/n;
}

//Function that outputs the entire actual size of the array
//Inputs
//     a -> The random 2 digit array
//     n -> The actual size of the array
//     c -> The number of columns
void prnAray(const vector<int> &a,int n,int c){
    //Declare any variables
    cout<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%c==(c-1))cout<<endl;
    }
    cout<<endl<<endl;
}

//Function that fills the array with 2 digit numbers
//Inputs
//   a -> An array of size >=n
//   n -> The actual size not the maximum size of the array
//Outputs
//   a -> as well filled
void filAray(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}