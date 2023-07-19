#include<iostream>
using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

int main()
{
	etype type;
	char ch;
	cout<<"Enter Employee type (first letter only laborer, secretary, manager, accountant, executive, researcher: ";
	cin>>ch;
	
	switch(ch)
	{
		case 'l':
			type = laborer;
			break;
		case 's':
			type = secretary;
			break;
		case 'm':
			type = manager;
			break;
		case 'a':
			type = accountant;
			break;
		case 'e':
			type = executive;
			break;
		case 'r':
			type = researcher;
			break;
		default:
			break;
	}
	
	switch(type)
	{
		case laborer:
			cout<<"Employee type is laborer";
			break;
		case secretary:
			cout<<"Employee type is secretery";
			break;
		case manager:
			cout<<"Employee type is manager";
			break;
		case accountant:
			cout<<"Employee type is accountant";
			break;
		case executive:
			cout<<"Employee type is executive";
			break;
		case researcher:
			cout<<"Employee type is researcher";
			break;
		default:
			cout<<"Invalid";
			break;
	}
}
