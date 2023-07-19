#include<iostream>
using namespace std;

struct sterling
{
	int pounds,shilling,penny;
};

int main()
{
	sterling c;
	float decpounds;
    float decfrac,shillingPenny;
    cout<<"Enter new Decimal-Pounds notation: ";
    cin>>decpounds;

    c.pounds = static_cast<int>(decpounds);
    decfrac = decpounds - c.pounds;

    shillingPenny = decfrac*20;
    c.shilling = static_cast<int>(shillingPenny);
    decfrac = shillingPenny - c.shilling;

    c.penny = decfrac*12;

    cout<<c.pounds<<"."<<c.shilling<<"."<<c.penny;
}
