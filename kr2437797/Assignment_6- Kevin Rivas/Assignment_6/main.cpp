/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 24, 2014, 10:04 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;
//User Libraries

//Global Constants
const int monk = 3;
const int days = 7;
const int rainmonths = 3;
const int raindays = 30;

//Function Prototypes
void con();
//Input of Rain Levels
void getRain(int[], int);

void getSumAvg(int[], int);

void getMinMax(int[], int);

//For Some Reason it won't work anymore, successfully worked before
void getSalsa(string[]);
//Gets 
void getSales(int[],string[],int);

void getFood(float[], int);

void avgFood(float, int rows);

void leastAmount(float [], int rows);

void greatestAmount(float [], int rows);

void getFood(float twod[][days], int rows);

void avgFood(float twod[][days], int rows);

void minFood(float twod[][days], int rows);

void maxFood(float twod[][days], int rows);

void readFile(char rep[][raindays], int size);

void showMonthlyReport(char rep[][raindays], int size);

void showFinalReport(int rainy, int cloudy, int sunny);

void mostRain(char rep[][raindays], int size);

void input(char[], int);

void checkAnswers(char[], char[], int, int);


//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variable
    //Input integer for choice in order to declare Appropriate value
    int choice;
    
    do{
        do{
                   
            cout<<" [1] Problem 1 - Gaddis Chapter 7                "<<endl;
            cout<<" [2] Problem 2 - Gaddis Chapter 7                "<<endl;
            cout<<" [3] Problem 3 - Gaddis Chapter 7                "<<endl;
            cout<<" [4] Problem 4 - Gaddis Chapter 7                "<<endl;
            cout<<" [5] Problem 6 - Gaddis Chapter 7                "<<endl;
            cout<<" [6] Problem 7 - Gaddis Chapter 7               "<<endl;
            cout<<" [7] Problem 8 - Gaddis Chapter 7                "<<endl;
            cout<<" [8] Problem 9 - Gaddis Chapter 7                "<<endl;    
            cout<<" [9] Problem 10 - Gaddis Chapter 7               "<<endl;    
            cout<<" [10] Problem 12 - Gaddis Chapter 7              "<<endl;    
               
            cout<<" [0] Exit Program                               "<<endl;
               
            cout<<" Enter choice:  ";
            cin>>choice;
            cin.ignore();
        }
    
    while(choice<0||choice >10);
        
        switch(choice){
            
            //Ends program
            case 0:
            {
                break;
            }
            
            //Problem 1
            case 1:
            {   
                //Declare Variables
                int inp=10;     //number of elements in the array
                int num[inp];   //Array to input numbers
                int min;        //minimum value in array
                int min;        //maximum value in array
                
                //Output simple Intro Text
                cout<<"========================================"<<endl;
                cout<<"Largest/Smallest Array Values: Problem 1"<<endl;
                cout<<"========================================"<<endl;
                
                //Ask User for 10 values to input into the Array
                cout<<"Please enter 10 integers: "<<endl;
                cin>>num[1];
                cin>>num[2];
                cin>>num[3];
                cin>>num[4];
                cin>>num[5];
                cin>>num[6];
                cin>>num[7];
                cin>>num[8];
                cin>>num[9];
                cin>>num[10];
                
                //
                min=num[1];
                //For Loop: calculates the minimum value
                for (int i=1;i<=10;i++)
                {
                     if (num[inp]<min)
                     {
                        min=num[i];
                     }
                }
                cout<<"The Minimum value was "<<min<<endl;
                
                max=num[1];
                //For Loop: calculates the maximum value
                for (int i=1;i<=10;i++)
                {
                     if (num[inp]>max)
                     {
                        max=num[i];
                     }
                }
                
                cout<<"The Maximum value was "<<max<<endl;
                
                con();
                cin.ignore();
            }
            
            case 2:
            {
                const int size=12;
                int rain[size];
                int ttl=0,min=0,max=0;
                
                //Output simple Intro Text
                cout<<"========================================"<<endl;
                cout<<"Rainfall Statistics: Problem 2"<<endl;
                cout<<"========================================"<<endl;
                
                //Function: Asks Users for input
                getRain(rain,size);
                con();
                cin.ignore();
                //Function: Calculates and outputs the total and average rainfall
                getSumAvg(rain,size);
                con();
                cin.ignore();
                //Function: Calculates the minimum and maximum then outputs them
                getMinMax(rain,size);
                con();
                cin.ignore();
            }
            case 3:
            {
                
                cout<<"========================================"<<endl;
                cout<<"Chips and Salsa: Problem 3"<<endl;
                cout<<"========================================"<<endl;
                
                
                const int size=5;
                int sales[size];
                string salsa[size];
                int sum=0,min=0,max=0;
                
                
                //Function: Asks for input of Salsa Names
                getSalsa(salsa);
                
                //Function: Asks for the sales and initializes it to salsa
                getSales(sales, salsa, size);
                
                con();
                break;
                
            }
            case 4:
            {
                //Declare Variables
                float food[monk][days];
                
                cout<<"========================================"<<endl;
                cout<<"Monkey Business: Problem 4"<<endl;
                cout<<"========================================"<<endl;
                cout<<fixed<<showpoint<<setprecision(2)<<endl;
                
                cout << "Please enter the amount of food the monkeys eat: "<<endl;
                //Function: User to input the amount of food
                getFood(food, monk);
                //Output the results
                cout << "Results: ";
                //Function: Averages the food eaten
                avgFood(food, monk);
                //Calculates the monkey who ate the most that week
                minFood(food, monk);
                //Calculates the monkey who ate the most that week
                maxFood(food, monk);
                
                con();
                break;
                
            }
            case 5:{
                
                //Output simple Intro Text
                cout<<"========================================"<<endl;
                cout<<"Rain or Shine: Problem 5"<<endl;
                cout<<"========================================"<<endl;
                con();
                
                // declarations.
                char weatherStatistics[rainmonths][raindays];


                //Function: Read from the file.
                readFile(weatherStatistics, rainmonths);

                //Display Report
                showMonthlyReport(weatherStatistics, rainmonths);

                //Function: Display the month with the most rain
                mostRain(weatherStatistics, rainmonths);

                // End program.
                cout << endl;
                
                con();
                break;
            }
            case 6:
            {
                const int sizediv=3;           // Number of divisions
                const int sizeqter=4;           // Number of quarters
                float sales[sizediv][sizeqter]; // Array with 3 rows and 4 columns.
                float totalSales=0;            // To hold the total sales.
                int div, qtr;                     // Loop counters.
 
                cout<<"========================================"<<endl;
                cout<<"Quarterly Sales Statistics: Problem 7"<<endl;
                cout<<"========================================"<<endl;
                con();
                
                cout<<"Please enter the Sales of a Division per Quarter:"<<endl;

                for (div=0;div<sizediv;div++)
                {
                    for (qtr=0;qtr<sizeqter;qtr++)
                    {
                        cout<<"Division "<<(div+1);
                        cout<<", Quarter "<<(qtr+1)<<": $";
                        cin>> sales[div][qtr];
                    }
                    cout<<endl; // Print blank line.
                }
                for (div =0;div<sizediv;div++)
                {
                    for (qtr=0;qtr<sizeqter;qtr++)
                        totalSales+=sales[div][qtr];
                }
                cout<<fixed<<showpoint<<setprecision(2);
                cout<<"The total sales for the company are: $";
                cout<<totalSales<<endl;
            }
            
            case 7:
            {
                cout<<"========================================"<<endl;
                cout<<"Payroll: Problem 8"<<endl;
                cout<<"========================================"<<endl;
                con();
                
                
                //Declare Variables
                //Size of the Arrary
                const int empId = 7; 
                //Employee ID
                int workers[empId] = {5658846, 4520125, 7895122,8777541, 8451277, 
                        1302850,7580489};
                //Parallel Arrays    
                int hours[empId]; 
                float payRate[empId];

                //Simple text to 
                cout<<"Please enter the hours worked by " << empId;
                cout<<" employees and their";
                cout<< "hourly pay rates";
  
                //For Statement which separates hours and pay by employee ID   
                for (int i=0;i<empId;i++)
                {
                        cout << "Please enter the hours worked by employee number "<<(i+1)<<" (ID = "<<workers[i]<<") : ";
                        cin >> hours[i];
                        cout << "Please enter the pay rate for employee number "<< (i+1)<<" (ID = "<<workers[i]<<") : ";
                        cin >> payRate[i];
                //Do while to Input validate
                do
                {
                    cout<<"Please enter the hours worked by employee number "<<(i+1)<<" (ID = "<<workers[i]<<") : ";
                    cin>>hours[i];
                    if(hours[i]<0)
                    {
                        cout<<"Enter in a positive number"<<endl; 
                    }
                }
                        while(hours[i]<0); 
                        //Do-While: Ensure pay rate is valid
                        do
                        {
                            cout<<"Please enter the pay rate for employee number "<<(i+1)<<" (ID = "<<workers[i]<<") : ";
                            cin>>payRate[i];
                            if(payRate[i]<6)
                            {
                                cout<<"The pay rate must be greater than six"<<endl; 
                            }
                        }
                        while(hours[i]<6);
                        cout<<"This is the gross pay for each employee: "<<endl;
                }
                for (int i= 0;i<empId;i++)
                {
                    float grossPay=hours[i]*payRate[i];
                    cout<<"Employee #"<<(i+1);
                    cout<<": earned $"<<grossPay<<endl<<endl;
                }
    
                     
              
            }
            
            case 8:
            {
                const int sizeQ=20;
                const int sizeC=15;
                int crAnsw=0;
                int inAnsw=0;
                char answers[sizeQ] = { 'B', 'D', 'A', 'A', 'C',
                'A', 'B', 'A', 'C', 'D',
                'B', 'C', 'D', 'A', 'D',
                'C', 'C', 'B', 'D', 'A'};
                int replies;
                char stu_answers[sizeQ];
                
                cout<<"========================================"<<endl;
                cout<<"Driver's License Exam: Problem 9"<<endl;
                cout<<"========================================"<<endl;
                con();
                
               

                //Loop for users answers
                for (replies=0;replies<sizeQ;replies++)
                {
                    cout<<"Please enter your answers in Capital Letters: ";
                    cout<<(replies+1)<< ": ";
                    cin>>stu_answers[replies];

                    //Validation of users answers
                    while (stu_answers[replies]!='A'&&stu_answers[replies]!='B'&& stu_answers[replies]!='C'&&stu_answers[replies]!='D')
                    {
                        cout<<"You must enter A, B, C, or D"<<endl;
                        cout<<"Please enter your answers (Hint: Use capital letters): ";
                        cout<<(replies+1)<<": "<<endl;
                        cin>>stu_answers[replies];
                    }
                }
                checkAnswers(answers, stu_answers, sizeQ, sizeC);
                con();
                break;
            }
        }
    }
                        
    while(choice);
    cout<<"Ending program"<<endl;
    con();

    return 0;
}

