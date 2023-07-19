#include<iostream>
#include<conio.h>
using namespace std;

class tollBooth
{
	unsigned int numberOfCars;
	double totalAmount;
	
	public:
	tollBooth()
	{
		numberOfCars = 0;
		totalAmount = 0;	
	}
	void payingCar()
	{
		numberOfCars++;
		totalAmount += 0.5;
	}
	void nopayCar()
	{
		numberOfCars++;
	}
	void display()
	{
		cout<<"Number of Cars: "<<numberOfCars<<endl;
		cout<<"Total Amount: "<<totalAmount<<endl;
	}
};

int main()
{
	tollBooth t;
	int cn=0;
	char ch='y';
	
	while(cn != 27)
	{
		cout<<"Did Car Pay (y/n)? ";
		cin>>ch;
		if(ch == 'y')
		{
			t.payingCar();
		}
		else
		{
			t.nopayCar();
		}
		cout<<"Enter any key to Continue or ecs to Display"<<endl;
		cn = getch();
		if(cn == 27)
		{
			t.display();
		}
	}
}