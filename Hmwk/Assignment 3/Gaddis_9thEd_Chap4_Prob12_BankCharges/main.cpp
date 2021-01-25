/*
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 18, 2021, 10:09 PM
 * Purpose: Bank charges
 */

//System Libraries
#include<iostream>  //Input/Output Library
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float  Bal,     //balance
           Check,   //Check
           Total,   //Total
           MFee,    //monthly fee
           Lfee,    // late fee
           NBal,   // new balance after fees
           Month;
    //Initialize or input i.e. set variable values
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cin >> Bal >> Check, Month;

    //Map inputs -> outputs
    if (Check < 20){
    Total = Check * 0.10;
    }
    else if (Check >= 20 && Check <=39){
    Total = Check * 0.08;
    }
    else if (Check >= 40 && Check <= 59){
    Total = Check * 0.06; 
    }
    else if (Check >= 60){
    Total = Check * 0.04;
    }
    if (Bal < 400)
    Lfee = 15;
    NBal = Bal - Total - 10.00 - Lfee;
    Month = Month + 10.00;
    //Display the outputs
    cout<<fixed<<showpoint;
    cout<< setprecision(2);
    cout<< "Balance"<< setw(6) << "$" << setw(9) << Bal << endl;
    cout<< "Check Fee" << setw(4) << "$" << setw(9) << Total << endl;
    cout<< "Monthly Fee $" << setw(9) << Month << endl;
    cout<< "Low Balance $" << setw(9) << Lfee << endl;
    cout<< "New Balance $" << setw(9) << NBal;
    //Exit stage right or left!
    return 0;
}