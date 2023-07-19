#include<iostream>
using namespace std;

int main()
{
    int a,b,ans=0;
    char op,yn = 'y';
    while(yn == 'y')
    {
            cout<<"Enter first number, operator, second number: ";
            cin>>a>>op>>b;

            switch(op)
            {
            case '+':
                ans = a+b;
                break;
            case '-':
                ans = a-b;
                break;
            case '*':
                ans = a*b;
                break;
            case '/':
                ans = a/b;
                break;
            default:
                cout<<"Invalid"<<endl;
            }
            cout<<"Answer = "<<ans<<endl;
            cout<<"Do another (y/n)? ";
            cin>>yn;
    }
}
