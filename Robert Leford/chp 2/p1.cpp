/*Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
enter a number of gallons, and then displays the equivalent in cubic feet.*/
#include<iostream>
using namespace std;

int main()
{
    int gallons;
    float cubicFoot;
    cout<<"Enter Number of gallons: ";
    cin>>gallons;
    cubicFoot = gallons/7.481;
    cout<<"In cubic foot : "<<cubicFoot;
}
