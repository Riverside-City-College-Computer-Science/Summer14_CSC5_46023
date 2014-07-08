/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Savitch_8thEd_Chap3_Prob4
 * Created on July 7, 2014, 9:10 PM
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
    
    //Used to see if invalid input (then there will be no cusp statement)
    didWork = 1;
    //See what the sign is and output
    if ((month == 1 && day >= 20)|| (month == 2 && day <= 18))
        cout << "Your horoscope sign is Aquarius! \nYou would be most compatible with a Gemini, Libra, or another Aquarius. "; 
    else if ((month == 2 && day >= 19)|| (month == 3 && day <= 20))
        cout << "Your horoscope sign is Pisces! \nYou would be most compatible with a Cancer, Scorpio, or another Pisces."; 
    else if ((month == 3 && day >= 21)|| (month == 4 && day <= 19))
        cout << "Your horoscope sign is Aries! \nYou would be most compatible with a Leo, Sagittarius, or another Aries.";
    else if ((month == 4 && day >= 20)|| (month == 5 && day <= 20))
        cout << "Your horoscope sign is Taurus! \nYou would be most compatible with a Virgo, Capricorn, or another Taurus.";
    else if ((month == 5 && day >= 21)|| (month == 6 && day <= 21))
        cout << "Your horoscope sign is Gemini! \nYou would be most compatible with a Libra, Aquarius, or another Gemini.";
    else if ((month == 6 && day >= 22)|| (month == 7 && day <= 22))
        cout << "Your horoscope sign is Cancer! \nYou would be most compatible with a Scorpio, Pisces, or another Cancer.";
    else if ((month == 7 && day >= 23)|| (month == 8 && day <= 22))
        cout << "Your horoscope sign is Leo! \nYou would be most compatible with a Sagittarius, Aries, or another Leo.";
    else if ((month == 8 && day >= 23)|| (month == 9 && day <= 22))
        cout << "Your horoscope sign is Virgo! \nYou would be most compatible with a Capricorn, Taurus, or another Virgo.";
    else if ((month == 9 && day >= 23)|| (month == 10 && day <= 22))
        cout << "Your horoscope sign is Libra! \nYou would be most compatible with a Aquarius, Gemini, or another Libra.";
    else if ((month == 10 && day >= 23)|| (month == 11 && day <= 21))
        cout << "Your horoscope sign is Scorpio! \nYou would be most compatible with a Cancer, Pisces, or another Scorpio.";
    else if ((month == 11 && day >= 22)|| (month == 12 && day <= 21))
        cout << "Your horoscope sign is Sagittarius! \nYou would be most compatible with a Leo, Aries, or another Sagittarius.";
    else if ((month == 12 && day >= 22)|| (month == 1 && day <= 19))
        cout << "Your horoscope sign is Capricorn! \nYou would be most compatible with a Virgo, Taurus, or another Capricorn.";
    else 
        didWork = 0,
        cout << "Invalid Birth date input.";    //If invalid data, ask user to input again
    
    //Check to see if on the cusp and output
    if (day >= 18 && day <=25 && didWork == 1)
        cout << "\nYour Birthday is on a cusp!";
    else cout << "";
    
    //See if loop again and output
    cout << "\nWould you like to try again? (Y or N): ";
    cin >> plAgain;
    
    } while (plAgain == 'y'||plAgain == 'Y');
    
    //Output bye
    cout << "\nSee you later!";
    return 0;
}

