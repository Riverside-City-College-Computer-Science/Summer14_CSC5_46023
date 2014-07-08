/* 
 * File:   main.cpp
 * Author: Krishen Wadhwani
 * Purpose: Gaddis_7thEd_Chap3_Prob7
 * Created on July 2, 2014, 10:26 AM
 */

//System Level Libraries
#include <iostream>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes                                                                                                             

int main(int argc, char** argv)
{
 
    //Declare and Initialize Variables
    //Constants and inputted variables
    unsigned char cookBag = 40; //Cookies per bag
    unsigned char srvBag = 10; //Servings per bag
    unsigned short calSrv = 300; //Calories per Serving
    unsigned short numCook; // Number of cookies
    
    //Output 
    unsigned short totCal; //Total calories consumed
    
    //Input cookies ate by user
    cout << "How many cookies did you eat? " << endl;
    cin >> numCook;
    
    //Calculate the calories consumed
    totCal = numCook*calSrv*srvBag/cookBag;
    
    cout << "You have consumed " << totCal << " calories!"<< endl;
    
    if (totCal >= 500)
        cout << " Go work out!";
    
    return 0;
}