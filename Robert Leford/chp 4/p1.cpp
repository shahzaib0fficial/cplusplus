#include<iostream>
using namespace std;

struct phone
{
    int code, exchange, number;
};

int main()
{
    phone myNumber,yourNumber;
    char ch;
    myNumber.code = 212;
    myNumber.exchange = 768;
    myNumber.number = 8900;

    cout<<"Enter your area code, exchange, and number: ";
    cin>>yourNumber.code>>ch>>yourNumber.exchange>>ch>>yourNumber.number;
    
    cout<<"My number is ("<<myNumber.code<<") "<<myNumber.exchange<<"-"<<myNumber.number<<endl;
    cout<<"Your number is ("<<yourNumber.code<<") "<<yourNumber.exchange<<"-"<<yourNumber.number<<endl;
}

