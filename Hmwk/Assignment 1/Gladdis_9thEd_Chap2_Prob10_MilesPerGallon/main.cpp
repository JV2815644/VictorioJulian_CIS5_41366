/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Write a program that computes the number of miles per gallon.
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float TkSz=15;                  //Max Tank size of Car
    
    float TtalMiles=375;         //Max miles for car
    
    float MPG=TtalMiles/TkSz;   //Miles per Gallon
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"The number of miles a gallon gives a car is " <<MPG<<endl;
 
    //Exit the Program - Cleanup
    return 0;
}