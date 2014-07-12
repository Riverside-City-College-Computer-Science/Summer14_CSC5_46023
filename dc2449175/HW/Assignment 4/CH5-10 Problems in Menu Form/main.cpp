/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 11, 2014, 11:08 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //General Menu Format
    bool loop=true;
    do{
        //Display the selection
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 4 to solve problem 3 again"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        char choice;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case '1':{
                            //create variables
                            int num,
                                  total;  //holds the numbers i will create

                            //get the number
                            cout << "Enter a number and see the total sum of its integers" << endl;
                            cin >> num;

                            //creat loop to add one by one
                            for(int i=1; i<=num; i++)
                            {
                                total += i; //adds i to total
                                }
                            //output total
                            cout << " " << endl;
                            cout << "The total is " << total << endl;
                            return 0;
                            break;
                }
                case '2':{
                         //delcare varibles
                        float ocean = 1.5;
                        //show years and height
                        cout << "Year      Height Risen" << endl;
                        cout << "-----------------------" << endl;

                        //use to set everything to 1 decimal place
                        cout << fixed << setprecision(1) << endl;

                        //create for loop to show and display years
                        for(int year=1; year<=25; year++)
                        {
                            //adding ocean to height
                            float height;
                            height += ocean;
                            cout << year << "             " << height << " mm" << endl;
                            } 
                        return 0;
                        break;
                }
                case '3':{
                            //declare variables
                            float cal = 3.9;
                            float totcal = 0;
                            cout << "Minutes    Calories Burned" << endl;
                            cout << "--------------------------" << endl;

                            //set precision
                            cout << fixed << setprecision(1) << endl;

                            //loop 30xs to complete
                            for(int min=1; min <=30; min++)
                            {
                                //add the calories per min
                                totcal += cal;

                                //output when 15/20/25/30
                                if(min==10 || min==15 || min==20 || min==25 || min==30)
                                {
                                    cout << min << "            " << totcal << endl;
                                }
                            }
                            return 0;
                }
                case '4':{
                            //declare vairbales
                            float fee = 2500;
                            float newfee = 0;
                            float rate = .04; //4 percent 

                            //set precision
                            cout << fixed << setprecision(2) << endl;

                            //create table
                            cout << "Year    Fee" << endl;
                            cout << "-------------" << endl;

                            //create loop for new fees
                            for(int year=1; year<=6; year++)
                            {
                                //cal newfee by adding fee to the interest
                                newfee += fee+(fee*rate);
                                cout << year << "     " << newfee << endl;
                                }
                            return 0;
                    
                }
                case 5:{
                    /* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 10, 2014, 1:21 PM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //declare variables
    float distance, speed;
    int hr;
    
    //enter information
    cout << "What is the speed of the vehicle in Mph?" << endl;
    cin >> speed;
    cout << "How many hours has it traveled?" << endl;
    cin >> hr;

    //set up table
    cout << "Hour    Distance Traveled" << endl;

    //for loop for distance traveled
    for( int i=1; i<=hr; i++)
    {
        //new distance adding to old
        distance = speed;
        float newdis;
        newdis += distance;
        cout << i << "         " << newdis << endl;
    }
        
    return 0;
}
}
    case 6:{
                /* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 11, 2014, 4:02 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //declare vairbles
    float cent = .01; //value of a penny
    int days;

    cout << "How many days are you working?" << endl;
    cin >> days;

    if(days<1)cout << "Please enter a number 1 or greater" << endl;
        
    else
    {
        //create table
        cout << "Day #     Pay" << endl;
        cout << "--------------" << endl;
        
        for(int time=1; time<=days; time++)
        {
            //output a penny if user enters a 1
            if(days==1)cout << "1        $0.01" << endl;
            
            else
            {
                //add penny every loop
                float dblcent = 0;
                dblcent += cent; 
            
        }
    }
            

    
    return 0;
}
}
            case 7: {
            /* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 11, 2014, 4:25 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //create for random # gen
    srand(static_cast<unsigned int>(time(0)));

    //decalre variables
    short menu;
    int ans;
    int realans; //real answer to num1 num2
    char choice; // give option to redo
    
    do
    {  
        //inside loop to make random everytime
        int num1 = rand()%100+1; //give them only numbers 1-100
        int num2 = rand()%100+1; 

         //give options for menu
        cout << "Choose what kind of problem you want?" << endl;
        cout << "1 for Addition" << endl;
        cout << "2 for Subtraction" << endl;
        cout << "3 for Multiplication" << endl;
        cout << "4 for Division" << endl;
        cin >> menu;

        //switch for the cases
        switch(menu)
        {
            case 1: realans = num1+num2;
                    cout << num1 << "+" << num2 << endl;
                    cin >> ans; //enter answer
                    if(realans==ans) cout << "Your are correct" << endl;
                    else cout << "Sorry you are wrong" << endl;
                    break;

            case 2: realans = num1-num2;
                    cout << num1 << "-" << num2 << endl;
                    cin >> ans; //enter answer
                    if(realans==ans) cout << "Your are correct" << endl;
                    else cout << "Sorry you are wrong" << endl;
                    break;

            case 3: realans = num1*num2;
                    cout << num1 << "*" << num2 << endl;
                    cin >> ans; //enter answer
                    if(realans==ans) cout << "Your are correct" << endl;
                    else cout << "Sorry you are wrong" << endl;
                    break;

            case 4: realans = num1/num2;
                    cout << num1 << "/" << num2 << endl;
                    cin >> ans; //enter answer
                    if(realans==ans) cout << "Your are correct" << endl;
                    else cout << "Sorry you are wrong" << endl;
                    break;
        }
        cout << "Would you like to go again?" << endl;
        cin >> choice;
      }while(choice == 'Y' || choice == 'y');
    return 0;
}
}   
        case 8:{
        /* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 11, 2014, 4:49 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
 
    //declare variables
    short floors, rooms, taken, free;
    float totfree = 0;
    float tottaken = 0;
    float totrooms = 0;
    cout << "How many floors does the hotel have?" << endl;
    cin >> floors;

    //create loop for floors
    for(int height=1; height<=floors; height++)
    {
        //ask user for rooms in each floor
        cout << "How many rooms does floor #" << height << " have?" << endl;
        cin >> rooms;

        //how many are full
        cout << "How many rooms are occupied?" << endl;
        cin >> taken;
        free = rooms-taken;

        //after getting info store into totals
        totrooms += rooms;
        tottaken += taken;
        totfree += free;
    }

    //create % of occupied
    float empty;
    empty = (tottaken/totrooms)*100;
    
    //output results
    cout << "Total number of rooms: " ;
    cout << totrooms << endl;
    cout << "Total number of rooms taken: ";
    cout << tottaken << endl;
    cout << "Total number of rooms free: ";
    cout << totfree << endl;
    cout << "The hotel is around " << empty << "% occupied" << endl;

    return 0;
}
}
        case 9:{
        /* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 11, 2014, 8:24 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //declare variables
    int years, cntmonth; //years & month counter
    float rainfall, totrain;
   
    //ask how many years
    cout << "How many years are you going to calculate?" << endl;
    cin >> years;
    
    //create loop for years
    for(int time=1; time<=years; time++)
    {
        //create loop for months
        for(int month=1; month<=12; month++)
        {
            //get rain 12 times (every month per year)
            cout << "How many inches of rainfall happen during month #" <<
                    month << " year #" << time << endl;
            cin >> rainfall;
            //add to complete for year
            totrain += rainfall;
            //same thing but for month
            cntmonth++;
        }
    }

    //create avg
    float avgrain = totrain/cntmonth;
    //output results
    cout << "Total numbers of months: " << cntmonth << endl;
    cout << "Total inches of rainfall: " << totrain << endl;
    cout << "Average rainfall: " << avgrain << endl;

    return 0;
}
}
        case 10:{
        /* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on July 11, 2014, 9:04 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //declare variables
    float organ, avginc, days; //organisms/ avg increase per day/ days
    float totorgan; //add the orgranisms
     start:  //goto loop
    //ask for user input
    cout << "What is the starting size of the population?" << endl;
    cin >> organ;
    
    //cant have less than 2
    if(organ < 2) 
    {
        cout << "You cant use a number less than 2" << endl;
        goto start;
    }
    else
    {
        start2:
        cout << "What is the percentage it increase per day?" << endl;
        cin >> avginc;
        
        //useing another goto to check if number is negative
        if(avginc <= 0)
        {
            cout << "Please enter a percentage greater than 0" << endl;
            goto start2;
        }
        else
        {
            //getting days
            cout << "How many days will the organisms multiply?" << endl;
            cin >> days;
        }
        
        //loop to add orgasnism and % of it growing
        for(int time=1; time<=days; time++)
        {
            //add percent of orgamism to placeholder
            totorgan += (organ*(avginc/100))+organ;
            
            //output info
            cout << "Day #" << time << "   Organism Total: "
                 << totorgan << endl;
        }
            
            
    }
    return 0;
}
}


                default:{
                        cout<<"Exit?"<<endl;
                        loop=false;
                        break;
                }
        };
    }while(loop);//Upper do-while
    return 0;
}