void con()
{
    cout<<"Press enter to continue..."<<endl;
    cin.ignore();
}
//Asks user for input of Rainfall
void getRain(int rain[],int size)
{
    for(int i=0;i<=size;i++)
    {
        cout<<"Please enter 12 inputs of Rainfall for each Month in Inches";
        cout<<endl;
        cin>>rain[i];
    }
        
}
//Function to calculate the Sum and Average of Rainfall
void getSumAvg(int rain[], int size)
{   
    //Declare variables: Total, Average
    int ttl;
    int avg;
    //For Statement: Calculate the Sum of the Rainfall
    for(int i=0; i<size; i++)
    {
    ttl+=rain[i];
    }
    //Calculation for Average Rainfall
    avg=ttl/size;
    //Output Total and Average with simple text
    cout<<"Total Rainfall: "<<ttl<<" inches"<<endl;
    cout<<"Average Rainfall: "<<avg<<" inches"<<endl;
}
//Function to calculate the Minimum and Maximum
void getMinMax(int rain[],int size)
{
    //Declare variables min and max
    int min;
    int max;
    
    max=rain[0];
    //For statement in order to determine max
    for(int i=1;i<size;i++){
        if (rain[i]>max)
            max=rain[i];
     }
    cout<<"Maximum rain was: "<<max<<" inches"<<endl;
    
    min=rain[0];
    //For Statement in order to determine minimum
    for(int x=1;x<size;x++)
    {
        if (rain[x]<min)
            min=rain[x];
    }
    cout<<"Minimum rain was: "<<min<<" inches"<<endl;             
}
//Function: Inputs the Salsa names (Gaddis asks for this)
void getSalsa(string salsa [])
{   
    salsa[1]="Mild";
    salsa[2]="Medium";
    salsa[3]="Sweet";
    salsa[4]="Spicy";
    salsa[5]="Zesty";
}
//Function: Records sales and adds the sum
void getSales(int sales [], string salsa [], int size)
{
    for (int i= 1; i<=size; i++)
 {      int sum;
        cout<<"Sales for " <<(salsa[i])<< ": ";
        cin>>sales[i];
        sum+=sales[1];
        
        cout<<"Total Sales: $"<<sum<<endl;
}
}
//Asks for input of food
void getFood(float twod[][days], int rows)
{
    for (int numRows=0;numRows<rows;numRows++)
    {
        cout<<"Monkey "<<(numRows+1)<<endl;
	for (int numCols=0;numCols<days;numCols++)
        {
            cout<<" Day "<<(numCols+1)<< ": ";
            cin >> twod[numRows][numCols];
            
	    while (twod[numRows][numCols]<0)
            {
                cout << "ERROR: food cannot be lower than 0: ";
		cin >> twod[numRows][numCols];
            }
        }
        cout << endl;
	}
}
//Calculation of average food eaten
void avgFood(float twod[][days], int rows)
{
    float total=0;
    cout<<"Average food eaten by: "<<monk;
    cout<<" monkeys: ";
    
    for (int numRows=0;numRows<rows;numRows++)
    {
        for (int numCols=0;numCols<days;numCols++)
	total+=twod[numRows][numCols];
    }
    
    cout <<(total/monk)<<" pounds."<<endl;
}
//Calculation on monkey who ate the least
void minFood(float twod[][days], int rows)
{
	for (int numRows = 0; numRows < rows; numRows++)
	{
            float least = twod[0][0];
            int day = 0;	
            for (int numCols=0;numCols<days;numCols++)
            {
                if (twod[numRows][numCols]<least)
                {
                    least = twod[numRows][numCols];
		    day+=(numCols+1);
                }
            }
            cout<<"On day "<<day;
	    cout<<" monkey "<<(numRows+1);
	    cout<<" ate the least amount of food."<<endl;
        }
	cout << endl;	
}

