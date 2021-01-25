/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Write a program that calculates ocean lvls
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
    float CrrentOceanLvl= 95;           //The current ocean level
    
    float OceanLvl5thYr= 7.5;           //The Ocean level after 5 years
    
    float OceanLvl7thYr= 10.5;         //The ocean level after 7 years
    
    float OceanLvl10thYr= 15;         //The ocean level after 10 years
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"The current ocean level is "                 <<CrrentOceanLvl<< "mm"<<endl;
    cout<<"The ocean level after 5 years is "         <<OceanLvl5thYr<< "mm higher"<<endl;
    cout<<"The ocean level after 7 years is "         <<OceanLvl7thYr<< "mm higher"<<endl;
    cout<<"The ocean level after 10 years is "       <<OceanLvl10thYr<< "mm higher"<< endl;
    
    //Exit the Program - Cleanup
    return 0;
}