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
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);
float retire(float,float,int,float);


//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    float prin=100.0f;//Principal in Dollars
    float intrst=5.0f;//Interest in Per Cent
    int periods=72/intrst+1;//Rule of 72, make sure balance is doubled
    float deposit=5000.0f;//10% of janitor salary
    
    //Process - Calculate the savings
    float sav1=save1(prin,intrst/100,periods);
    float sav2=save2(prin,intrst/100,periods);
    float sav3=save3(prin,intrst/100,periods);
    float sav4=save4(prin,intrst/100,periods);
    float ret =retire(prin,intrst/100,420,deposit);
    
    //Output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Savings with power function = $"<<sav1<<endl;
    cout<<"Savings with loop construct = $"<<sav2<<endl;
    cout<<"Savings with log and exp    = $"<<sav3<<endl;
    cout<<"Savings with recursion      = $"<<sav4<<endl;
    cout<<"Very Long Term Retirement   = $"<<ret<<endl;
    
    //Exit stage right
    return 0;
}

//Retirement function utilizing a for-loop
//Inputs
//     p=principal in $'s
//     i=interest  in decimal
//     n=compounding periods in years
//     d=deposit in dollars per year
//Output
//     float value representing balance in dollars!
float retire(float p,float i,int n,float d){
    for(int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
    return p;
}

//Savings function calling itself i.e. recursion
//Inputs
//     p=principal in $'s
//     i=interest  in decimal
//     n=compounding periods in years
//Output
//     float value representing balance in dollars!
float save4(float p,float i,int n){
    if(n==0)return p;
    return save4(p,i,n-1)*(1+i);
}

//Savings function utilizing log and exponential functions
//Inputs
//     p=principal in $'s
//     i=interest  in decimal
//     n=compounding periods in years
//Output
//     float value representing balance in dollars!
float save3(float p,float i,int n){
    return p*exp(n*log(1+i));
}

//Savings function utilizing a for-loop
//Inputs
//     p=principal in $'s
//     i=interest  in decimal
//     n=compounding periods in years
//Output
//     float value representing balance in dollars!
float save2(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

//Savings function utilizing the power function
//Inputs
//     p=principal in $'s
//     i=interest  in decimal
//     n=compounding periods in years
//Output
//     float value representing balance in dollars!
float save1(float p,float i,int n){
    return p*pow(1+i,n);
}