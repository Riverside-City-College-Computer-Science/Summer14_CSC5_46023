/* Chapter 1 Problem 1
 * File:   main.cpp
 * Author: Daniel Boebinger
 * Created on June 24, 2014, 11:57 AM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Libraries

//Functional Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initiate Variables
    int numOPod, peperpo, totPeas; //Number of Pods, Peas Per Pod, Total Peas
    
    //User Inputs
    //User Input for entering number of pods
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> numOPod;
    //User Input for entering number of peas in a pod
    cout << "Enter the number of peas in a pod:\n";
    cin >> peperpo;
    
    //Calculate the total number of peas
    totPeas = numOPod * peperpo;
    
    //Output the results
    cout << "If you have ";
    cout << numOPod;
    cout << " pea pods\n";
    cout << "and ";
    cout << peperpo;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totPeas;
    cout << " peas in all the pods.\n";
//Exit Stage Right!
    return 0;
}

