/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 2, 2019, 12:36 PM
 * Purpose: Make a Pattern
 */

//System Libraries
#include <iostream>                 //Input/Output Library

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int pattern;
    
    //Initialize or input i.e. set variable values
    cin>>pattern;
    
    //Map inputs -> outputs
    for (int i = 1; i <= pattern; i++) {
        for (int c = 1; c <= i; c++) {
            cout<<"+";
        }
        cout<<"\n\n";
    }
    for (int i = pattern; i >= 2; i--) {
        for (int c = 1; c <= i; c++) {
            cout<<"+";
        }
        cout<<"\n\n";
    }
    cout<<"+";
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}