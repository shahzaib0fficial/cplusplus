#include <iostream>

using namespace std;

int main()
{
    int i,a[10];
    cout<<"Enter any 10 Numbers:";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%5==0)
        {
            cout<<"This Number is Divisible by 5:"<<a[i]<<endl;
        }
    }
}
