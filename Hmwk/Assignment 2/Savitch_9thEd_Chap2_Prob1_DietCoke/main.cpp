/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib> 
#include <ctime>         //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVENGM=453.592;  //Lbs to Grams
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    
    //Declare Variables
    int MssM,
        MssKm,
        LthlDos,
        MssSoda,
        NumCans;
    float MssDtr,
          PerSwet,
          MssSwet,
          MssKdtr;
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption"<<endl;
    cout<<"Input the desired dieters weight in lbs"<<endl;
    cin>>MssDtr;
    MssDtr=MssDtr*CNVENGM;
    MssM=35;
    MssKm=5;
    MssSoda=350;
    PerSwet=0.001f;
    
    //Map inputs -> outputs
    LthlDos=MssM/MssKm;
    MssSwet=MssSoda*PerSwet;
    MssKdtr=MssDtr/LthlDos;
    MssKdtr=MssKdtr/0.001f;
    NumCans=MssKdtr/MssSoda;
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<NumCans<<" cans"<<endl;
    
    //Exit stage right or left!
    return 0;
}