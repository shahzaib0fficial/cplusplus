#include <iostream>

using namespace std;

int main()
{
    double a,b,ans;
    char op;
    cout<<"Enter First Number:";
    cin>>a;
    cout<<"Select an Operator(+,-,*,/):";
    cin>>op;
    cout<<"Enter Second Number:";
    cin>>b;
    if(op=='+')
    {
        cout<<a<<"+"<<b<<"="<<a+b;
    }
    else if(op=='-')
    {
        cout<<a<<"-"<<b<<"="<<a-b;
    }
    else if(op=='*')
    {
        cout<<a<<"*"<<b<<"="<<a*b;
    }
    else if(op=='/')
    {
        cout<<a<<"/"<<b<<"="<<a/b;
    }
    else
    {
        cout<<"Invalid Press \n";
    }
}
