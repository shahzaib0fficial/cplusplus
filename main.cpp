#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int units;
    float bill,t1bill,t2bill,surcharge;
    cout<<"Enter Units of Electricity: ";
    cin>>units;
    if(units<=50){
        bill=units*0.35;
        cout<<"Your Electricity Bill is: "<<bill;
    }
    else if(units>50 && units<=150){
        t1bill=50*0.35;
        t2bill=(units-50)*4.0;
        bill=t1bill + t2bill;
        cout<<"Your Electricity Bill is: "<<bill;
    }
    else if(units>150 && units<=250){
        t1bill=(50*0.35) + (100*4.0);
        t2bill=(units-150)*5.3;
        bill=t1bill + t2bill;
        cout<<"Your Electricity Bill is: "<<bill;
    }
    else{
        t1bill=(50*0.35) + (100*4.0) + (100*0.53);
        t2bill=(units-250)*6.0;
        bill=t1bill + t2bill;
        if(bill>=2000 && bill<5000){
            surcharge=bill*0.15;
            bill=surcharge + bill;
            cout<<"Your Electricity Bill is: "<<bill;
        }
        else if(bill>=5000){
            surcharge=bill*0.25;
            bill=surcharge + bill;
            cout<<"Your Electricity Bill is: "<<bill;
        }
        else{
            cout<<"Your Electricity Bill is: "<<bill;
        }
    }
    cout<<"\nPress any Key to Exit: ";
    getch();
}
