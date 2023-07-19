#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=200;i++)
    {
        cout<<setw(3)<<n*i<<"\t";
        if(i%10 == 0)
        {
           cout<<endl;
        }
    }
}
