/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 10:49 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Function Prototypes
//Asks User to press enter to continue
void con();
//Function to calculate mark-up
//Gaddis required to name variable calculateRetail
float calculateRetail(float,float);
//Asks for quarterly sales, 
void getSales(float &sales1, float &sales2, float &sales3, float &sales4);

void maxSales(float n1,float n2,float n3,float n4);


//Global Constants

//Execution starts here!
int main(int argc, char** argv) {
    
    int choice;
 
   do{
       
   
    do{               
            cout<<" [1] Problem 1 - Gaddis Chapter 6                "<<endl;
            cout<<" [2] Problem 3 - Gaddis Chapter 6                "<<endl;
            cout<<" [3] Problem 3 - Gaddis Chapter 6                "<<endl;
            cout<<" [4] Problem 4 - Gaddis Chapter 6                "<<endl;
            cout<<" [5] Problem 5 - Gaddis Chapter 6                "<<endl;
            cout<<" [6] Problem 6 - Gaddis Chapter 6                "<<endl;
            cout<<" [7] Problem 7 - Gaddis Chapter 6                "<<endl;
            cout<<" [8] Problem 8 - Gaddis Chapter 6                "<<endl;    
            cout<<" [9] Problem 10 - Gaddis Chapter 6               "<<endl;    
            cout<<" [10] Problem 12 - Gaddis Chapter 6              "<<endl;    
               
            cout<<" [0] Exit Program                               "<<endl;
               
            cout<<" Enter choice:  ";
            cin>>choice;
            cin.ignore();
        }
    
    while(choice<0||choice >10);
        
        switch(choice){
            case 0:
                break;
            case 1:
                cout<<"Problem 1"<<endl;
                con();
                
                    
                    //Declare variables
                    float whlcst;
                    float mrkper;
                    
                    cout<<"Welcome to the Calculation Retail Problem: "<<endl;
                    cout<<"Please Enter the wholesale cost: "<<endl;
                    cin>>whlcst;
                    cin.ignore();
                    cout<<"Now enter the markup percentage: ";
                    cin>>mrkper;
                    cin.ignore();
                    
                    while(whlcst<0||mrkper<0)
                    {
                      cout<<"Invalid Answer: Please enter positive numbers."<<endl;
                      cout<<"Please Enter the wholesale cost: "<<endl;
                      cin>>whlcst;
                      cin.ignore();
                      cout<<"Now enter the markup percentage: ";
                      cin>>mrkper;
                      cin.ignore();
                    }
                    
                    mrkper/=100;
                    
                    cout<<"The Retail Price is: "<<endl;
                    cout<<"$"<<fixed<<setprecision(2);
                    cout<<calculateRetail(whlcst, mrkper)<<endl;
                    con();
                    break;
                   
                    
            case 2:

                cout<<"Problem 3"<<endl;
                con();
                
                string div1="Northeast",div2="SouthEast",div3="Northwest",div4="Southwest";
                float sales1,sales2,sales3,sales4;
                float max, maxdiv;
                
                
                cout<<"Welcome to the Winning Division Program"<<endl;
                cout<<"The Divisions which are competing are:"<<endl;
                cout<<div1<<", "<<div2<<", "<<div3<<", "<<div4<<"."<<endl;
                getSales(sales1, sales2, sales3, sales4);
                
                    
           
                    
                  
        }
    }
    
   while(choice);
    cout<<"Ending program"<<endl;

    return 0;
}

void con(){
    cout<<"Press Enter to continue...";
    cin.ignore();
}
float calculateRetail(float whlcst, float mrkper){
    return whlcst*mrkper+whlcst;
}
void getSales(float &sales1, float &sales2, float &sales3, float &sales4){
    do{
        cout<<"Please enter the a positive number for float"<<endl;
        cin>>sales1>>sales2>>sales3>>sales4;
        cin.ignore();
    }while(sales1<0||sales2<0||sales3<0||sales4<0);
    
       
}
  void maxSales(float n1,float n2,float n3,float n4){
    float max=n1;
    if(n2>max)max=n2;
    if(n3>max)max=n3;
    if(n4>max)max=n4;
    return max;   
} 