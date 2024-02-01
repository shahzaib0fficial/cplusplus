#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a[3][5],i,j;
    cout<<"Enter any 15 values"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Press any Key for Exit";
    getch();
}
