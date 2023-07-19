#include<iostream>
using namespace std;

class Int
{
	
	public:
		int a;
		Int()
		{
			a = 0;	
		}	
		Int(int n)
		{
			a = n;	
		}
		void add(int x,int y)
		{
			a = x+y;
			
		}
		void Display()
		{
			cout<<"Value is: "<<a<<endl;
		}
};

int main()
{
	Int n1(5),n2(10),sum;
	sum.add(n1.a,n2.a);
	sum.Display(); 	
}