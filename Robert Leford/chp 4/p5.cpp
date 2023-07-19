#include<iostream>
using namespace std;

struct date
{
	int month,day,year;
};

int main()
{
	date d;
	char ch;
	cout<<"Enter Date(12/31/2000): ";
	cin>>d.month>>ch>>d.day>>ch>>d.year;
	
	cout<<"Date: "<<d.month<<ch<<d.day<<ch<<d.year;
}
