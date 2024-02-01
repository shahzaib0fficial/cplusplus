#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a[10],i,j,t;
    cout << "Enter 10 Values"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"In Accending Oder"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"In Decending Oder"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Press Any Key For Exit";
    getch();
}
