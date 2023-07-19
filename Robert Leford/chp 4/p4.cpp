#include<iostream>
using namespace std;

struct employee
{
	int employeeNumber;
	float employeeCompensation;
};

int main()
{
	employee e1,e2,e3;
	cout<<"Enter First Employee Number: ";
	cin>>e1.employeeNumber;
	cout<<"Enter First Employee's Compensation: ";
	cin>>e1.employeeCompensation;

	cout<<"Enter Second Employee Number: ";
	cin>>e2.employeeNumber;
	cout<<"Enter Second Employee's Compensation: ";
	cin>>e2.employeeCompensation;

	cout<<"Enter Third Employee Number: ";
	cin>>e3.employeeNumber;
	cout<<"Enter Third Employee's Compensation: ";
	cin>>e3.employeeCompensation;
	
	cout<<"Details of Employees are:\n";
	cout<<"First Employee Number: "<<e1.employeeNumber<<endl;
	cout<<"First Employee Compensation: "<<e1.employeeCompensation<<endl;
	cout<<"Second Employee Number: "<<e2.employeeNumber<<endl;
	cout<<"Second Employee Compensation: "<<e2.employeeCompensation<<endl;
	cout<<"Third Employee Number: "<<e3.employeeNumber<<endl;
	cout<<"Third Employee Compensation: "<<e3.employeeCompensation<<endl;
}
