#include<iostream>
using namespace std;

struct time
{
	int hours,minutes,seconds;	
};

int main()
{
	time t1,t2,finalTime;
	long long int s1,s2,sum;
	float h,m,s;
	char ch;
	
	cout<<"Enter First Time in (hours:minutes:seconds) Format: ";
	cin>>t1.hours>>ch>>t1.minutes>>ch>>t1.seconds;
	cout<<"Enter Seconds Time in (hours:minutes:seconds) Format: ";
	cin>>t2.hours>>ch>>t2.minutes>>ch>>t2.seconds;
	
	s1 = t1.hours*3600 + t1.minutes*60 + t1.seconds;
	s2 = t2.hours*3600 + t2.minutes*60 + t2.seconds;
	
	sum = s1+s2;
	
	h = sum/3600.0;
	finalTime.hours = h;
	m = h - finalTime.hours;
	finalTime.minutes = m*60;
	s = m*60 - finalTime.minutes;
	finalTime.seconds = s*60;
	
	cout<<finalTime.hours<<ch<<finalTime.minutes<<ch<<finalTime.seconds;
}
