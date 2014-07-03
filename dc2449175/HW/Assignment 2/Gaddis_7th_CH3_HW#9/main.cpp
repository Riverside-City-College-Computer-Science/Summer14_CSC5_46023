/* 
 * File:   main.cpp
 * Author: Kenton
 *
 * Created on June 30, 2014, 5:42 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float loan,
          insurance,
          gas,
          oil,
          tires,
          maint;

          //getting all basic info
    cout << "Enter your monthly expensives for: " << endl;
    cout << "Loan payment: " ;
    cin >> loan;
    cout << "Insurance: " ;
    cin >> insurance;
    cout << "Gas: " ;
    cin >> gas;
    cout << "Oil: " ;
    cin >> oil;
    cout << "Tires: " ;
    cin >> tires;
    cout << "Maintanence: " ;
    cin >> maint;
    
    //creating total expesives
    float total = loan+insurance+gas+oil+tires+maint;
    cout << "Your monthyl expensives are: $ " << total << endl;
    cout << "Your annual expensives are: $ " << total*12 << endl;
    
    
    return 0;
}

