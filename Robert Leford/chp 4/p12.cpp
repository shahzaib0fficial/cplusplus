#include<iostream>
using namespace std;

struct fraction
{
	int numerator,denominator;
};

int main()
{
	 fraction f1,f2,ans;
	 char ch,op;

	 cout<<"Enter First Fraction: ";
	 cin>>f1.numerator>>ch>>f1.denominator;
	 cout<<"Enter Operation: ";
	 cin>>op;
	 cout<<"Enter Second Fraction: ";
	 cin>>f2.numerator>>ch>>f2.denominator;

	 switch(op)
	 {
	 	case '+':
	 		ans.numerator = (f1.numerator*f2.denominator + f1.denominator*f2.numerator) ;
	 		ans.denominator = (f1.denominator*f2.denominator);
	 		break;
	 	case '-':
	 		ans.numerator = (f1.numerator*f2.denominator - f1.denominator*f2.numerator) ;
	 		ans.denominator = (f1.denominator*f2.denominator);
	 		break;
	 	case '*':
	 		ans.numerator = (f1.numerator*f2.numerator);
	 		ans.denominator = (f1.denominator*f2.denominator);
	 		break;
	 	case '/':
	 		ans.numerator = (f1.numerator*f2.denominator);
	 		ans.denominator = (f1.denominator*f2.numerator);
	 		break;
	 }

	 cout<<"Answer: "<<ans.numerator<<ch<<ans.denominator;
}
