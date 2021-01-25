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

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu "<<endl;
    cout<<"Type 1 for Gaddis Bank Charges"<<endl;
    cout<<"Type 2 for Gaddis ISP"<<endl;
    cout<<"Type 3 for Savitch SortNames"<<endl;
    cout<<"Type 4 for Gaddis Books"<<endl;
    cin>>choice;
    
    if(choice=='1'){
  
    float  Bal,     //balance
           Check,   //Check
           Total,   //Total
           MFee,    //monthly fee
           Lfee,    // late fee
           NBal,   // new balance after fees
           Month;
    //Initialize or input i.e. set variable values
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cin >> Bal >> Check, Month;

    //Map inputs -> outputs
    if (Check < 20){
    Total = Check * 0.10;
    }
    else if (Check >= 20 && Check <=39){
    Total = Check * 0.08;
    }
    else if (Check >= 40 && Check <= 59){
    Total = Check * 0.06; 
    }
    else if (Check >= 60){
    Total = Check * 0.04;
    }
    if (Bal < 400)
    Lfee = 15;
    NBal = Bal - Total - 10.00 - Lfee;
    Month = Month + 10.00;
    //Display the outputs
    cout<<fixed<<showpoint;
    cout<< setprecision(2);
    cout<< "Balance"<< setw(6) << "$" << setw(9) << Bal << endl;
    cout<< "Check Fee" << setw(4) << "$" << setw(9) << Total << endl;
    cout<< "Monthly Fee $" << setw(9) << Month << endl;
    cout<< "Low Balance $" << setw(9) << Lfee << endl;
    cout<< "New Balance $" << setw(9) << NBal;
   

    }else if(choice=='2'){
       
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
    
 
    } else if (choice == '3') {
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
    }
      
     else if ( choice == '4') {
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
    }
    //Clean Up
    
    //Exit stage right!
    return 0;
}