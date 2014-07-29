/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 27, 2014, 11:09 AM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

/*
 * 
 */
const int SIZE = 10;
const int SIZE2 = 12;
const int SIZE3 = 5;
const int ROW = 3;
const int COL = 7;
const int SUM = 3;
const int ROW2 = 3;
const int COL2 = 31;
const int DIVI = 6;
const int QUART = 4;

void problem1();
void problem2();
void getNum( int ref[], int SIZE2 );
void totRain( int ref[], int SIZE2 );
void hilow( int ref[], int SIZE2 );
void problem3();
void getInfo(string salsa[], int SIZE3, int jars[], int SIZE32);
void disInfo(string salsa[], int SIZE3, int jars[], int SIZE32);
void high(string salsa[], int SIZE3, int jars[], int SIZE32);
void low(string salsa[], int SIZE3, int jars[], int SIZE32);
void problem4();
void getInfo(int monkey[][COL],int ROW);
void disInfo(int monkey[][COL],int ROW);
void sumFood(int monkey[][COL],int ROW);
void checkFood(int monkey[][COL], int ROW);
void problem5();
void checkSun(char ref[][COL2], int ROW2, string month);
void mostRainy(char ref[][COL2], int ROW2);
void problem7();
void getInfo(string division[], int SIZE, float ref[][QUART], int DIVI);
void disInfo(string division[], int SIZE, float ref[][QUART], int DIVI);
void moneyInfo(string division[], int SIZE, float ref[][QUART], int DIVI);

int main(int argc, char** argv) {

    cout << "This will go through the completed problem" << endl;
    int begin = 1;
    do{
        switch(begin)
        {
            case 1 :   problem1(); break;
            case 2 :   problem2(); break;
            case 3 :   problem3(); break;
            case 4 :   problem4(); break;
            case 5 :   problem5(); break;
            case 6 :   break;
            case 7 :   problem7(); break;
        }
        begin++;
        }while(begin <8);
    return 0;
}

void problem1()
{ 
    //declare variables
    int numbers[SIZE];
    int highest;
    int lowest;

    //loop to get numbers
    for(int i=0; i<SIZE; i++)
    {
        cout << "Enter number " << (i+1) << endl;
        cin >> numbers[i];
    }
    //set high/low = to array 0
    highest = numbers[0];
    lowest = numbers[0];

    //loop again to check. didnt work if i did it while getting the numbers
    for(int i=0; i<SIZE; i++)
    {
        if(highest<numbers[i])highest = numbers[i];
        if(lowest>numbers[i]) lowest = numbers[i];
    }
    
    //output the numbers
    cout << "Highest number is " << highest << endl;;
    cout << "Lowest number is " << lowest << endl;
}

void problem2()
{
    
    //delclare vairables
    int ref[SIZE2];

    //use functions to get numbers add/divi/sum/high/lowest
    getNum(ref,SIZE2);
    totRain(ref,SIZE2);
    hilow(ref,SIZE2);

    
}

void getNum( int ref[], int SIZE2 )
{
    //loops to get numbers
    for(int i=0; i<SIZE2; i++)
    {
        cout << "Enter number " << (i+1) << endl;
        cin >> ref[i];
    }
}

void totRain( int ref[], int SIZE2 )
{
    int sum;
    float avg;

    //loops to add each into sum
    for(int i=0; i<SIZE2; i++)
    {
        sum += ref[i];
    }
    //divide byb 12 for avg
    avg = sum/12;
    cout << "Total Rain is " << sum << endl;
    cout << "Average Rain is " << avg << endl;
}

void hilow( int ref[], int SIZE2 )
{
    //set them to first number
    int high = ref[0];
    int low = ref[0];

    //replace whenever high or low is beaten
    for(int i=0; i<SIZE2; i++)
    {
        if(high<ref[i]) high=ref[i];
        if(low>ref[i]) low=ref[i];
    }
    cout << "Highest Rain is " << high << endl;
    cout << "Lowest Rain is " << low << endl;    
}

void problem3()
{
    //declare variables
    string salsa[SIZE3];
    int jars[SIZE3];

    //add info to 2 arrays
    getInfo(salsa,SIZE3,jars,SIZE3);
    disInfo(salsa,SIZE3,jars,SIZE3);
    high(salsa,SIZE3,jars,SIZE3);
    low(salsa,SIZE3,jars,SIZE3);


}

