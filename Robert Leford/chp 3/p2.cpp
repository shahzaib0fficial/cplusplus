#include<iostream>
using namespace std;

int main()
{
    int n;
    float f,c;
    cout<<"Type 1 to convert Fahrenheit to Celsius, \n2 to convert Celsius to Fahrenheit:";
    cin>>n;
    if(n==1)
    {
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>f;
        c = (f - 32)*(5/9.0);
        cout<<"Temperature in Celsius is: "<<c;
    }
    else if(n==2)
    {
        cout<<"Enter temperature in Celsius: ";
        cin>>c;
        f = c * 1.8 + 32;
        cout<<"Temperature in Fahrenheit is: "<<f;
    }
    else
    {
        cout<<"Invalid press";
    }
}