//Function: Calculates the maximum amount of food eaten
void maxFood(float twod[][days], int rows)
{
	for (int numRows=0;numRows<rows;numRows++)
        {
            float greatest = twod[0][0];
	    int day = 0;	
	    for (int numCols=0;numCols<days;numCols++)
		{
                if (twod[numRows][numCols]>greatest)
                {
                    greatest=twod[numRows][numCols];
		    day+=(numCols+1);
                }
            }
            cout <<"On day "<<day;
            cout <<" monkey "<<(numRows+1);
            cout << " ate the greatest amount of food."<<endl;
        }
	cout << endl;	
}
//Function:Reads Data From File
void readFile(char rep[][raindays], int size)
{
	//Function: Reads out of the file (Gaddis Requests to use their file)
	ifstream inputFile("RainorShine.dat");
	if (!inputFile)
	{
		cout << "ERROR: cannot find/read file." << endl;
		
	}
	cout << "Reading file..."<<endl;

	// read data.
	for (int numRow=0;numRow<size;numRow++)
	{
            for (int numCol = 0; (numCol<raindays)&&(inputFile >> rep[numRow][numCol]); numCol++)
           
		cout << "\nWriting Row[" << (numRow);
		cout << "]...\n";
	}
	// close file.
	inputFile.close();
	cout << "Done, closing file...\n" << endl;
}


