//Mark E. Lehr
//July 14th, 2014
//Menu to be used for the midterm
//homework and midterm, etc....

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1: problem1();break;
            case 2: problem2();break;
            case 3: problem3();break;
            case 4: problem4();break;
            case 5: problem5();break;
            case 6: problem6();break;
            default:;
        };
    }while(inN<7);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
        int inN;
        cin>>inN;
        return inN;
}

//Solution to problem 1
void problem1(){
    cout<<"Solve for PI using infinite sequence"<<endl<<endl;
    //Display exact values of PI
    cout<<"Pi = "<<fixed<<setprecision(15)<<atan(1)*4<<endl<<endl;
    //Declare variables
    double approxPI=0;
    //Ask how man terms in the sequence
    int terms;
    cout<<"How many terms to approximate PI"<<endl;
    cout<<"Sequence = 4*(1/1-1/3+1/5-1/7+1/9-1/11+........)"<<endl;
    cin>>terms;
    //Calculate using the infinite sequence
    char sign=-1;
    for(int i=1;i<=terms;i+=2){
        sign*=-1;
        approxPI+=1.0/i*sign;
    }
    approxPI*=4;
    //Output the approx ans
    cout<<"The approximate value of PI = "<<approxPI<<endl<<endl;
}

//Solution to problem 2
void problem2(){
    cout<<"Random Integration to find PI again"<<endl<<endl;
    //Display exact values of PI
    cout<<"Pi = "<<fixed<<setprecision(15)<<atan(1)*4<<endl<<endl;
    //Declare variables
    int nDarts,inCircle=0,maxRandom=pow(2,31);
    float approxPI=0;
    //Ask question as to number of darts
    cout<<"During the dart game, How many darts do you want to throw"<<endl;
    cin>>nDarts;
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Start playing the game
    for(int throwDart=1;throwDart<=nDarts;throwDart++){
        float x=1.0f*rand()/maxRandom;
        float y=1.0f*rand()/maxRandom;
        if((x*x+y*y)<=1)inCircle++;
    }
    //Calculate the approx value of PI
    approxPI=4.0f*inCircle/nDarts;
    //Output the result
    cout<<"The Approximate value of PI = "<<approxPI<<endl<<endl;
}

//Solution to problem 3
void problem3(){
    cout<<"In problem # 3"<<endl<<endl;
}

//Solution to problem 4
void problem4(){
    cout<<"In problem # 4"<<endl<<endl;
}

//Solution to problem 5
void problem5(){
    cout<<"In problem # 5"<<endl<<endl;
}

//Solution to problem 6
void problem6(){
    cout<<"In problem # 6"<<endl<<endl;
}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}