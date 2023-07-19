#include<iostream>
using namespace std;

int main()
{
	 int a,b,c,d,ans1,ans2;
	 char ch,op;
	 
	 cout<<"Enter First Fraction: ";
	 cin>>a>>ch>>b;
	 cout<<"Enter Operation: ";
	 cin>>op;
	 cout<<"Enter Second Fraction: ";
	 cin>>c>>ch>>d;
	 
	 switch(op)
	 {
	 	case '+':
	 		ans1 = (a*d + b*c) ;
	 		ans2 = (b*d);
	 		break;
	 	case '-':
	 		ans1 = (a*d - b*c) ;
	 		ans2 = (b*d);
	 		break;
	 	case '*':
	 		ans1 = (a*c);
	 		ans2 = (b*d);
	 		break;
	 	case '/':
	 		ans1 = (a*d);
	 		ans2 = (b*c);
	 		break;
	 }
	 
	 cout<<"Answer: "<<ans1<<"/"<<ans2;
}