// Shows a report for each month and their weather 

void showMonthlyReport(char rep[][raindays], int size)
{
    static int totalRainy=0;
    int totalCoudy=0;
    int totalSunny=0;
    int totalinvalid=0;
    
    cout<<"Report: "<<endl;
    cout<<"Rainy, Cloudy, Sunny."<<endl;
    

	for (int numRows=0;numRows<size;numRows++)
	{
		int rainy=0;
		int cloudy=0;
		int sunny=0;
		int invalid=0;

		for (int numCols=0;numCols<raindays;numCols++)
		{
			// check if rainy, cloudy or sunny.
			if (rep[numRows][numCols]=='R')
			{
				rainy++;
				totalRainy++;
			}
			else if ((rep[numRows][numCols]== 'C'))
			{
				cloudy++;
				totalCoudy++;
			}
			else if ((rep[numRows][numCols]=='S'))
			{
				sunny++;
				totalSunny++;
			}
			else
			{
				invalid++;
				cout << "Invalid: Error! Could not read";
				cout << invalid << " is invalid" << endl;
				totalinvalid++;
			}
		}
                
		cout<<"Month "<<(numRows + 1);
		cout<<": Rain ("<<rainy;
		cout<<") - Cloudy ("<<cloudy;
		cout<<") - Sunny ("<<sunny;
		cout<<")" <<endl;
	}

	showFinalReport(totalRainy, totalCoudy, totalSunny);
}

