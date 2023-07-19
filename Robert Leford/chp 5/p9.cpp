#include<iostream>
using namespace std;

struct time
{
    int hours,minutes,seconds;
};

int Swap(time &t1,time &t2)
{
    time temp;
    temp = t1;
    t1 = t2;
    t2 = temp;
}

int main()
{
    time t1,t2;
    char ch;

    cout<<"Enter First Time in (hours:minutes:seconds) Format: ";
    cin>>t1.hours>>ch>>t1.minutes>>ch>>t1.seconds;

    cout<<"Enter Second Time in (hours:minutes:seconds) Format: ";
    cin>>t2.hours>>ch>>t2.minutes>>ch>>t2.seconds;

    Swap(t1,t2);

    cout<<"After Swapping: "<<endl;
    cout<<"First Time: "<<t1.hours<<ch<<t1.minutes<<ch<<t1.seconds<<endl;
    cout<<"Second Time: "<<t2.hours<<ch<<t2.minutes<<ch<<t2.seconds<<endl;
}
