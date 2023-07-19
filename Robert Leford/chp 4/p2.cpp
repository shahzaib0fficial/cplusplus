#include<iostream>
using namespace std;

struct point
{
	int x,y;	
};

int main()
{
	point p1,p2,sum;
	char ch;
	cout<<"Enter coordinates for p1 (x,y): ";
	cin>>p1.x>>ch>>p1.y;
	cout<<"Enter coordinates for p1 (x,y): ";
	cin>>p2.x>>ch>>p2.y;
	
	sum.x = p1.x + p2.x;
	sum.y = p1.y + p2.y;	
	cout<<"Coordinates of p1+p2 are: "<<sum.x<<ch<<sum.y;
}
