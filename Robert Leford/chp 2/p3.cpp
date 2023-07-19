/*Write a program that generates the following output:
10
20
19
Use an integer constant for the 10, an arithmetic assignment operator to generate the 20,
and a decrement operator to generate the 19.*/
#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    cout<<"Initial value is : "<<a<<endl;
    a+=10;
    cout<<"After using Arithmetic operator : "<<a<<endl;
    a--;
    cout<<"After decrementing by 1 : "<<a<<endl;
}
