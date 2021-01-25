/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 2, 2019, 12:36 PM
 * Purpose: FInd the Sum of positive Numbers entered
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
    int N,                        //Number input
        S=0;                        //The sum of numbers inputted
    
    //Initialize or input i.e. set variable values
    cin>>N;
    for (int i = 1; i <= N; i++)
    { 
        S += i;
    }
        
    //Map inputs -> outputs
    
    //Display the outputs
    cout <<"Sum = "<< S << endl;
    
    //Exit stage right or left!
    return 0;
}