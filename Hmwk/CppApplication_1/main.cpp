/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>
#include <iomanip>              //Input/Output Library
using namespace std;

//User Libraries
//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num,              //number
            tot,                //Total
            ave;              //Average
    
    //Initialize or input i.e. set variable values
         
                    
    //Map inputs -> outputs
    cout<<"Input 5 numbers to average."<<endl;
            cin>> num,
                     tot=num,     
            cin>> num,
                    tot+=num,
            cin>> num,
                     tot+=num,
            cin>> num,
                     tot+=num,
            cin>> num,
                     tot+=num;
    
    //Display the outputs
    cout<<setprecision(1)<<fixed<<showpoint;
    cout<<"The average = "<<tot/5.0;
    
    //Exit stage right or left!
    return 0;
}