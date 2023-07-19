#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,r1,r2;
    char op;
    cout<<"Enter first fraction:  ";
    cin>>a>>op>>b;
    cout<<"Enter second fraction: ";
    cin>>c>>op>>d;
    r1 = (a*d + b*c);
    r2 = b*d;
    cout<<"Sum = "<<r1<<"/"<<r2;
}
