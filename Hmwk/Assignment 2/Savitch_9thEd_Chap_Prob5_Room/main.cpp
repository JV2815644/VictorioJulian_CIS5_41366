/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>
#include <iomanip>          //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int MaxRmCap,                   // Max Room Cap
         NumPeo,                       // Number of people
         Remain,                        //Remaining room left
         Reduce;                        //Reduce people
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
        cin>>MaxRmCap, 
        cin>>NumPeo;
            Remain=MaxRmCap-NumPeo;
            Reduce=NumPeo-MaxRmCap;
    
    //Map inputs -> outputs
    if (NumPeo<=MaxRmCap){
        cout<<"Meeting can be held."<<endl; 
        cout<<"Increase number of people by "<<Remain<<" will be allowed without violation.";
    }
    else {cout<<"Meeting cannot be held."<<endl;
            cout<<"Reduce number of people by "<<Reduce<<" to avoid fire violation.";
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}