#include<iostream>
using namespace std;

struct fraction
{
	int numerator,denominator;
};

fraction fadd(fraction f1,fraction f2)
{
    fraction ans;
    ans.numerator = (f1.numerator*f2.denominator + f1.denominator*f2.numerator) ;
    ans.denominator = (f1.denominator*f2.denominator);
    return ans;
}
fraction fsub(fraction f1,fraction f2)
{
    fraction ans;
    ans.numerator = (f1.numerator*f2.denominator - f1.denominator*f2.numerator) ;
    ans.denominator = (f1.denominator*f2.denominator);
    return ans;
}

fraction fmul(fraction f1,fraction f2)
{
    fraction ans;
    ans.numerator = (f1.numerator*f2.numerator);
    ans.denominator = (f1.denominator*f2.denominator);
    return ans;
}

fraction fdiv(fraction f1,fraction f2)
{
    fraction ans;
    ans.numerator = (f1.numerator*f2.denominator);
    ans.denominator = (f1.denominator*f2.numerator);
    return ans;
}

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
	 		ans = fadd(f1,f2);
	 		break;
	 	case '-':
	 		ans = fsub(f1,f2);
	 		break;
	 	case '*':
	 		ans = fmul(f1,f2);
	 		break;
	 	case '/':
	 	    ans = fdiv(f1,f2);
	 		break;
	 }

	 cout<<"Answer: "<<ans.numerator<<ch<<ans.denominator;
}
