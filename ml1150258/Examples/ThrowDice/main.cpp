/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr 
 * Created on July 9th, 2014, 10:18 AM
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    char sum,die1,die2,largest=6,smallst=6;
    int throws;
    int c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0;
    int c9=0,c10=0,c11=0,c12=0,cE=0;
    int checksum;
    char playAgn;
    
    //Set our random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Would you like to repeat the program
    do{

        //Input the number of throws
        do{
            cout<<"How many times do you want to throw the dice"<<endl;
            cout<<"Must be positive and no larger than 1x10^9"<<endl;
            cin>>throws;
        }while(!(throws>0&&throws<1e9));

        //Loop the number of times to throw the dice
        for(int roll=1;roll<=throws;roll++){
            //Roll the dice and take the sum
            die1=rand()%6+1;//[1,6]
            die2=rand()%6+1;//[1,6]
            sum=die1+die2;//[2,12]
            //Find the largest and smallest
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
        //Checksum
        checksum=c2+c3+c4+c5+c6+c7+c8+c9+c10+c11+c12;

        //Output the results
        cout<<"largest  = "<<static_cast<int>(largest)<<endl;
        cout<<"smallest = "<<static_cast<int>(smallst)<<endl;
        cout<<"2 occured "<<c2<<" times"<<endl;
        cout<<"3 occured "<<c3<<" times"<<endl;
        cout<<"4 occured "<<c4<<" times"<<endl;
        cout<<"5 occured "<<c5<<" times"<<endl;
        cout<<"6 occured "<<c6<<" times"<<endl;
        cout<<"7 occured "<<c7<<" times"<<endl;
        cout<<"8 occured "<<c8<<" times"<<endl;
        cout<<"9 occured "<<c9<<" times"<<endl;
        cout<<"10 occured "<<c10<<" times"<<endl;
        cout<<"11 occured "<<c11<<" times"<<endl;
        cout<<"12 occured "<<c12<<" times"<<endl;
        cout<<"checksum ="<<checksum<<endl;
        cout<<"number of throws = "<<throws<<endl;
        cout<<"number of errors = "<<cE<<" times"<<endl;

        cout<<"Would you like to play again"<<endl;
        cout<<"Type Y for yes"<<endl;
        cin>>playAgn;
    }while(playAgn=='Y');
    
    //Recording results
    ofstream output;
    output.open("stats.dat");
    
    //Write to the file
    output<<"largest  = "<<static_cast<int>(largest)<<endl;
    output<<"smallest = "<<static_cast<int>(smallst)<<endl;
    output<<"2 occured "<<c2<<" times"<<endl;
    output<<"3 occured "<<c3<<" times"<<endl;
    output<<"4 occured "<<c4<<" times"<<endl;
    output<<"5 occured "<<c5<<" times"<<endl;
    output<<"6 occured "<<c6<<" times"<<endl;
    output<<"7 occured "<<c7<<" times"<<endl;
    output<<"8 occured "<<c8<<" times"<<endl;
    output<<"9 occured "<<c9<<" times"<<endl;
    output<<"10 occured "<<c10<<" times"<<endl;
    output<<"11 occured "<<c11<<" times"<<endl;
    output<<"12 occured "<<c12<<" times"<<endl;
    output<<"checksum ="<<checksum<<endl;
    output<<"number of throws = "<<throws<<endl;
    output<<"number of errors = "<<cE<<" times"<<endl;
    
    //Close the file before exit
    output.close();
    
    //Exit stage right
    return 0;
}