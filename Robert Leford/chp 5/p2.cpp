#include<iostream>
using namespace std;

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
	float n;
	int p;
	cout<<"Enter value: ";
	cin>>n;
	cout<<"Enter power: ";
	cin>>p;
	cout<<power(n,p);
}
