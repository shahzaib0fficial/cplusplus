#include<iostream>
using namespace std;

int main()
{
    int pound1,shilling1,penny1,pound2,shilling2,penny2,tPound,tShilling,tPenny;
    int rPenny,rShilling;
    char ch,yn;
    do{
    cout<<"Enter first amount: \x9c";
    cin>>pound1>>ch>>shilling1>>ch>>penny1;
    cout<<"Enter second amount: \x9c";
    cin>>pound2>>ch>>shilling2>>ch>>penny2;
    tPound = pound1 + pound2;
    tShilling = shilling1 + shilling2;
    tPenny = penny1 + penny2;

    if(tPenny > 11)
    {
        rPenny = tPenny%12;
        tShilling = tShilling + (tPenny - rPenny)/12;
        tPenny = rPenny;
    }
    if(tShilling > 19)
    {
        rShilling = tShilling%20;
        tPound = tPound + (tShilling - rShilling)/20;
        tShilling = rShilling;
    }
    cout<<"Total is \x9c"<<tPound<<"."<<tShilling<<"."<<tPenny<<endl;
    cout<<"Do you wish to continue (y/n)? "<<endl;
    cin>>yn;
    }while(yn != 'n');
}
