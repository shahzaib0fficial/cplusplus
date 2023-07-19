#include<iostream>
using namespace std;

class time
{
	int  hours, minutes, seconds;
	public:
	time()
	{
		hours = 0;
		minutes = 0;
		seconds = 0;
	}
	time(int h,int m,int s)
	{
		hours = h;
		minutes = m;
		seconds = s;
	}
	void display()
	{
		cout<<"Time: "<<hours<<":"<<minutes<<":"<<seconds<<endl;
	}
	void add(time t1,time t2)
	{
		hours = t1.hours + t2.hours;
		minutes = t1.minutes + t2.minutes;
		seconds = t1.seconds + t2.seconds;
	}
};

int main()
{
	time t1(2,30,10),t2(3,10,20),tTime;
	tTime.add(t1,t2);
	tTime.display();
}