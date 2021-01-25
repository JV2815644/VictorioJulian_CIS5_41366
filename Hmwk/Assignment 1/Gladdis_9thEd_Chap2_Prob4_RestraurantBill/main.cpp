/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Write a program that calculate a restaurant bill.
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
    float MealCt= 88.67;                        //The total Meal Cost
    
    float Tax= MealCt * .0675;              //The Tax amount with Meal cost added
    
    float Tip= Tax*.20;                         //The tip*tax
    
    float TtalBill= Tip+Tax+MealCt;    //The total bill combined with meal cost, tax, and tip
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"The Meal cost is $"      <<MealCt<<endl;
    cout<<"The Tax amount is $"  <<Tax<<endl;
    cout<<"The Tip amount is $"   <<Tip<<endl;
    cout<<"The Total Bill is $"      <<TtalBill<<endl;
    
 
    
    //Exit the Program - Cleanup
    return 0;
}