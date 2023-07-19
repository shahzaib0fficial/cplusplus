#include<iostream>
using namespace std;

struct fraction
{
	int numerator,denominator;	
};

int main()
{
	fraction f1,f2,sum;
	char ch;
	
	cout<<"Enter First Fraction: ";
	cin>>f1.numerator>>ch>>f1.denominator;
	cout<<"Enter Second Fraction: ";
	cin>>f2.numerator>>ch>>f2.denominator;
	
	sum.numerator = f1.numerator*f2.denominator + f1.denominator*f2.numerator;
	sum.denominator = f1.denominator*f2.denominator;
	
	cout<<"Sum = "<<sum.numerator<<ch<<sum.denominator;
}
