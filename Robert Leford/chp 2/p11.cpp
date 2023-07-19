#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<setiosflags(ios::left);
    cout<<setw(14)<<"Last name"<<setw(15)<<"First name"<<setw(23)<<"Street address"<<setw(15)<<"Town"<<setw(9)<<"State"<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<setw(14)<<"Jones"<<setw(15)<<"Bernard"<<setw(23)<<"109 Pine Lane"<<setw(15)<<"Littletown"<<setw(9)<<"MI"<<endl;
    cout<<setw(14)<<"O'Brian"<<setw(15)<<"Coleen"<<setw(23)<<"42 E. 99th Ave."<<setw(15)<<"Bigcity"<<setw(9)<<"NY"<<endl;
    cout<<setw(14)<<"Wong"<<setw(15)<<"Harry"<<setw(23)<<"121-A Alabama St."<<setw(15)<<"Lakeville"<<setw(9)<<"IL"<<endl;
}
