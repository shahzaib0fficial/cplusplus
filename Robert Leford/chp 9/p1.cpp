#include<iostream>
using namespace std;

class publication
{
private:
	string title;
	float price;
	
public:
	void getdata()
	{
		cout<<"Enter Title: ";
		//getline(cin,title);
		cin>>title;
		cout<<"Enter Price: ";
		cin>>price;	
	}
	void putdata()
	{
		cout<<"Title is: "<<title<<endl;
		cout<<"Price is: "<<price<<endl;
	}	
};

class book : publication
{
	int pageCount;
	
public:
	void getdata()
	{
		publication::getdata();
		cout<<"Enter Pages: ";
		cin>>pageCount;	
	}
	void putdata()
	{
		publication::putdata();
		cout<<"Pages are: "<<pageCount<<endl;
	}		
};

class tape : publication
{
	float playingTime;
	
public:
	void getdata()
	{
		publication::getdata();
		cout<<"Enter Playing Time: ";
		cin>>playingTime;	
	}
	void putdata()
	{
		publication::putdata();
		cout<<"Playing time is: "<<playingTime<<endl;
	}	
};

int main()
{
	book b;
	tape t;
	
	cout<<"Enter Book Information"<<endl;
	b.getdata();

	cout<<"Enter tape Information"<<endl;
	t.getdata();

	cout<<"Book Detail"<<endl;
	b.putdata();
	
	cout<<"Tape Detail"<<endl;
	t.putdata();
}