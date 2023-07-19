#include<iostream>
using namespace std;

int main()
{
    int guests,chairs,possibleWays=1,t;
    cout<<"Enter number of Guests: ";
    cin>>guests;
    cout<<"Enter number of Chairs: ";
    cin>>chairs;
    t = guests - chairs;
    for(int i=guests;i>t;i--)
    {
        possibleWays = possibleWays*i;
    }
    cout<<"Possible ways to sit are: "<<possibleWays;
}
