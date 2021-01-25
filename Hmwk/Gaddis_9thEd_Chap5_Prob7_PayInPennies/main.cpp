/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 2, 2019, 12:36 PM
 * Purpose: Calculate a salary of pennies
 */

//System Libraries
#include <iostream>                 //Input/Output Library
#include <iomanip>                 //Input/Output Format

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int     PyAm=1,                 //Pay amount of given day
            PyMult=2,               //Pay multiplier 
            TotPen,                  //Total Pennies
            NumDy;                //Number of Days
   
    //Initialize or input i.e. set variable values
    cin>>NumDy;
    
    while (NumDy<1){
        cout<<"Error, can't input integers below 1, input a number above or equal to 1";
        cin>>NumDy;
    }
    //Calculating total 
    for (int i = 0; i < NumDy; i++)
    {   TotPen+=PyAm;
        PyAm=PyAm*PyMult;
    }
    //Display the outputs
    cout<<"Pay = $"<<TotPen/100<<".";
    if ((TotPen%100)<10){
        cout<<"0"<<TotPen%100;
    }
    else if ((TotPen%100)>=10) {
        cout<<TotPen%100;
    }
    
    //Exit stage right or left!
    return 0;
}