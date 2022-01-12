#include <iostream>

using namespace std;

int main()
{
    int i,a[10],maxi,mini;
    cout<<"Enter any 10 Numbers:";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    maxi=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
    }
    cout<<"The Maximum Number in these Numbers is:"<<maxi<<endl;
    mini=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]<mini)
        {
            mini=a[i];
        }
    }
    cout<<"The Minimum Number in these Numbers is:"<<mini<<endl;
}
