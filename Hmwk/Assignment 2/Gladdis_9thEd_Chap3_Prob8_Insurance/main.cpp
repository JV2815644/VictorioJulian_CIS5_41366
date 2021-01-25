/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream> 
#include <iomanip>      //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float HsCs,  
            C,          //House Cost
            Insure;          //Insurance 
    
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
        cin>>HsCs;
            
    //Map inputs -> outputs
        C=(HsCs/100)*80;               //House cost divided by 100, and multiplied by 80, for 80 percent 
                
    //Display the outputs
    cout<<"You need $"<<Insure<<" of insurance.";
    
    //Exit stage right or left!
    return 0;
}