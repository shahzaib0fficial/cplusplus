#include<iostream>
using namespace std;

struct employee
{
	int employeeNumber;
	float employeeCompensation;
};

struct date
{
	int month,day,year;
};

enum etype { laborer, secretary, manager, accountant, executive, researcher };

int main()
{
	employee e1,e2,e3;
	date d1,d2,d3;
	etype e1type,e2type,e3type;
	char ch,e1ch,e2ch,e3ch;
	
	cout<<"Enter First Employee Number: ";
	cin>>e1.employeeNumber;
	cout<<"Enter First Employee's Compensation: ";
	cin>>e1.employeeCompensation;
	cout<<"Enter Date(12/31/2000) of First Employment: ";
	cin>>d1.month>>ch>>d1.day>>ch>>d1.year;
	cout<<"Enter Employee type (first letter only laborer, secretary, manager, accountant, executive, researcher: ";
	cin>>e1ch;

	cout<<"\nEnter Second Employee Number: ";
	cin>>e2.employeeNumber;
	cout<<"Enter Second Employee's Compensation: ";
	cin>>e2.employeeCompensation;
	cout<<"Enter Date(12/31/2000) of First Employment: ";
	cin>>d2.month>>ch>>d2.day>>ch>>d2.year;
	cout<<"Enter Employee type (first letter only laborer, secretary, manager, accountant, executive, researcher: ";
	cin>>e2ch;

	cout<<"\nEnter Third Employee Number: ";
	cin>>e3.employeeNumber;
	cout<<"Enter Third Employee's Compensation: ";
	cin>>e3.employeeCompensation;
	cout<<"Enter Date(12/31/2000) of First Employment: ";
	cin>>d3.month>>ch>>d3.day>>ch>>d3.year;
	cout<<"Enter Employee type (first letter only laborer, secretary, manager, accountant, executive, researcher: ";
	cin>>e3ch;
	
	switch(e1ch)
	{
		case 'l':
			e1type = laborer;
			break;
		case 's':
			e1type = secretary;
			break;
		case 'm':
			e1type = manager;
			break;
		case 'a':
			e1type = accountant;
			break;
		case 'e':
			e1type = executive;
			break;
		case 'r':
			e1type = researcher;
			break;
		default:
			break;
	}
	
	switch(e2ch)
	{
		case 'l':
			e2type = laborer;
			break;
		case 's':
			e2type = secretary;
			break;
		case 'm':
			e2type = manager;
			break;
		case 'a':
			e2type = accountant;
			break;
		case 'e':
			e2type = executive;
			break;
		case 'r':
			e2type = researcher;
			break;
		default:
			break;
	}
	
	switch(e3ch)
	{
		case 'l':
			e3type = laborer;
			break;
		case 's':
			e3type = secretary;
			break;
		case 'm':
			e3type = manager;
			break;
		case 'a':
			e3type = accountant;
			break;
		case 'e':
			e3type = executive;
			break;
		case 'r':
			e3type = researcher;
			break;
		default:
			break;
	}
	
	cout<<"\n\nDetails of Employees are:\n";
	cout<<"\nFirst Employee Number: "<<e1.employeeNumber<<endl;
	cout<<"First Employee Compensation: "<<e1.employeeCompensation<<endl;
	cout<<"Date of First Employment: "<<d1.month<<ch<<d1.day<<ch<<d1.year<<endl;
	switch(e1type)
	{
		case laborer:
			cout<<"Employee type is laborer\n";
			break;
		case secretary:
			cout<<"Employee type is secretery\n";
			break;
		case manager:
			cout<<"Employee type is manager\n";
			break;
		case accountant:
			cout<<"Employee type is accountant\n";
			break;
		case executive:
			cout<<"Employee type is executive\n";
			break;
		case researcher:
			cout<<"Employee type is researcher\n";
			break;
		default:
			cout<<"Invalid\n";
			break;
	}
	
	cout<<"\nSecond Employee Number: "<<e2.employeeNumber<<endl;
	cout<<"Second Employee Compensation: "<<e2.employeeCompensation<<endl;
	cout<<"Date of First Employment: "<<d2.month<<ch<<d2.day<<ch<<d2.year<<endl;
	switch(e2type)
	{
		case laborer:
			cout<<"Employee type is laborer\n";
			break;
		case secretary:
			cout<<"Employee type is secretery\n";
			break;
		case manager:
			cout<<"Employee type is manager\n";
			break;
		case accountant:
			cout<<"Employee type is accountant\n";
			break;
		case executive:
			cout<<"Employee type is executive\n";
			break;
		case researcher:
			cout<<"Employee type is researcher\n";
			break;
		default:
			cout<<"Invalid\n";
			break;
	}
	
	cout<<"\nThird Employee Number: "<<e3.employeeNumber<<endl;
	cout<<"Third Employee Compensation: "<<e3.employeeCompensation<<endl;
	cout<<"Date of First Employment: "<<d3.month<<ch<<d3.day<<ch<<d3.year<<endl;
	switch(e3type)
	{
		case laborer:
			cout<<"Employee type is laborer\n";
			break;
		case secretary:
			cout<<"Employee type is secretery\n";
			break;
		case manager:
			cout<<"Employee type is manager\n";
			break;
		case accountant:
			cout<<"Employee type is accountant\n";
			break;
		case executive:
			cout<<"Employee type is executive\n";
			break;
		case researcher:
			cout<<"Employee type is researcher\n";
			break;
		default:
			cout<<"Invalid\n";
			break;
	}
}
