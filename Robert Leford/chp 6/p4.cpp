#include<iostream>
using namespace std;

class employee
{
    int employeeNumber;
    float employeeCompensation;
public:
    void setData()
    {
        cout<<"Enter Employee Number: ";
        cin>>employeeNumber;
        cout<<"Enter Employee Compensation: ";
        cin>>employeeCompensation;
    }
    void Display()
    {
        cout<<"Employee Number: "<<employeeNumber<<endl;
        cout<<"Employee Compensation: "<<employeeCompensation<<endl;
    }
};

int main()
{
    employee e1,e2,e3;

        e1.setData();
        e2.setData();
        e3.setData();

        cout<<"Employees Data are:\n";
        e1.Display();
        e2.Display();
        e3.Display();
}
