#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int pound,shilling,penny;
    float total;
    cout<<"Enter Pounds: ";
    cin>>pound;
    cout<<"Enter Shillings: ";
    cin>>shilling;
    cout<<"Enter Penny: ";
    cin>>penny;

    penny = (shilling*12)+penny;
    total = pound + (penny/240.0);

    cout<<"Decimal pounds = \x9c"<< setprecision(3)<<total;
}
