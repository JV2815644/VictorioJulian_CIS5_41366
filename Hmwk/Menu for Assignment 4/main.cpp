/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on March 17th, 2020, 11:33 AM
 * Purpose: Menu to be utilized in Homework
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
//Conversion to Radians from Degrees
const float CNVNLTG=0.264179f;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu "<<endl;
    cout<<"Type 1 for Gaddis Sum"<<endl;
    cout<<"Type 2 for Gaddis PayInPennies"<<endl;
    cout<<"Type 3 for Savitch MinMax"<<endl;
    cout<<"Type 4 for Gaddis Rectangle"<<endl;
    cout<<"Type 5 for Gaddis Pattern"<<endl;
    cout<<"Type 6 for Sav Problem 1 Gas"<<endl;
    cin>>choice;
    
    if(choice=='1'){
  
     int N,                        //Number input
         S=0;                        //The sum of numbers inputted
    
    //Initialize or input i.e. set variable values
    cin>>N;
    for (int i = 1; i <= N; i++)
    { 
        S += i;
    }
        
    //Map inputs -> outputs
    
    //Display the outputs
    cout <<"Sum = "<< S;
    
    }
    else if(choice=='2'){
       
     int    PyAm=1,                 //Pay amount of given day
            PyMult=2,               //Pay multiplier 
            TotPen,                  //Total Pennies
            NumDy;                //Number of Days
   
    //Initialize or input i.e. set variable values
    cin>>NumDy;
    
    while (NumDy<1){
        cout<<"Error, can't input integers below 1, input a number above or equal to 1";
        cin>>NumDy;
    }
    //Calculating total 
    for (int i = 0; i < NumDy; i++)
    {   TotPen+=PyAm;
        PyAm=PyAm*PyMult;
    }
    //Display the outputs
    cout<<"Pay = $"<<TotPen/100<<".";
    if ((TotPen%100)<10){
        cout<<"0"<<TotPen%100;
    }
    else if ((TotPen%100)>=10) {
        cout<<TotPen%100;
    }
    
 
    } else if (choice == '3') {
        //Declare Variables
   int    sentinel=-99,
            Max,
            Min,
            Num;
    
    //Initialize or input i.e. set variable values
    cin>>Num;
    
    Min=Max=Num;
    //Map inputs -> outputs
    while (Num!=-99) {
        if (Num < Min)
            Min=Num;
        if (Num > Max)
            Max=Num;
        cin>>Num;
    }
        
    //Display the outputs
    cout<<"Smallest number in the series is "<<Min<<endl;
    cout<<"Largest  number in the series is "<<Max;    }
      
     else if ( choice == '4') {
    //Declare Variables
    int num;
    
    cin>>num;
    //Map inputs -> outputs
    for (int i = 0; i < 4; i++) {
        
        cout<<"XXXXX\n";
       
    }
        
    //Display the outputs
     cout<<"XXXXX";
    //Exit stage right or left!
    } else if ( choice == '5'){
        //Declare Variables
    int pattern;
    
    //Initialize or input i.e. set variable values
    cin>>pattern;
    
    //Map inputs -> outputs
    for (int i = 1; i <= pattern; i++) {
        for (int c = 1; c <= i; c++) {
            cout<<"+";
        }
        cout<<"\n\n";
    }
    for (int i = pattern; i >= 2; i--) {
        for (int c = 1; c <= i; c++) {
            cout<<"+";
        }
        cout<<"\n\n";
    }
    cout<<"+";
    } else if ( choice == '6') {
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
    }
    //Clean Up
    
    //Exit stage right!
    return 0;
}