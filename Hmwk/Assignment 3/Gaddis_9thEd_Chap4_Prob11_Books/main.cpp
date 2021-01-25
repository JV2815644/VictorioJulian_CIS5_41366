/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int BksPur,PintsEar;
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>BksPur;
            
    //Map inputs -> outputs
    if (BksPur == 0) {
        cout<<"Books purchased =  "<<BksPur<<endl;
        cout<<"Points earned  = 0";
    }
    else if (BksPur == 1) {
        cout<<"Books purchased =  "<<BksPur<<endl;
        cout<<"Points earned   = 5";
    }
    else if (BksPur == 2) {
        cout<<"Books purchased =  "<<BksPur<<endl;
        cout<<"Points earned   = 15";
    }
    else if (BksPur == 3) {
        cout<<"Books purchased =  "<<BksPur<<endl;
        cout<<"Points earned   = 30";
    }
    else if (BksPur >= 4) {
        cout<<"Books purchased =  "<<BksPur<<endl;
        cout<<"Points earned   = 60";
    }
    
 
    //Exit stage right or left!
    return 0;
}