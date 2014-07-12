/* 
 * File:   main.cpp
 * Author: Kevin
 *
 * Created on July 8, 2014, 6:21 PM
 */

//System Level Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

//Global Constants

//Function Prototypes
void toContinue();

//Execution Starts here
int main(int argc, char** argv) {
    
  
    enum{
        ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
        ELEVEN, TWELVE, THIRTEEN, FOURTEEN, FIFTEEN, SIXTEEN, SEVENTEEN
    };
    short choice;
  ////Display a Main Menu
    do{
        do{          
               
            cout<<" [1] Problem 1 - Gaddis Chapter 5                "<<endl;
            cout<<" [2] Problem 2 - Gaddis Chapter 5                "<<endl;
            cout<<" [3] Problem 3 - Gaddis Chapter 5                "<<endl;
            cout<<" [4] Problem 4 - Gaddis Chapter 5                "<<endl;
            cout<<" [5] Problem 5 - Gaddis Chapter 5                "<<endl;
            cout<<" [6] Problem 6 - Gaddis Chapter 5                "<<endl;
            cout<<" [7] Problem 7 - Gaddis Chapter 5                "<<endl;
            cout<<" [8] Problem 8 - Gaddis Chapter 5                "<<endl;    
            cout<<" [9] Problem 10 - Gaddis Chapter 5               "<<endl;    
            cout<<" [10] Problem 12 - Gaddis Chapter 5              "<<endl;    
               
             cout<<" [0] EXIT PROGRAM                               "<<endl;
               
            cout<<" ENTER CHOICE:  ";
            cin>>choice;
            cin.ignore();
        }while(choice<0||choice >10);
     
        switch(choice){
            case ZERO:
                break;
            case ONE:
                cout<<"Problem 1:  "<<endl;
                toContinue();

 {
    //Problem 1 
                    
    //Declare Variable    
    int num,total=0;
    //Do Loop
    //Input Verification
    do{
        cout<<"Please enter a Positive Integer:  ";
        cin>>num;
        cin.ignore();
        //break;
    }while(num<1);
   //Initialize variable
    int i = 0;
    while(i<=num){
        total += i;
        i++;
        cout<<total<<endl;
    }       
    return 0;
}


                break;
            case TWO:
                cout<<" Problem 2:  "<<endl;
               toContinue();

               { 
    //Problem 2
    //For Statement:Initialization of c, test it to =127, add 1 to c
    for(unsigned char c=0;c<=127;c++){
        
        //Output the ascii code
        cout<<c;
        
        //After every 16th line, create a new line
        if(c%16==15)
            cout<<endl;
    
    }
    return 0;
}

                break;
            case THREE:
                cout<<" Problem 3:  "<<endl;
                toContinue();


                {
    //Problem 3
    //Declare Variables
    int yr;
    float lvl;
    
    //Initialize Variables
    yr=1;
    lvl=0;
    
    //While Statement: As long as years is less than 25, keep outputting
    while(yr<=25){
        
        //Calculation: Outputs Ocean Level Rise per year
        lvl+=1.5;              
        
        //Outputs
        cout<<"Year:"<<yr++<<endl;                              //Year & Increment
        cout<<"Ocean Level: "<<lvl<<" millimeters"<<endl;       //Output Millimeters
        
    }
            
    
    
    return 0;
}
                break;
            case FOUR:
                cout<<"  Problem 4:  "<<endl;
                toContinue();

  {
    //Problem 4
    //Declare Variables
    float cal;
    float mins;
    
    //Input 
    //For Loop Starts at 10 and ends at 30, increments by 5
    for (mins=10;mins<=30;mins+=5){     
        //Calculation of calories Burned
         cal=mins*3.9;
        
        //Simple output of text and Result: Minutes
        cout<<fixed<<setprecision(0)<<mins<<" Minutes"<<endl;
        //Simple output of text and result: Calories        
        cout<<"Calories Burned: "<<fixed<<setprecision(2)<<cal<<endl;
    }
       return 0;
}
    
                break;
            case FIVE:
                cout<<"  Problem 5:  "<<endl;
                toContinue();

               {
    //Problem 5
    //Declare Main Variables
    float per=.04;              //Percentage Increase
    float x=2500;
  
    //For Loop which sets Year at O and Membership Costs (x) at $2500
    //Also limits the loop to only show up to 6 Years of projected costs.
    for(short yr=1;yr<=6;yr++){
       
       //Calculations
       x+=(per*x);                 //Outputs Membership costs
      
       //Ouputs Simple Text of the Year(yr)and the projected cost(x)
       cout<<"Projected rates of Membership ";
       cout<<"for Year: "<<fixed<<setprecision(0)<<yr<<endl;
       cout<<"Cost: $"<<fixed<<setprecision(2)<<x<<endl;
             
}
    return 0;
}
                break;
            case SIX:
                cout<<"  Problem 6:  "<<endl;
                toContinue();

 {  //Problem 6
    //Declare Variables
    short mph;                  //Miles Per Hour
    short dst;                  //Distance
    short hrs;                  //Hours
    
   //Simple Output of Text
   cout<<"What is the speed of the vehicle in mph? "<<endl;
   
   //Input of Miles Per Hour
   cin>>mph;
   
   //Output to request Input of Hours
   cout<<"How many hours has it traveled?  "<<endl;
   
   //Input of Hours
   cin>>hrs;
   
   //Input Validation
   //If Miles per hour input is less than 0 or Hours is less than 1, display error message
    while(mph<0||hrs<1){        
        
        cout<<"Error!"<<endl;;
        cout<<"What is the speed of the vehicle in mph? "<<endl;
        cin>>mph;
        cout<<"How many hours has it traveled?  "<<endl;
        cin>>hrs;
    }
      
    //Output Simple Text
    cout<<"Hours:  "<<" Distance Traveled: "<<endl;
    cout<<"---------------------------------------------"<<endl;
    //For Loop: Use short i and initialize to one,i must be less than or equal to hours
    //Increments i
        for(short i=1;i<=hrs;i++){
    //Calculation to determine Distance: i multiplied by miles per hour equals distance
            dst=i*mph;                      
        
        //Output the Results
        cout<<left<<setw(10)<<i<<dst<<endl;
    }
    return 0;
}
                break;
            case SEVEN:
                cout<<"  Problem 7:  "<<endl;
                toContinue();
 
{   //Problem 7
    //float pnns=.01;
    float dllr=0;
    float days;
    float rslt;
    float total=0;
    float dum;
    
    //Simple output of text requesting input of days
    cout<<"Please enter the amount of days you've worked: "<<endl;
    cin>>days;
    
    //Input Validation: If Input less than 1 Day, error appears
    while(days<1){
        cout<<"Error!"<<endl;
        cout<<"Please enter the amount of full days you've worked: "<<endl;
        cin>>days;
    }
    
    //Simple output of text
    cout<<"Days           "<<"Pennies Per Day: "<<endl;
    cout<<"----------------------------------------------"<<endl;
    
    //For Loop 
    //Use short i and initialize to one,i must be less than or equal to days
    for(short i=1;i<=days;i++){
        
   
   //Calculation in order to distinguish 
   dllr=(pow(2,i))-1;
   
   //Output the results: Outputs days and the penny amounts
    cout<<left<<setw(15)<<i<<dllr<<endl;
    }
   
    //Calculation
    //Total amount of income
    total=dllr/100;
    cout<<fixed<<setprecision(2)<<"$"<<total<<endl;
    
    return 0;
}
                break;
            case EIGHT:
                cout<<"  Problem 8:  "<<endl;
                toContinue();

 {
    //Problem 8                
    //Declare Seed 
    srand(time(0));
    
    //Declare Variables
    float num1, num2,ans1,ans2;
 
    enum{
        ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
        ELEVEN, TWELVE, THIRTEEN, FOURTEEN, FIFTEEN, SIXTEEN, SEVENTEEN
    };
    short choice;
  //Display a Main Menu
    do{
        do{
            
               
               
            cout<<"[1]Addition"<<endl
                <<"[2]Multiplication"<<endl
                <<"[3]Subtraction"<<endl
                <<"[4]Division"<<endl
       
             
                <<"[0] EXIT PROGRAM"<<endl;
                
            cout<<"ENTER CHOICE:  ";
            cin>>choice;
            cin.ignore();
        }while(choice < 0 || choice > 4);
     
        switch(choice){
            case ZERO:
                break;
            case ONE:
                cout<<"  Addition:  "<<endl;
                toContinue();{ 
   
    
    //Initialize variables and calculation
    num1=rand()%90+10;                          //Generates random number
    num2=rand()%90+10;                          //Generates random number
    ans1=num1+num2;                             //Sum of the two random numbers
    
    //Output Simple Text
    cout<<"   "<<num1<<endl;
    cout<<"+  "<<num2<<endl;
    cout<<"_____"<<endl;
    cout<<"     "<<endl;
    
    //Input the User's Answer
    cin>>ans2;
    
    //If Statement to determine if actually correct
    if (ans2==ans1)                                   //Displays Success message
        cout<<"Congrats, You mathed well!";
    else cout<<"No, not even close!";                 //Displays Failure message
    return 0;
                             }
                break;
            case TWO:
                cout<<"   Multiplication:  "<<endl;
               toContinue();
   { 
    //Initialize variables and calculation
    num1=rand()%90+10;                          //Generates random number
    num2=rand()%90+10;                          //Generates random number
    ans1=num1*num2;                             //Sum of the two random numbers
    
    //Output Simple Text
    cout<<"   "<<num1<<endl;
    cout<<"*  "<<num2<<endl;
    cout<<"_____"<<endl;
    cout<<"     "<<endl;
    
    //Input the User's Answer
    cin>>ans2;
    
    //If Statement to determine if actually correct
    if (ans2==ans1)                                   //Displays Success message
        cout<<"Congrats, You mathed well!";
    else cout<<"No, not even close!";                 //Displays Failure message
    return 0;
                            }
                break;
            case THREE:
                cout<<"  Subtraction:  "<<endl;
                toContinue();
   {
    //Initialize variables and calculation
    num1=rand()%90+10;                          //Generates random number
    num2=rand()%90+10;                          //Generates random number
    ans1=num1-num2;                             //Sum of the two random numbers
    
    //Output Simple Text
    cout<<"   "<<num1<<endl;
    cout<<"-  "<<num2<<endl;
    cout<<"_____"<<endl;
    cout<<"     "<<endl;
    
    //Input the User's Answer
    cin>>ans2;
    
    //If Statement to determine if actually correct
    if (ans2==ans1)                                   //Displays Success message
        cout<<"Congrats, You mathed well!";
    else cout<<"No, not even close!";                 //Displays Failure message
    return 0;
                             }
                break;
            case FOUR:
                cout<<" Division  "<<endl;
                toContinue();
                {
    //Initialize variables and calculation
    num1=rand()%90+10;                          //Generates random number
    num2=rand()%90+10;                          //Generates random number
    ans1=num1/num2;                             //Sum of the two random numbers
    
    //Output Simple Text
    cout<<"   "<<num1<<endl;
    cout<<"/  "<<num2<<endl;
    cout<<"_____"<<endl;
    cout<<"     "<<endl;
    
    //Input the User's Answer
    cin>>ans2;
    
    //If Statement to determine if actually correct
    if (ans2==ans1)                                   //Displays Success message
        cout<<"Congrats, You mathed well!";
    else cout<<"No, not even close!";                 //Displays Failure message
    return 0;
                             }
                break;

        }
    }while(choice);
    
    cout<<"||  EXITING PROGRAM..."<<endl;

  //Stay Execution
    return 0;
}

                break;
            case NINE:
                cout<<"  Problem 10:  "<<endl;
                toContinue();

 {
    float yrs;                  //years
    float rfll;                 //Rainfall
    float avg;                  //Average
    float mnth;                 //Month
    float ttlav;                //Total Average
    float ttlrfll;              //Total Rainfall
    float rslt=0;               //Result
   
    //Output simple text requesting for years input
    cout<<"Please input the amount of years: "<<endl;
    
    //Input Years
    cin>>yrs;
    
    //For Statement
    //Input of i
    for(int i=0;i<yrs;i++)
    {
        //rslt=0;
        for (int x=1;x<=12;x++) {
            //Output simple text requesting for the amount of rain input
            cout<<"Please input the amount of rain for month: "<<x<<endl;
            //Input Rainfall
            cin>>rfll;
            //Calculation of Rainfall for Month
            mnth+=1;
            rslt+=rfll;}
        
        ttlrfll+=rslt;
        avg=(ttlrfll/mnth);}
    
    //Output Results through simple text
    cout<<"Months:  "<<mnth<<endl;
    cout<<"Inches of Rainfall: "<<ttlrfll<<endl;
    cout<<"Average Rainfall per Month "<<avg<<endl;

    return 0;
}      
                break;
            case TEN:
                cout<<"  Problem 12:  "<<endl;
                toContinue();

{
    //Problem 12
    //Declare Variable
    float fhnt;                 //Farehneit
    
    //For Statement:
    //Celsuis initialized to 0, only accumulate to 20, increment by 1
    for (float cls = 0; cls <=20; cls++) 
    {
        //Calculation in order to convert Celcius to Farenheit
         fhnt=(1.8*cls)+32; 
         
         //Output of Degrees Celcius and Degrees Farehneit
         cout<<cls<<" Degrees Celcius: "<<endl; 
         cout<<fhnt<<" Degrees Fahrenheit "<<endl;
    }

    return 0;
}             
                break;
                
        }
    }while(choice);
    
    cout<<"||  EXITING PROGRAM..."<<endl;

  //Stay Execution
      //Stay Execution
    return 0;
}
void toContinue(){
    cout<<"  Press ENTER to continue...";
    cin.ignore();
}