#include <iostream>

using namespace std;

float park(int age , int hours){
    int bill;
    float totalBill=0;
    if(age>=10&&age<=15){
            bill=10*hours;
            totalBill=bill-(bill*0.1);
    }
    else if(age>15&&age<=20){
            bill=10*hours;
            totalBill=bill-(bill*0.05);
    }
    else{
        cout<<"You are not allowed"<<endl;
    }
    return totalBill;
}

float swings(int age,int swing){
    int bill;
    float totalBill=0;
    if(age>=1&&age<=5){
            bill=swing*10;
            totalBill = bill - (bill*0.5);
    }
    else if(age>5&&age<=10){
            bill=swing*10;
            totalBill = bill - (bill*0.25);
    }
    else{
        cout<<"You are not eligible"<<endl;
    }
    return totalBill;

}

int main()
{
    int age,hours,swing,parkBill,swingsBill;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"How many hours you stay in park: ";
    cin>>hours;
    cout<<"How many swing you will take: ";
    cin>>swing;

    swingsBill = swings(age,swing);
    parkBill = park(age,hours);

    cout<<"Swings bill is: "<<swingsBill<<endl;
    cout<<"Park bill is: "<<parkBill<<endl;
    cout<<"Total bill is: "<<swingsBill+parkBill;
}
