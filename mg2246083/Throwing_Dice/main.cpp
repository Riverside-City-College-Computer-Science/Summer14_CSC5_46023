/* 
 * File:   main.cpp
 * Author: Mayra Gandarilla
 * Purpose: Throwing Dice Game Example
 * Created on July 9, 2014, 10:19 AM
 */

// System Level Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

// User Defined Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {

    // Declare Variables
    char sum, die1,die2,largest=6,smallst=6;
    int throws;
    int c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0;
    int c9=0,c10=0,c11=0,c12=0,cE=0;
    int checksum;
    char playAgn;
    
    // Set our random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    // Would you like to repeat program
    do{
    
    //Input the number of throws
    cout<<"How many times do you want to throw the dice?\n";
    cin>>throws;
    
    // Loop the number of times to throw the dice
    for(int roll=1;roll<=throws;roll++){
    
    // Roll the dice and take the sum
    die1=rand()%6+1; // [1, 6]
    die2=rand()%6+1; // [1,6]
    sum=die1+die2;
    // Find the largest and smallest
    if(sum>largest)largest=sum;
    if(sum<smallst)smallst=sum;
    
    //Determine occurrence of each throw
    switch(sum){
        case 2:c2++;break;
        case 3:c3++;break;
        case 4:c4++;break;
        case 5:c5++;break;
        case 6:c6++;break;
        case 7:c7++;break;
        case 8:c8++;break;
        case 9:c9++;break;
        case 10:c10++;break;
        case 11:c11++;break;
        case 12:c12++;break;
        default:cE++;
    }
    
    

}
    // Checksum
    checksum=c2+c3+c4+c5+c6+c7+c8+c9+c10+c11+c12;
    
    // output the results
    cout<<"Largest= "<<static_cast<int>(largest)<<endl;
    cout<<"Smallest = "<<static_cast<int>(smallst)<<endl;
    cout<<"2 occured: "<<c2<<" times."<<endl;
    cout<<"3 occured: "<<c3<<" times."<<endl;
    cout<<"4 occured: "<<c4<<" times."<<endl;
    cout<<"5 occured: "<<c5<<" times."<<endl;
    cout<<"6 occured: "<<c6<<" times."<<endl;
    cout<<"7 occured: "<<c7<<" times."<<endl;
    cout<<"8 occured: "<<c8<<" times."<<endl;
    cout<<"9 occured: "<<c9<<" times."<<endl;
    cout<<"10 occured: "<<c10<<" times."<<endl;
    cout<<"11 occured: "<<c11<<" times."<<endl;
    cout<<"12 occured: "<<c12<<" times."<<endl;
    cout<<"Check sum= "<<checksum<<endl;
    cout<<"Number of errors= "<<cE<<endl;
    cout<<"Number of throws= "<<throws<<endl;
    
    cout<<"Would you like to play again?"<<endl;
    cout<<"Type Y for yes"<<endl;
    cin>>playAgn;
    }while(playAgn=='Y');
    
    // Recording Results
    ofstream output;
    output.open(stats.dat);
    
    //Write to the file
    output<<"Largest= "<<static_cast<int>(largest)<<endl;
    output<<"Smallest = "<<static_cast<int>(smallst)<<endl;
    output<<"2 occured: "<<c2<<" times."<<endl;
    output<<"3 occured: "<<c3<<" times."<<endl;
    output<<"4 occured: "<<c4<<" times."<<endl;
    output<<"5 occured: "<<c5<<" times."<<endl;
    output<<"6 occured: "<<c6<<" times."<<endl;
    output<<"7 occured: "<<c7<<" times."<<endl;
    output<<"8 occured: "<<c8<<" times."<<endl;
    output<<"9 occured: "<<c9<<" times."<<endl;
    output<<"10 occured: "<<c10<<" times."<<endl;
    output<<"11 occured: "<<c11<<" times."<<endl;
    output<<"12 occured: "<<c12<<" times."<<endl;
    output<<"Check sum= "<<checksum<<endl;
    output<<"Number of errors= "<<cE<<endl;
    output<<"Number of throws= "<<throws<<endl;
    
    // Close file
    output.close();
    
    
    
    return 0;
}

