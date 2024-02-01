#include <iostream>

using namespace std;

int main()
{
    int n,i,f=1;
    cout<<"Enter a Number to Find Factorial:";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    cout<<"Factorial of "<<n<<" is "<<f;
}
