#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<9;i++)
    {
        if(i<5)
        {
            for(int j=0;j<i;j++)
            {
                cout<<" ";
            }
            for(int j=4-i;j>=0;j--)
            {
                cout<<"*";
            }
        }
        else
        {
            for(int j=8;j>i;j--)
            {
                cout<<" ";
            }
            for(int j=0;j<=(i-4);j++)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
