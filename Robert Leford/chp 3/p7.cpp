#include<iostream>
using namespace std;

int main()
{
    float initial;
    cout<<"Enter Initial amount: ";
    cin>>initial;

    for(int i=0;i<10;i++)
    {
        initial = initial+(initial*0.055);
    }
    cout<<"After 10 Years: "<<initial;
}
