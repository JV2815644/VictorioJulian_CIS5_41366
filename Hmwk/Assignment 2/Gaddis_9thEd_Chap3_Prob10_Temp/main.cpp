/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream> 
#include <iomanip>         //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float F,
            C;
    
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>F;
    
    //Map inputs -> outputs
    C=((F-32.0)*5.0/9.0);
    
    //Display the outputs
    cout<<setprecision(1)<<fixed;
    cout<<F<<" Degrees Fahrenheit = "<<C<< " Degrees Centigrade";
    
    //Exit stage right or left!
    return 0;
}