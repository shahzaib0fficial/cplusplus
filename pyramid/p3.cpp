#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=5;j>i;j--)
        {

            cout<<"*";
        }
        for(int j=1;j<(i*2);j++)
        {
            cout<<" ";
        }
        for(int j=5;j>i;j--)
        {
            if(i==0&&j==1)
            {
                break;
            }
            cout<<"*";
        }
        cout<<endl;
    }
}
