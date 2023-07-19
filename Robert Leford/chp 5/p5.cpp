#include<iostream>
using namespace std;

long int hms_to_secs(int h,int m,int s)
{
	return h*3600+m*60+s;
}

int main()
{
	int h,m,s;
	char ch;
	do{
	cout<<"Enter Hours: ";
	cin>>h;
	cout<<"Enter Minutes: ";
	cin>>m;
	cout<<"Enter Seconds: ";
	cin>>s;
	cout<<"Time in Seconds = "<<hms_to_secs(h,m,s);

	cout<<"\nAgain(y/n)? ";
	cin>>ch;
	}while(ch == 'y');


}
