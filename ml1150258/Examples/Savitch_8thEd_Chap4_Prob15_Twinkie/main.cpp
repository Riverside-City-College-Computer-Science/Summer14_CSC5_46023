/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 10th, 2014, 11:20 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

//User Libraries

//Global Constants
const float CNVPDOL=1/100.0f;

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare variables
    unsigned short cstTwke=350;//350 pennies or $3.50
    unsigned short total=0;//Amount tendered in pennies
    unsigned short change;//Calculate change at the end
    unsigned short nQuarters,nNickels,nDimes;//Number of coins to return
    char vD=10,vN=5,vQ=25,vB=100;//Value of each coin
    const int SIZE=8;
    char dime[SIZE]="dime";
    char nickel[SIZE]="nickel";
    char quarter[SIZE]="quarter";
    char dollar[SIZE]="dollar";
    char coin[SIZE];
    
    //Prompt user for purchase of Twinkie
    cout<<"Twinkie's cost $3.50"<<endl;
    cout<<"Input nickle, dime, quarter, and dollar"<<endl;
    cout<<"until the purchase price is reached"<<endl;
    
    //Loop and Input coins one by one
    do{
        //Prompt user for the coin or bill
        cout<<endl<<endl<<"Input Coin or Bill"<<endl;
        cin>>coin;
        if(!strcmp(coin,dime))total+=vD;
        else if(strcmp(coin,nickel)==0)total+=vN;
        else if(!strcmp(coin,quarter))total+=vQ;
        else if(!strcmp(coin,dollar))total+=vB;
        else{
            cout<<"You gave me something that "
                <<"looks like a coin but isn't!"<<endl;
        }
        //Display the current total
        cout<<fixed<<showpoint<<setprecision(2);
        float display=total*CNVPDOL;//Display in dollars
        cout<<"Total amount tendered so far = $"<<display<<endl;
        
    }while(total<cstTwke);
    
    //Calculate the change and return
    cout<<"Be happy ruining your health! :)"<<endl;
    float display=(total-cstTwke)*CNVPDOL;//Display in dollars
    cout<<"Your change is $"<<display<<endl;
    
    //Calculate the number of quarters/dimes/nickels
    //Gives fewest number of coins
    change=total-cstTwke;
    nQuarters=change/vQ;
    change-=vQ*nQuarters;
    nDimes=change/vD;
    change-=vD*nDimes;
    nNickels=change/vN;
    
    //Output the change in coins
    cout<<nQuarters<<" "<<quarter<<"s"<<endl;
    cout<<nDimes<<" "<<dime<<"s"<<endl;
    cout<<nNickels<<" "<<nickel<<"s"<<endl;
    
    //Exit stage right!
    return 0;
}