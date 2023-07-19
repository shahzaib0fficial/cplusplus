#include<iostream>
using namespace std;

int Swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a,b;
    cout<<"Enter First Value: ";
    cin>>a;
    cout<<"Enter Second Value: ";
    cin>>b;
    Swap(a,b);
    cout<<"After Swaping: "<<endl;
    cout<<"First Value: "<<a<<endl<<"Second Value: "<<b;
}