//Displays the data from monthly report
void showFinalReport(int rainy, int cloudy, int sunny)
{
	cout<<"Statistics from total months."<<endl;
	cout<<"Rain (" << rainy;
	cout<<") - Cloudy (" << cloudy;
	cout<<") - Sunny (" << sunny;
	cout<<")" << endl;
}

//Function:Calculates and outputs the month with the most rain
void mostRain(char rep[][raindays], int size)
{
	char months[3][7]={"June", "July", "August"};
	int sub=-1;
	int rainy=0;
	int highest=0;

	for (int nRows = 0; nRows < size; nRows++)
	{
		for (int nCols=0;nCols<raindays; nCols++)
		{			
			// check if rainy.
			if (rep[nRows][nCols]=='R')
			{
				rainy++;
			}
		}
		// check highest.
		if (rainy>highest)
		{
			highest=rainy;
			sub++;
		}
		rainy=0;
	}
	cout << "The month "<< months[sub]<<" had the most rain."<<endl;
}

void checkAnswers(char answers1[], char stu_answers1[], int sizeQ, int sizeC)
{
    
int crAnsw=0;	
int inAnsw=0;
int wrongAnswers[]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int j = 0;

//Check the student's replies against the correct answers
for (int i=0;i<sizeQ;i++)
{
if (answers1[i] == stu_answers1[i])
crAnsw++;
else if (answers1[i]!=stu_answers1[i])
{
inAnsw++;
wrongAnswers[j]=i+1;
j++;
}
}
//Did they pass or fail?
if (crAnsw>= sizeC)
{
cout << " You must have at least 15 correct to pass."<<endl;
cout << " Student passed the exam"<<endl;
}
else
{
cout << "You must have at least 15 correct to pass.";
cout <<"Student failed the exam";
}

//Outputs list of incorrect
cout << "Incorrect number of questions answered: "<<endl;
for (int i=0;i<sizeQ;i++)
{
if (wrongAnswers[i]!= 0)
cout<<"Question # "<<wrongAnswers[i]<<" is incorrect."<<endl;
}

//Display the number of correct and incorrect answers provided by the student.
cout<<"Correct Answers = "<<crAnsw<<endl; 
cout<<"Incorrect Answers = "<<inAnsw<<endl;
}