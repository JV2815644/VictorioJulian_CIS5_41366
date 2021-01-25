/* File:   main.cpp
 * Author: julia
 *
 * Created on January 18, 2021, 7:44 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char name [10],
            city [20];
    char myword []="less go";
    
    string example= "Less go to the park";
    
    cout<<"What is your name?"<<endl;
    cin>>name;
    cout<<"What do you live?"<<endl;
    cin>>city;
    cout<<"Hello,"<<name<<endl;
    cout<<"From"<<city<<endl;
    cout<<myword<<endl;
    cout<<example<<endl;
    return 0;
}

