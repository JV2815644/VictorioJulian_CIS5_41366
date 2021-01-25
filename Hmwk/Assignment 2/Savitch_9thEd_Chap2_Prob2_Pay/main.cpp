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
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare VariablesPreAalSal;              
    
    float  RetroP,                  //Retro pay
            NAalSal,                //New Annual Salary
            NMonSal,                //New Monthly Salary 
            PyIncre,                //Pay Increase 
            PreAalSal;              //Previous annual Salary              
            
    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary."<<endl;
    cin>>PreAalSal;
    PyIncre=0.076f;
    
    //Map inputs -> outputs
    NAalSal=PreAalSal+(PreAalSal*PyIncre);
    NMonSal=NAalSal/12;
    RetroP=(PyIncre*PreAalSal)/2;
            
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Retroactive pay    = $"<<setw(7)<<RetroP<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<NAalSal<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<NMonSal;
    
    //Exit stage right or left!
    return 0;
}