/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap3_Prob3
 * Created on July 7, 2014, 7:20 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    unsigned short month,   //Birthmonth
                   day;     //Day of birth
    char dum,       //Dummy character to be ignored
         plAgain,   //Whether to do it again
         didWork;   //Too be used for the case of invalid input and cusp check
    
    do {
    //Input the date of birth
    cout << "What is your birthday? Enter it as MM:DD or MM/DD: ";
    cin >> month >> dum >> day;
    
    didWork = 1;
    //See what the sign is and output
    if ((month == 1 && day >= 20)|| (month == 2 && day <= 18))
        cout << "Your horoscope sign is Aquarius! "; 
    else if ((month == 2 && day >= 19)|| (month == 3 && day <= 20))
        cout << "Your horoscope sign is Pisces! "; 
    else if ((month == 3 && day >= 21)|| (month == 4 && day <= 19))
        cout << "Your horoscope sign is Aries! ";
    else if ((month == 4 && day >= 20)|| (month == 5 && day <= 20))
        cout << "Your horoscope sign is Taurus! ";
    else if ((month == 5 && day >= 21)|| (month == 6 && day <= 21))
        cout << "Your horoscope sign is Gemini! ";
    else if ((month == 6 && day >= 22)|| (month == 7 && day <= 22))
        cout << "Your horoscope sign is Cancer! ";
    else if ((month == 7 && day >= 23)|| (month == 8 && day <= 22))
        cout << "Your horoscope sign is Leo! ";
    else if ((month == 8 && day >= 23)|| (month == 9 && day <= 22))
        cout << "Your horoscope sign is Virgo! ";
    else if ((month == 9 && day >= 23)|| (month == 10 && day <= 22))
        cout << "Your horoscope sign is Libra! ";
    else if ((month == 10 && day >= 23)|| (month == 11 && day <= 21))
        cout << "Your horoscope sign is Scorpio! ";
    else if ((month == 11 && day >= 22)|| (month == 12 && day <= 21))
        cout << "Your horoscope sign is Sagittarius! ";
    else if ((month == 12 && day >= 22)|| (month == 1 && day <= 19))
        cout << "Your horoscope sign is Capricorn! ";
    else 
        didWork = 0,
        cout << "Invalid Birth date input.";
    
    //Check to see if on the cusp and output
    if (day >= 18 && day <=25 && didWork == 1)
        cout << "\nYour Birthday is on a cusp!";
    else cout << "";
    
    //Loop to repeat process
    cout << "\nWould you like to try again? (Y or N): ";
    cin >> plAgain;
    
    } while (plAgain == 'y'||plAgain == 'Y');
    
    //Output bye
    cout << "\nSee you later!";
    
    //Exit Stage Right
    return 0;
}

