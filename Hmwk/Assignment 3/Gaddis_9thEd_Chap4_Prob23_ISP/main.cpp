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
#include <string>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
   //Declare Variables
    string Pack;
    float Hrs,
          PackA = 9.95,
          PackB= 14.95,
          PackC= 19.95;
        
    //Initialize or input i.e. set variable values
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;
    cin >> Pack >> Hrs;
    if (Pack == "A" || Pack == "a"){
        if (Hrs <= 10){
        PackA = PackA; 
          cout << "Bill = $ " << PackA;
        }
        else if (Hrs > 10){
        PackA = PackA + (Hrs - 10) * 2;
          cout << "Bill = $ " << PackA;
        }
    }
    else if (Pack == "B" || Pack == "b"){
        if (Hrs <= 20){
        PackA = PackA; 
          cout << "Bill = $ " << PackB;
        }
        else if (Hrs > 20){
        PackB = PackB + (Hrs - 20);
          cout << "Bill = $ " << PackB;
        }
    }
    else if (Pack == "C" || Pack == "C"){
          cout << "Bill = $ " << PackC;
    }
    //Map inputs -> outputs
    
    //Display the outputs
  
    //Exit stage right or left!
    return 0;
}