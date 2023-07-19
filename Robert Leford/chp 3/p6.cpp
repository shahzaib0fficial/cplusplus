#include<iostream>
using namespace std;

int main()
{
    int f,n,q=1;
    while(q != 0)
    {
        f=1;
        cout<<"Enter a Number: ";
        cin>>n;

        for(int i=n;i>=1;i--)
        {
            f = f*i;
        }
        cout<<"Factorial is: "<<f<<endl;
        cout<<"Enter any Digit to continue (0 to quit program): ";
        cin>>q;
    }
}
