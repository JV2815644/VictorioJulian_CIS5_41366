/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Write a program that displays the current level of the ocean in mm, assuming each year it increase 1.5mm. 
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
    float StckPri=35;                                   //The stock price
    
    float BghtShres=750*35;                       //The total bought shares
    
    float Cmison=BghtShres*.02;               //The commission cost
    
    float TtalAmnt= Cmison+BghtShres;   //The TOTAL amount, commission plus bought shares
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"The amount paid for the stock alone is $ " <<BghtShres<<endl;
    cout<<"The amount of the commission is $ " <<Cmison<<endl;
    cout<<"The total amount paid is $ " <<TtalAmnt<<endl;
    
 
    
    //Exit the Program - Cleanup
    return 0;
}