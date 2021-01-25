/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 2, 2019, 12:36 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>                 //Input/Output Library
#include <iomanip>                 //Input/Output Format
#include <cmath>                   //Math

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVNLTG=0.264179f;          //Liters to Gallons 
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float  lit,                 //Liters
            gals,              //Gallons
            mpg;             //Miles per Gallon
    
    int    mlsdrv;          //Miles Driven
    
    char choice;           //Choice to repeat program
    
    //Initialize or input i.e. set variable values
    do {
    cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>lit;
    cout<<endl;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>mlsdrv;
    cout<<endl;
    
    mpg=mlsdrv/(CNVNLTG*lit);
    
    //Map inputs -> outputs
    cout<<"miles per gallon:"<<endl;
    cout<<setprecision(2)<<fixed<< mpg<<endl;
    cout<<"Again:"<<endl;
    cin>>choice;
        if (choice =='Y' || choice =='y') {
            cout<<endl;
         }
    }while (choice == 'Y' || choice== 'y') ;
    
    //Exit stage right or left!
    return 0; 
}
