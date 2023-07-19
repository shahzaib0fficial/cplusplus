#include<iostream>
using namespace std;

struct time
{
	int hours,minutes,seconds;	
};

int main()
{
	time t1;
	long int totalSeconds;
	char ch;
	
	cout<<"Enter Time in (hours:minutes:seconds) Format: ";
	cin>>t1.hours>>ch>>t1.minutes>>ch>>t1.seconds;
	
	totalSeconds = t1.hours*3600 + t1.minutes*60 + t1.seconds;
	
	cout<<"Total Seconds are: "<<totalSeconds;
}
