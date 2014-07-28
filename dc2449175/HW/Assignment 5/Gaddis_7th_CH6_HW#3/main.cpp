/* 
 * File:   main.cpp
 * Author: Kenton
 *
 * Created on July 23, 2014, 8:55 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
void findHighest();
int main(int argc, char** argv) {
    
    findHighest();

    return 0;
}

void findHighest()
{
    //declare variables
    float total;
    string division;
    int temptotal = 0;
    string tempdivi;

    //loop for each division
    for(int i=1; i<=4; i++)
    {
        cout << "Which Division is it Northwest,Southeast " << endl;
        cout << "Northeast, Southwest" << endl;
        cin >> division;
        
        cout << "How much did that division make?" << endl;
        cin >> total;
        
        //made temps to hold when next input is bigger than previous
        //if not it skips it
        if(total > temptotal)
        {
           temptotal = total;
           tempdivi = division;
        }
    }
    cout << "The greatest selling division is " << tempdivi << endl;
    cout << "They made $" << temptotal << endl;

}