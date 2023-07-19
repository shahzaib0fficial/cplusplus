#include<iostream>
using namespace std;

class date
{
    int day, month, year;
    char ch;
public:
    void getdate()
    {
        cout<<"Enter a Date in (day/month/year) Format";
        cin>>day>>ch>>month>>ch>>year;
    }
    void showdate()
    {
        cout<<"Date is: "<<day<<ch<<month<<ch<<year<<endl;
    }
};

int main()
{
    date d;
    d.getdate();
    d.showdate();
}
