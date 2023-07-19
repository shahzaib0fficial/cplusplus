#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=20;i++)
    {
        for(int j=19;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"X";
        }
        cout<<endl;
    }
}
