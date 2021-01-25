/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 2, 2019, 12:36 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>                 //Input/Output Library
#include <iomanip>                 //Input/Output Format

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVNLTG=0.264179f; 
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float  CLit1,
            CLit2,
            CGal1,
            CGal2,
            Mpg1,
            Mpg2;
           
    int    MlsDrv1,
            MlsDrv2;
    
    char choice;
    
    //Initialize or input i.e. set variable values
    do {
         cout<<"Car 1"<<endl;
         cout<<"Enter number of liters of gasoline:"<<endl;
         cin>>CLit1;
         cout<<"Enter number of miles traveled:"<<endl;
         cout<<MlsDrv1;
         cout<<"miles per gallon: "<<setprecision(2)<<fixed<<Mpg1<<endl;
         cout<<endl;
         Mpg1=MlsDrv1/(CNVNLTG*CLit1);
         cout<<endl;
         
             if (choice == 'Y' || choice == 'y') {
                 cout<<endl;
         }        
    }while (choice == 'Y' || choice == 'y');
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}