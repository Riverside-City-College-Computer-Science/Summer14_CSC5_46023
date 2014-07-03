//Dr. Mark E. Lehr
//July 1st, 2014
//Purpose:  Illustrate QT

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const float CNVMYRS=1.0f/12.0f;//Conversion from months to years

//Function Prototypes

//Execution of Code Here!
int main(int argv,char **argc){
    //Declare variables
    //Inputs
    float oldSal;         //Old Salary $'s
    float pIncr;          //Percentage increase in salary
    unsigned short retMns;//Number of Months Pay retroactively
    //Outputs
    float newSal;//New Salary in $'s
    float retPay;//Retroactive pay in $'s
    float mnPay; //New Monthly Paycheck in $'s

    //Input values
    pIncr=7.6e-2f;//7.6 percent
    cout<<"Old Salary in Dollars?"<<endl;
    cin>>oldSal;
    cout<<"Number of Months for Retroactive Pay?"<<endl;
    cin>>retMns;

    //Calculations
    newSal=oldSal*(1+pIncr);
    retPay=oldSal*pIncr*retMns*CNVMYRS;
    mnPay=newSal*CNVMYRS;

    //Output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"New Salary = $"<<newSal<<endl;
    cout<<"Retroactive Pay = $"<<retPay<<endl;
    cout<<"New Paycheck = $"<<mnPay<<endl;

    //Exit Stage Right
    return 0;
}

