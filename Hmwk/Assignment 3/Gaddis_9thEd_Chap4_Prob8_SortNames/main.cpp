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
#include <string>               //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name, name2, name3;
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name;
    cin>>name2;
    cin>>name3;
    
    //Map inputs -> outputs
    if (name>name2 && name2>name3) {
        cout<<name3<<endl;
        cout<<name2<<endl;
        cout<<name;
    }
    else if (name>name3 && name3>name2) {
        cout<<name2<<endl;
        cout<<name3<<endl;
        cout<<name;
    }
    else if (name2>name && name>name3) {
        cout<<name3<<endl;
        cout<<name<<endl;
        cout<<name2;
    }
    else if (name2>name3 &&name3>name) {
        cout<<name<<endl;
        cout<<name3<<endl;
        cout<<name2;
    }
    else if (name3>name2 && name2>name) {
        cout<<name<<endl;
        cout<<name2<<endl;
        cout<<name3;
    }
    else if (name3>name && name>name2) {
        cout<<name2<<endl;
        cout<<name<<endl;
        cout<<name3;
    }
    //Exit stage right or left!
    return 0;
}