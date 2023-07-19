#include<iostream>
using namespace std;

float circarea(float r)
{
	return 3.1415*r*r;
}

int main()
{
	float r,area;
	cout<<"Enter radius: ";
	cin>>r;
	area = circarea(r);
	cout<<"Area = "<<area;
}
