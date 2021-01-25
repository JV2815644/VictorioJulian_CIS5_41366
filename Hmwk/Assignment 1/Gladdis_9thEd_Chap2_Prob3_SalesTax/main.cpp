/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Write a program that computes the total sales tax on a $95 purchase with state sales tax and county tax.
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
    float Purch= 95;                                                  //The total purchase amount
    
    float StSaleTax= .04;                                           //The total State Sale Tax
    
    float CtyTax= .02;                                              //The total County Tax
    
    float TtlAmo= Purch*StSaleTax*CtyTax;           //The total amount of sales tax
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"The total sales tax is $" <<TtlAmo<<endl;
    
 
    
    //Exit the Program - Cleanup
    return 0;
}