/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream> 
#include <iomanip>              //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float rate, hours, total;

    cout << "This program calculates the gross paycheck." << endl;
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
    cin >> rate;
    cin >> hours;
    if (hours > 40) {
        total = 40 * rate + (hours - 40) * (rate * 2);
    }
    else {
        total = hours * rate;
    }
    
    cout << "Paycheck = $" << fixed << setprecision(2) << setw(2) << total;
    //Exit stage right or left!
    return 0;
}