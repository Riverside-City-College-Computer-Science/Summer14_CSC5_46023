/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *Assignment 3 with Menu
 * 
 */

//System Level Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdlib>
#include <iomanip>

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
               
            cout<<" [1] Problem 1 - Gaddis Chapter 4                "<<endl;
            cout<<" [2] Problem 2 - Gaddis Chapter 4                "<<endl;
            cout<<" [3] Problem 3 - Gaddis Chapter 4                "<<endl;
            cout<<" [4] Problem 4 - Gaddis Chapter 4                "<<endl;
            cout<<" [5] Problem 5 - Gaddis Chapter 4                "<<endl;
            cout<<" [6] Problem 6 - Gaddis Chapter 4                "<<endl;
            cout<<" [7] Problem 7 - Gaddis Chapter 4                "<<endl;
            cout<<" [8] Problem 8 - Gaddis Chapter 4                "<<endl;    
            cout<<" [9] Problem 9 - Gaddis Chapter 4                "<<endl;    
            cout<<" [10] Problem 23 - Gaddis Chapter 4              "<<endl;    
               
             cout<<" [0] EXIT PROGRAM                               "<<endl;
               
            cout<<" ENTER CHOICE:  ";
            cin>>choice;
            cin.ignore();
        }while(choice<0||choice >10);
      //Go to different parts of your program based on that choice!
        switch(choice){
            case ZERO:
                break;
            case ONE:
                cout<<"||  EXECUTING PROGRAM 1:  "<<endl;
                toContinue();
/* 
 * File:   main.cpp
 * Author: Kevin
 * //Program 1
 * Created on July 3, 2014, 1:31 PM
 */
 {
    //Declare Variables
    int num1;                                   //First number input
    int num2;                                   //Second number input
    int rslt;                                   //Result of the Greater number
    //Simple Text Output
    cout<<"Enter two numbers: "<<endl;
    
    //Input First and Second Number Input
    cin>>num1>>num2;
    cin.ignore();
    
    //If/Else Statement
    rslt=num1>num2?num1:num2;
    
    //Outputs the Result with simple text
    cout<<rslt<<" is the greater number"<<endl;
             
    
    return 0;
}
                break;
            case TWO:
                cout<<"||  EXECUTING PROGRAM 2:  "<<endl;
               toContinue();
/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 2, 2014, 4:30 PM
 */
               {
    
    //Declare Variables
    int choice;
    
    //Output Simple text
    cout<<"Please enter an integer between 1-10"<<endl;
    
    //Input variable
    cin>>choice;
    cin.ignore();
    
    //Switch Statement to implement output and convert into Roman Numeral
    switch (choice){
        case 1:cout<<"Roman Numeral I"<<endl;           //Converts 1 to I
                 break;
        case 2:cout<<"Roman Numeral II"<<endl;          //Converts 2 to II
                 break;
        case 3:cout<<"Roman Numeral III"<<endl;         //Converts 3 to III
                 break;
        case 4:cout<<"Roman Numeral IV"<<endl;          //Converts 4 to IV
                 break;
        case 5:cout<<"Roman Numeral V"<<endl;           //Converts 5 to V
                 break;
        case 6:cout<<"Roman Numeral VI"<<endl;          //Converts 6 to VI
                 break;
        case 7:cout<<"Roman Numeral VII"<<endl;         //Converts 7 to VII
                 break;
        case 8:cout<<"Roman Numeral VIII"<<endl;        //Converts 8 to VIII
                 break;
        case 9:cout<<"Roman Numeral IX"<<endl;          //Converts 9 to IX
                 break;
        case 10:cout<<"Roman Numeral X"<<endl;          //Converts 10 to X
                 break;
        //Outputs error message if number is invalid      
        default:cout<<"You did not enter an integer between 1-10."<< endl;
            
    } 
    return 0;
}

                break;
            case THREE:
                cout<<"  EXECUTING PROGRAM 3:  "<<endl;
                toContinue();
                /* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 7, 2014, 10:43 AM
 */
                {
    
    //Declare Variable
    unsigned short day, mnth, yr;
    
    //Asks Users for input
    cout<<"Please enter the day, month (in numeric form) and a two digit year"<<
           endl;
    
    //Input of Variables
    cin>>day>>mnth>>yr;
    cin.ignore();
    
    //Outputs the date that was entered
    cout<<"The Date you entered was "<<day<<"/"<<mnth<<"/"<<yr<<endl;
    
    //If/Else statement to determine if date is magic or not
    if (day*mnth==yr)
        cout<<"The date is magic (the book told me to say this...)";
    
    else cout<<"It's not magic... just a regular day."<<endl;
    
    
    return 0;
}
                break;
            case FOUR:
                cout<<"  EXECUTING PROGRAM 4:  "<<endl;
                toContinue();
/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 7, 2014, 11:23 AM
 */
  {
    //Declare Variables
    short ln1;                //Length of Rectangle 1
    short ln2;                //Length of Rectangle 2
    short w1;                 //Width of Rectangle 1
    short w2;                 //Width of Rectangle 2
    
    //Output simple text and ask for input of Rectangle 1
    cout<<"Please enter the Length and Width of Rectangle One"<<endl;
    
    //Input of Length 1 and Width 1
    cin>>ln1>>w1;
    cin.ignore();
    
    //Output simple text and ask for input of Rectangle 2
    cout<<"Please enter the Length and Width of Rectangle Two"<<endl;
    
    //Input of Length 2 and Width 2
    cin>>ln2>>w2;
    cin.ignore();
    
    //Outputs the Area of both Rectangles
    cout<<"Area of Rectangle 1: "<<fixed<<setprecision(2)<<ln1*w1<<endl;
    cout<<"Area of Rectangle 2: "<<fixed<<setprecision(2)<<ln2*w2<<endl;
   
    //Determines which Rectangle has a greater area 
    if (ln1*w1>ln2*w2)
        cout<<"Rectangle 1 is greater than Rectangle 2";
    else cout<<"Rectangle 2 is greater than Rectangle 1"<<endl;
    
    return 0;
}
                break;
            case FIVE:
                cout<<"  EXECUTING PROGRAM 5:  "<<endl;
                toContinue();
/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 7, 2014, 11:50 AM
 */
                {
    //Declare Variables
   float wght;
   float hght;
   float bmi;
    
    //Output Simple Text and ask for input
    cout<<"Please enter your weight (lbs) and height (in)"<<endl;
    
    //Input of the Variables
    cin>>wght>>hght;
    
    //Calculation of BMI
    bmi=(wght*730)/(hght*hght);
    
    //Outputs BMI to two decimal places
    cout<<"Your BMI: "<<fixed<<setprecision(2)<<bmi<<endl;
   
    //If/Else Statements to determine if underweight, overweight, or optimal
    if(bmi<=1.85e-1)                    //If BMI is less than 18.5 then under
        cout<<"Underweight";            
    if (bmi>=25)                        //If BMI is greater than 25 then over
        cout<<"Overweight";
    else                                //If BMI is in between then optimal
        cout<<"Optimal";
    
    return 0;
}
                break;
            case SIX:
                cout<<"  EXECUTING PROGRAM 6:  "<<endl;
                toContinue();
 /* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 7, 2014, 1:54 PM
 */
 {
    
    float mss;
    float wght;
    
    cout<<"Please Enter the Mass you wish to convert"<<endl;
    
    cin>>mss;
    
    wght=mss*9.8;
    
    cout<<wght<<" newtons"<<endl;
    
    if (wght>10000)
        cout<<"Whoa. This is Heavy- Marty McFly";
    
    if (wght<10)
            cout<<"Go eat more Snicker Bars-Dr. Lehr";
         
    return 0;
}
                break;
            case SEVEN:
                cout<<"  EXECUTING PROGRAM 7:  "<<endl;
                toContinue();
 /* 
 * File:   main.cpp
 * Author: Kevin
 *
 * Created on July 7, 2014, 4:25 PM
 */
 {
    
    //Declare Variables
    float sec;
    
    //Output Simple text and ask for seconds input
    cout<<"Please enter the number of seconds "<<endl;
    
    //Input variable
    cin>>sec;
    
    //If/Else Statements
    if (sec<60)                                              //Displays seconds
        cout<<sec<<" seconds.";                              
    if (sec>=60&&sec<3600)                                   //Displays minutes
        cout<<fixed<<setprecision(2)<<sec/60<<" minutes.";
    if (sec>=3600&&sec<86400)                                //Displays hours 
        cout<<fixed<<setprecision(2)<<sec/3600<<" hours.";
    else if (sec>=86400)                                     //Displays days
        cout<<fixed<<setprecision(2)<<sec/86400<<" days.";
    return 0;
}
                break;
            case EIGHT:
                cout<<"  EXECUTING PROGRAM 8:  "<<endl;
                toContinue();
/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 7, 2014, 4:48 PM
 */
 {
    //Declare variables
    short pns;                                          //Stores Pennies
    short nckls;                                        //Stores Nickels
    short qrtrs;                                        //Stores Quarters
    short dms;                                          //Stores Dimes
    short dllr;                                         //Stores Dollar
    
    //Output Simple Text and Ask for input variables
    cout<<"Welcome to the Money Game!"<<endl;
    cout<<"The objective is to add up to a dollar using Pennies, Nickels, ";
    cout<<"Dimes, and Quarters."<<endl;
    cout<<"Please enter the amount of Pennies: "<<endl;
    cin>>pns;                                           //Input Pennies
    cin.ignore();  
    cout<<"Now Nickels: "<<endl;                        
    cin>>nckls;                                         //Input Nickels
    cin.ignore();
    cout<<"Now Dimes: "<<endl;                          
    cin>>dms;                                           //Input Dimes
    cin.ignore();
    cout<<"Now Quarters: "<<endl;                       
    cin>>qrtrs;                                         //Input Quarters
    cin.ignore();
    
    //Calculation
    dllr=pns+(nckls*5)+(qrtrs*25)+(dms*10);
    
    
    if (dllr==100)                                      //Outputs success
        cout<<"Congrats you won the Game!";
    if (dllr>100)
        cout<<"Too high.";                              //Outputs error too high
    else if (dllr<100)
        cout<<"Too low.";                               //Outputs error too low
    
    return 0;
}
                break;
            case NINE:
                cout<<"  EXECUTING PROGRAM 9:  "<<endl;
                toContinue();
/* 
 * File:   main.cpp
 * Author:Braddley Carey & Kevin Rivas
 *
 * Created on July 7, 2014, 3:36 PM
 */
 {
    //Seed Random Number
    srand(time(0));
    
    //Declare Variables
    int num1, num2,ans1,ans2;
    
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
    
    //Brad and I worked on this together for SI session on 7/7/2014
    return 0;
}                
                break;
            case TEN:
                cout<<"  EXECUTING PROGRAM 10:  "<<endl;
                toContinue();
/* 
 * File:   main.cpp
 * Author: Kevin Rivas SI Session 4
 *
 * Created on July 2, 2014, 3:30 PM
 */
{
    //Declare Variables
    char choice;
    int hours;
    
    //Input
    cout<<"Package [A,B or C]:  "<<endl;
    cin>>choice;
    cout<<"Hours"<<endl;
    cin>>hours;
    
    if(choice=='A'){
        //Declare Variables
        float temp=9.95;
        
        if(hours<=10)
            cout<<"$9.95";
        
        else if(hours>10)
            cout<<fixed<<setprecision(2)<<((hours-10)*2)+temp;
    }
    else if (choice=='B'){
        float temp=14.95;
        
        if(hours<=20)
            cout<<"Your cost is $14.95";
        
        else if (hours>20)
            cout<<fixed<<setprecision(2)<<"$"<<((hours-20)+1)+temp;   
    }
    else{
        cout<<"19.95"<<endl;
    }
    
    return 0;
}              
                break;
                
        }
    }while(choice);
    
    cout<<"||  EXITING PROGRAM..."<<endl;

  //Stay Execution
    return 0;
}
void toContinue(){
    cout<<"  Press ENTER to continue...";
    cin.ignore();
}