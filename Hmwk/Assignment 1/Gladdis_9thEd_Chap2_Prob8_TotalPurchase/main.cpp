/* 
 * File:   main.cpp
 * Author: Julian Victorio
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Write a program that holds 5 variables, display each item's price, the subtotal of the sale, the amount of sales tax and the total. Assume the sales tax is 7 percent.
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
   
          float Itm1Price=24.95,                                                                                    //Displaying Each ItmPrice
                  Itm2Price=24.95,
                  Itm3Price=6.95,
                  Itm4Price=12.95,
                  Itm5Price=3.95;
    
          float SubTotal=Itm1Price+Itm2Price+Itm3Price+Itm4Price+Itm5Price;          //Displaying Subtotal, which is all ItmPrices combined        
    
          float Tax=SubTotal * 0.07;                                                                             //Displaying Tax, which equals SubTotal*0.07, which is 7 percent
    
          float Total= SubTotal + Tax;                                                                          //Displaying Total, which equals SubTotal and Tax

    
    //Initialize Variables
    
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
          cout<<"Itm1Price= $"   <<   Itm1Price  <<endl;
          cout<<"Itm2Price= $"   <<   Itm2Price  <<endl;
          cout<<"Itm3Price= $"   <<   Itm3Price  <<endl;
          cout<<"Itm4Price= $"   <<   Itm4Price  <<endl;
          cout<<"Itm5Price= $"   <<   Itm5Price  <<endl;
          
          cout<<"SubTotal= $"     <<   SubTotal   <<endl;
          
          cout<<"Tax= $"             <<   Tax           <<endl;
          
          cout<<"The Total = $"   <<  Total          <<endl;
          
    //Exit the Program - Cleanup
    return 0;
}