#include<iostream>
using namespace std;

struct time
{
	int hours,minutes,seconds;	
};

long int time_to_secs(time t)
{
	return t.hours*3600 + t.minutes*60 + t.seconds;
}

time secs_to_time(long int secs)
{
	time t;
	float h,m,s;
	h = secs/3600.0;
	t.hours = h;
	m = h - t.hours;
	t.minutes = m*60;
	s = m*60 - t.minutes;
	t.seconds = s*60;
	return t;
}

int main()
{
	time t1,t2,finalTime;
	long int s1,s2,sum;
	
	char ch;
	
	cout<<"Enter First Time in (hours:minutes:seconds) Format: ";
	cin>>t1.hours>>ch>>t1.minutes>>ch>>t1.seconds;
	cout<<"Enter Seconds Time in (hours:minutes:seconds) Format: ";
	cin>>t2.hours>>ch>>t2.minutes>>ch>>t2.seconds;
	
	s1 = time_to_secs(t1);
	s2 = time_to_secs(t2);
	
	sum = s1+s2;
	
	finalTime  = secs_to_time(sum);
	
	cout<<finalTime.hours<<ch<<finalTime.minutes<<ch<<finalTime.seconds;
}
