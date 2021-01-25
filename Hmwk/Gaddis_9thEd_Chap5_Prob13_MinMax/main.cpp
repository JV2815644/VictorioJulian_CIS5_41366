/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 2, 2019, 12:36 PM
 * Purpose: Organize Min and Max numbers.
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
    int    sentinel=-99,
            Max,
            Min,
            Num;
    
    //Initialize or input i.e. set variable values
    cin>>Num;
    
    Min=Max=Num;
    //Map inputs -> outputs
    while (Num!=-99) {
        if (Num < Min)
            Min=Num;
        if (Num > Max)
            Max=Num;
        cin>>Num;
    }
        
    //Display the outputs
    cout<<"Smallest number in the series is "<<Min<<endl;
    cout<<"Largest  number in the series is "<<Max;
    //Exit stage right or left!
    return 0;
}