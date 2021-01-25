/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Write a program that calculates the military budget as a percentage of the federal budget.
 */

//System Libraries
#include <iostream>   //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    float MilBdgt,
            FedBdgt,
            MlPrcnt;
          
    MilBdgt=7.0e11f;
    FedBdgt=4.1e12f;
    
    MlPrcnt= (MilBdgt/FedBdgt) *100;                        //Military percentage is calculated by dividing the military budget by the Federal Budget
    
    
    //Display Inputs/Outputs
    cout<<"The military budget is %" <<MlPrcnt<< " out of the Federal Budget"<< endl;
    
 
    
    //Exit the Program - Cleanup
    return 0;
}