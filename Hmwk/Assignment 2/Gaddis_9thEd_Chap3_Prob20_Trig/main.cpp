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
#include <cmath>                //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float Agle;             //Angle
    
    //Initialize or input i.e. set variable values
    
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>Agle;
     
    //Map inputs -> outputs

    //Display the output
    cout<<fixed;
    cout<<"sin("<<setprecision(0)<<Agle<<") = "<<setprecision(4)<<sin(Agle*(M_PI/180))<<endl;
    cout<<"cos("<<setprecision(0)<<Agle<<") = "<<setprecision(4)<<cos(Agle*(M_PI/180))<<endl;
    cout<<"tan("<<setprecision(0)<<Agle<<") = "<<setprecision(4)<<tan(Agle*(M_PI/180));
    
    //Exit stage right or left!
    return 0;
}