void getInfo(string salsa[], int SIZE3, int jars[], int SIZE32)
{
    //loop for jars and type
    for(int i=0; i<SIZE3; i++)
    {
        //enter the info
        cout << "Enter the name of the salsa" << endl;
        cout << "Mild,Medium,Sweet,Hot,Zesty" << endl;
        cin >> salsa[i];

        cout << "Enter how many jars sold" << endl;
        cin >> jars[i];
        cout << " " << endl;
    }
}

void disInfo(string salsa[], int SIZE3, int jars[], int SIZE32)
{
    for(int i=0; i<SIZE3; i++)
    {
        cout << "Salsa       Amount Sold" << endl;
        cout << salsa[i] << "             " << jars[i] << endl;
    }
}

void high(string salsa[], int SIZE3, int jars[], int SIZE32)
{
    int high;
    high = jars[0];
    string name1;
    
    for(int i=0; i<SIZE3; i++)
    {
        if(high<jars[i]) high = jars[i]; name1 = salsa[i];
    }
    cout << " " << endl;
    cout << "Highest Item     Amount Sold" << endl;
    cout << name1 << "             " << high << endl;
    
}

void low(string salsa[], int SIZE3, int jars[], int SIZE32)
{
    int low;
    low = jars[0]; 
    string name2;

    for(int i=0; i<SIZE3; i++)
    {
        //figure out how to get names
        if(low>jars[i]) low = jars[i]; name2 = salsa[i];
    }
    cout << "Lowest Item      Amount Sold" << endl;
    cout << name2 << "             " << low << endl;
}

void problem4()
 {
    
    int array[ROW][COL] ;

    getInfo(array,ROW);
    disInfo(array,ROW);
    sumFood(array,ROW);
    checkFood(array,ROW);

}

void getInfo(int monkey[][COL], int ROW)
{
    //loop 7 times for days
    for(int i=0; i<ROW; i++)
    {
        cout << "How much did monkey " << (i+1) << " eat?" << endl;
        //loop 3 for each monkey
        for(int x=0; x<COL; x++)
        {
            cout << "Day " << (x+1) << endl;
            cin >> monkey[i][x];
        }
    }
}

void disInfo(int monkey[][COL],int ROW)
{
    //so i can see if numbers entered correctly
    for(int i=0; i<ROW; i++)
    {
        for(int x=0; x<COL; x++)
        {
            cout << "Array " << "[" << i << "]"
                 << "[" << x << "]" << monkey[i][x] << endl;
        }
    }
}

void sumFood(int monkey[][COL],int ROW)
{
    int sum = 0;
    int avg = 0;
    
    //add to get sum for array
    for(int i=0; i<ROW; i++)
    {
        for(int x=0; x<COL; x++)
        {
            sum += monkey[i][x];
        }
    }

    avg = sum/7;
    cout << "Sum of all the food eaten is " << sum << endl;
    cout << "Average food eaten per day " << avg << endl;
}

void checkFood(int monkey[][COL], int ROW)
{
    int low = 0;
    int high = 0;
    int size = 3;
    //sum array to add each individual part of whole array
    int sum[SUM];

    //created to add to sum array
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;

    //so i can check for high/low
    high = monkey[0][0];
    low = monkey[0][0];

    //monkey 1
    for(int i=0; i<COL; i++)
    {
        sum1 += monkey[0][i];
        sum[0] = sum1;
    }
    //monkey 2
    for(int i=0; i<COL; i++)
    {
        sum2 += monkey[1][i];
        sum[1] = sum2;
    }
    //monkey 3
    for(int i=0; i<COL; i++)
    {
        sum3 += monkey[2][i];
        sum[2] = sum3;
    }

    //check for high/low
    for(int i=0; i<ROW; i++)
    {
        for(int x=0; x<COL; x++)
        {            
            if(high < monkey[i][x]) high = monkey[i][x];
            if(low > monkey[i][x])  low = monkey[i][x];
        }
    }
        
    cout << "Monkey 1 ate " << sum[0] << " bananas" << endl;
    cout << "Monkey 2 ate " << sum[1] << " bananas" << endl;
    cout << "Monkey 3 ate " << sum[2] << " bananas" << endl;
    
    cout << "Most amount eaten in a day " << high << endl;
    cout << "Least amount eaten in a day " << low << endl;
}

