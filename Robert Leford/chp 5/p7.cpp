#include<iostream>
using namespace std;

double power(double n,int p=2)
{
	double sqr=n;
	for(int i=2;i<=p;i++)
	{
		sqr = sqr*n;
	}
	return sqr;
}

int power(char n,int p=2)
{
	char sqr=n;
	for(int i=2;i<=p;i++)
	{
		sqr = sqr*n;
	}
	return sqr;
}

int power(int n,int p=2)
{
	int sqr=n;
	for(int i=2;i<=p;i++)
	{
		sqr = sqr*n;
	}
	return sqr;
}

long power(long n,int p=2)
{
	long sqr=n;
	for(int i=2;i<=p;i++)
	{
		sqr = sqr*n;
	}
	return sqr;
}

float power(float n,int p=2)
{
	float sqr=n;
	for(int i=2;i<=p;i++)
	{
		sqr = sqr*n;
	}
	return sqr;
}

int main()
{
	double n1;
	char n2;
	int n3;
	long n4;
	float n5;
	int p;

	cout<<"Enter double value: ";
	cin>>n1;
	cout<<"Enter  power: ";
	cin>>p;
	cout<<n1<<"^"<<p<<" = "<<power(n1,p);

	cout<<"\nEnter char value: ";
	cin>>n2;
	cout<<"Enter  power: ";
	cin>>p;
	cout<<n2<<"^"<<p<<" = "<<power(n2,p);

	cout<<"\nEnter int value: ";
	cin>>n3;
	cout<<"Enter  power: ";
	cin>>p;
	cout<<n3<<"^"<<p<<" = "<<power(n3,p);

	cout<<"\nEnter long value: ";
	cin>>n4;
	cout<<"Enter  power: ";
	cin>>p;
	cout<<n4<<"^"<<p<<" = "<<power(n4,p);

	cout<<"\nEnter float value: ";
	cin>>n5;
	cout<<"Enter  power: ";
	cin>>p;
	cout<<n5<<"^"<<p<<" = "<<power(n5,p);
}
