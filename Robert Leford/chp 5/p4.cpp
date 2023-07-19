#include<iostream>
using namespace std;

struct Distance
{
	int feets,inches;
};

int Check(Distance d1,Distance d2)
{
	Distance d3;
	
	if(d1.feets > d2.feets)
	{
		d3.feets = d1.feets;
	}
	else
	{
		d3.feets = d2.feets;
	}
	if(d1.inches > d2.inches)
	{
		d3.inches = d1.inches;
	}
	else
	{
		d3.inches = d2.inches;
	}
	cout<<"Greater Feets: "<<d3.feets<<endl<<"Greater Inches: "<<d3.inches;
}

int main()
{
	Distance d1,d2;
	
	cout<<"Enter First Distace Feet: ";
	cin>>d1.feets;
	cout<<"Enter First Distance Inches: ";
	cin>>d1.inches;
	cout<<"Enter Second Distace Feet: ";
	cin>>d2.feets;
	cout<<"Enter Second Distance Inches: ";
	cin>>d2.inches;
	
	Check(d1,d2);
}
