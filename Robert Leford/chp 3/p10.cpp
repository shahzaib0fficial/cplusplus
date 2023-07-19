#include<iostream>
using namespace std;

int main()
{
	float initial = 3000,finalAmount = 5124.43,temp = finalAmount;
	int year = 0;
	
	while(temp>initial)
	{
		temp = temp - (temp*0.055);
		year++;
	}
	cout<<"Approximatly "<<year<<" Years";
}