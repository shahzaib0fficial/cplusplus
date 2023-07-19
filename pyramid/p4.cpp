#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<9;i++)
    {
        if(i<5)
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
        }
        else
        {
            for(int j=3;j<i;j++)
            {
                cout<<"*";
            }
            for(int j=7;j>(i*2)-8;j--)
            {
                cout<<" ";
            }
            for(int j=3;j<i;j++)
            {
                if(i==8 && j==7)
                {
                    break;
                }
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
