#include<iostream>
using namespace std;

int zeroSmaller(int &num1,int &num2)
{
	if(num1<num2)
	{
		num1 = 0;
	}
	else
	{
		num2 = 0;
	}
}

int main()
{
	int num1,num2;
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	zeroSmaller(num1,num2);
	cout<<num1<<endl<<num2;
}
