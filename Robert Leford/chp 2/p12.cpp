#include<iostream>
using namespace std;

int main()
{
    float decpounds;
    int pounds,shilling,penny;
    float decfrac,shillingPenny;
    cout<<"Enter new Decimal-Pounds notation: ";
    cin>>decpounds;

    pounds = static_cast<int>(decpounds);
    decfrac = decpounds - pounds;

    shillingPenny = decfrac*20;
    shilling = static_cast<int>(shillingPenny);
    decfrac = shillingPenny - shilling;

    penny = decfrac*12;

    cout<<pounds<<"."<<shilling<<"."<<penny;
}
