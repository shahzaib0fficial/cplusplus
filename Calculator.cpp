#include <iostream>

using namespace std;

void two()
{
    int n1,n2;
    char op;
    cout<<"Enter a Number:";
    cin>>n1;
    cout<<"Enter an Operator (+,-,*,/):";
    cin>>op;
    cout<<"Enter a Number:";
    cin>>n2;
    if(op=='+')
    {
        cout<<n1<<"+"<<n2<<"="<<n1+n2;
    }
    else if(op=='-')
    {
        cout<<n1<<"-"<<n2<<"="<<n1-n2;
    }
    else if(op=='*')
    {
        cout<<n1<<"*"<<n2<<"*"<<n1*n2;
    }
    else if(op=='/')
    {
        cout<<n1<<"/"<<n2<<"="<<n1/n2;
    }
    else
    {
        cout<<"Invalid Press";
    }
}
void three()
{
    double n1,n2,n3;
    char op1,op2;
    cout<<"Enter a Number:";
    cin>>n1;
    cout<<"Enter an Operator (+,-,*,/):";
    cin>>op1;
    cout<<"Enter a Number:";
    cin>>n2;
    cout<<"Enter an Operator (+,-,*,/):";
    cin>>op2;
    cout<<"Enter a Number:";
    cin>>n3;
    //first +
    if(op1=='+'||op2=='+')
    {
        cout<<n1<<"+"<<n2<<"+"<<n3<<"="<<n1+n2+n3;
    }
    else if(op1=='+'||op2=='-')
    {
        cout<<n1<<"+"<<n2<<"-"<<n3<<"="<<n1+n2-n3;
    }
     else if(op1=='+'||op2=='*')
    {
        cout<<n1<<"+"<<n2<<"*"<<n3<<"="<<n1+n2*n3;
    }
     else if(op1=='+'||op2=='/')
    {
        cout<<n1<<"+"<<n2<<"/"<<n3<<"="<<n1+n2/n3;
    }
    //first -
     else if(op1=='-'||op2=='+')
    {
        cout<<n1<<"-"<<n2<<"+"<<n3<<"="<<n1-n2+n3;
    }
    else if(op1=='-'||op2=='*')
    {
        cout<<n1<<"-"<<n2<<"*"<<n3<<"="<<n1-n2*n3;
    }
    else if(op1=='-'||op2=='/')
    {
        cout<<n1<<"-"<<n2<<"/"<<n3<<"="<<n1-n2/n3;
    }
    else if(op1=='-'||op2=='-')
    {
        cout<<n1<<"-"<<n2<<"*"<<n3<<"="<<n1-n2*n3;
    }
    //first *
    else if(op1=='*'||op2=='+')
    {
        cout<<n1<<"*"<<n2<<"+"<<n3<<"="<<n1*n2+n3;
    }
     else if(op1=='*'||op2=='-')
    {
        cout<<n1<<"*"<<n2<<"-"<<n3<<"="<<n1*n2-n3;
    }
     else if(op1=='*'||op2=='*')
    {
        cout<<n1<<"*"<<n2<<"*"<<n3<<"="<<n1*n2*n3;
    }
     else if(op1=='*'||op2=='/')
    {
        cout<<n1<<"*"<<n2<<"-"<<n3<<"="<<n1*n2/n3;
    }
    //first /
    else if(op1=='/'||op2=='+')
    {
        cout<<n1<<"/"<<n2<<"+"<<n3<<"="<<n1/n2+n3;
    }
    else if(op1=='/'||op2=='-')
    {
        cout<<n1<<"/"<<n2<<"-"<<n3<<"="<<n1/n2-n3;
    }
     else if(op1=='/'||op2=='*')
    {
        cout<<n1<<"/"<<n2<<"*"<<n3<<"="<<n1/n2*n3;
    }
     else if(op1=='/'||op2=='/')
    {
        cout<<n1<<"/"<<n2<<"/"<<n3<<"="<<n1/n2/n3;
    }
    else
    {
        cout<<"Invalid Press";
    }
}

int main()
{
    int a;
    cout<<"How Much Numbers do You Want to (+,-,*,/) Minimum 2 Maximum 3 :";
    cin>>a;
    if(a==2)
    {
        two();
    }
    else if (a==3)
    {
        three();
    }
}