void problem5()
 {
    
    //declare variables
    ifstream inFile;
    char array[ROW2][COL2];
    string June = "June";
    string July = "July";
    string August = "August";

    //open the file
    inFile.open("RainorShine.txt");
   
    //read from file
    for(int r=0; r<ROW2; r++)
    {
        for(int c=0; c<COL2; c++)
        {
            inFile >> array[r][c];
        }
    }

    //close file
    inFile.close();

    //output one at a time
    cout << "June  : ";
    //loop for month june outputs
    for(int c=1; c<COL2; c++)
    {
        //check on first ROW2
        cout << array[0][c] << " ";
    }
    cout << " " << endl;

    //july
    cout << "July  : ";
    for(int c=1; c<COL2; c++)
    {
        cout << array[1][c] << " ";
    }
    cout << " " << endl;

    //august
    cout << "August: ";
    for(int c=1; c<COL2; c++)
    {
        cout << array[2][c] << " ";
    }
    cout << " " << endl;

    //use functions
    checkSun(array,0,June);
    checkSun(array,1,July);
    checkSun(array,2,August);
    mostRainy(array,ROW2);
 
}

void checkSun(char ref[][COL2], int ROW2, string month)
{
    //weather counter
    int sunny = 0; 
    int rainy = 0;
    int cloudy = 0;

    //adds one for each day that appears
    for(int c=0; c<COL2; c++)
    {
        if(ref[ROW2][c] == 'C' ) cloudy += 1;
        if(ref[ROW2][c] == 'R' ) rainy += 1;    
        if(ref[ROW2][c] == 'S' ) sunny += 1;
    }
  
    //display results
    cout << " " << endl;
    cout << month << endl;
    cout << cloudy << " days cloudy" << endl;
    cout << rainy << " days rainy" << endl;
    cout << sunny << " days sunny" << endl;
    cout << " " << endl;
}

void mostRainy(char ref[][COL2], int ROW2)
{
    //declare variables
    int SIZE = 3;
    int month[SIZE];
    int sum1, sum2, sum3;
    int temp = month[0];
    
    //month of june
    for(int i=0; i<COL2; i++)
    {
        sum1 += ref[0][i];
        month[0] = sum1;
    }
    //month of july
    for(int i=0; i<COL2; i++)
    {
        sum2 += ref[0][i];
        month[1] = sum2;
    }
    //month of august
    for(int i=0; i<COL2; i++)
    {
        sum3 += ref[0][i];
        month[2] = sum3;
    }

    //compare to check highest
    for(int i=0; i<3; i++)
    {
        if(temp<month[0]) temp = month[i];
    }

    //check if equal and display appropiate results
    if(temp == month[0]) cout << "June has the highest amount of rainy days" << endl;
    if(temp == month[1]) cout << "July has the highest amount of rainy days" << endl;
    if(temp == month[2]) cout << "August has the highest amount of rainy days" << endl;
}

void problem7()
{
    
    string division[DIVI];
    float sales[DIVI][QUART];

    getInfo(division, DIVI, sales ,DIVI);
    disInfo(division, DIVI, sales, DIVI);
    moneyInfo(division, DIVI, sales, DIVI);

}

//gather input from user
void getInfo(string division[], int SIZE, float ref[][QUART], int DIVI)
{
    //seperate array to get name
    for(int divi=0; divi<DIVI; divi++)
    {
        cout << "Please enter the name of division " << (divi+1) << endl;
        cin >> division[divi];
        //loop to get number for each division
        for(int quart=0; quart<QUART; quart++)
        {
            cout << "Enter the sales total for quarter " << (quart+1) << endl;
            cin >> ref[divi][quart];
        }
    }
}
//output display
void disInfo(string division[], int SIZE, float ref[][QUART], int DIVI)
{
    for(int divi=0; divi<DIVI; divi++)
    {
        //output company to display name before the amount
        cout << division[divi] << ":";
        //loop for output
        for(int quart=0; quart<QUART; quart++)
        {
            cout << ref[divi][quart] << " ";
        }
        //finish the line to start next division
        cout << " " << endl;
    }
}

//recording gain/loss
void moneyInfo(string division[], int SIZE, float ref[][QUART], int DIVI)
{
    float quart[DIVI][QUART];
    //used to compare month to previous
    float compare[QUART];
    
    for(int divi=0; divi<DIVI; divi++)
    {
        cout << "Division: " << divi << endl;
        //hold quarter revenue to compare           
        compare[0] = ref[divi][0];
        compare[1] = ref[divi][1];
        compare[2] = ref[divi][2];
        compare[3] = ref[divi][3];
        
        for(int month=0; month<QUART; month++)
        {
            //compare
            //stop before month turns 5
            if(month+1 == 5) cout << "Done" << endl;
            if(compare[month] < compare[month+1]) cout << "Profit Quarter!" << endl;
            if(compare[month] > compare[month+1]) cout << "Loss Quater!" << endl;
            if(compare[month] == compare[month+1]) cout << "No gain Quarter!" << endl;
        }
    }
}