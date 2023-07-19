#include<iostream>
using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};

class employee
{
    int employeeNumber, day, month, year;
    etype type;
    char ch,t;
    float employeeCompensation;
public:
    void  getemploy()
    {
        cout<<"Enter Employee Number: ";
        cin>>employeeNumber;
        cout<<"Enter Employee Compensation: ";
        cin>>employeeCompensation;
        cout<<"Enter a Date of Joining in (day/month/year) Format: ";
        cin>>day>>ch>>month>>ch>>year;
        cout<<"Enter employee type (first letter only) laborer, secretary, manager, accountant, executive, researcher): ";
        cin>>t;
        switch(t)
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
    }
    void putemploy()
    {
        cout<<"Employee Number: "<<employeeNumber<<endl;
        cout<<"Employee Compensation: "<<employeeCompensation<<endl;
        cout<<"Date of Joining is: "<<day<<ch<<month<<ch<<year<<endl;
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
};

int main()
{
    employee e1,e2,e3;

        e1.getemploy();
        e2.getemploy();
        e3.getemploy();

        cout<<"Employees Data are:\n";
        e1.putemploy();
        e2.putemploy();
        e3.putemploy();
}
