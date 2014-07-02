/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 *
 * Created on June 26, 2014, 12:44 AM
 */

#include <iostream>
#include <cstdlib>  //For rand()
#include <ctime>

using namespace std;

//Begin execution
int main(int argc, char** argv) {

    
    //Declare and initialize variables
    short u, v, w, x, y, z, ac, atBonus, hit;
    int critNrm, critSnk, dmg, dmgSnk;
    char snk;
    
    //Get the system time
    unsigned seed = time(0);
    
    //Seed the RNG
    srand(seed);
    
    //Calculations
    v = 1 + rand() % 20;
    x = 1 + rand() % 20;
    y = 2 + rand() % 4;
    z = 2 + rand() % 4;
    u = 2 + rand() % 6;
        
    //Inputs
    cout << "What is the AC of the creature you are attacking? ";
    cin >> ac;
    cin.ignore();
    
    cout << "What is your attack bonus? ";
    cin >> atBonus;
    cin.ignore();
    
    cout << "Is this a sneak attack? (y/n) " ;
    cin>>snk;
    cin.ignore();
    
//Calculate damages
    critNrm = y + z;
    critSnk = y + z + u;
    dmg = y;
    dmgSnk = y + u;
    
//Calculate hit
    hit = ac - atBonus;
    
//Successful hit
    if (v >= hit) {
    //Critical
        if (v >= 19) {
            if (x >= hit) {

        //Sneak attack
                if (snk = 'y') {
                    cout << "You deal " << critSnk << " CRITICAL damage!" << endl;
                }
        //Normal attack
                else {
                    cout << "You deal " << critNrm << " CRITICAL damage!" << endl;
                }
            }
        }
    //Non-critical
        if (v < 19) {
        //Sneak attack
            if (snk = 'y') {
                cout << "You deal " << dmgSnk << " damage!" << endl;
            }
        //Normal attack
            else {
                cout << "You deal " << dmg << " damage!" << endl;
            }
        }
    }        
//Missed attack
    else {
        cout << "You missed." << endl;
    }
    
    //Finish him!!
    return 0;
}

