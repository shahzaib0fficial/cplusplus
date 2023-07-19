#include<iostream>
using namespace std;

struct Distance
{
	int foot;
	float inch;	
};
struct Volume
{
	Distance height,width,length;	
};

int main()
{
	float hei,wid,len;
	Volume room;
	room = {{10,2.5} , {14,5.5}, {11,2.5}};
	
	hei = room.height.foot + room.height.inch/12;
	wid = room.width.foot + room.width.inch/12;
	len = room.length.foot + room.length.inch/12;
	
	cout<<"Volume = "<<hei*wid*len;
}
