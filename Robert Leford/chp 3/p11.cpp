#include<iostream>
using namespace std;

int main()
{
	int pound1,shilling1,penny1,pound2,shilling2,penny2,tPound,tShilling,tPenny;
    int rPenny,rShilling;
    char ch,op;
	cout<<"Enter First value in old-style English Currency: ";
	cin>>pound1>>ch>>shilling1>>ch>>penny1;
	
	cout<<"Enter First value in old-style English Currency: ";
	cin>>pound2>>ch>>shilling2>>ch>>penny2;
	
	cout<<"Enter Operation: ";
	cin>>op;
	
	switch(op)
	{
		case '+':
			tPound = pound1 + pound2;
			tShilling = shilling1 + shilling2;
			tPenny = penny1 + penny2;
			break;
		case '-':
			tPound = pound1 - pound2;
			tShilling = shilling1 - shilling2;
			tPenny = penny1 - penny2;
			break;
		case '*':
			tPound = pound1 * pound2;
			tShilling = shilling1 * shilling2;
			tPenny = penny1 * penny2;
			break;
	}
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
}