#include<iostream>
using namespace std;

//int c=1;

int print()
{
    static int c = 1;
    cout<<"I have been called "<<c<<" times"<<endl;
    c++;
}

int main()
{
    for(int i=0;i<10;i++)
    {
        print();
    }
}
