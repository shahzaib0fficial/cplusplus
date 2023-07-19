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

class sales
{
	float sale[3];
	
public:
	void getdata()
	{
		for(int i=0;i<3;i++)
		{
			cout<<"Enter "<<i+1<<" month sale: ";
			cin>>sale[0];
		}
	}
	void putdata()
	{
		for(int i=0;i<3;i++)
			{
				cout<<i+1<<" month sale is: "<<sale[0]<<endl;
			}		
	}	
};

class book : publication , sales
{
	int pageCount;
	
public:
	void getdata()
	{
		publication::getdata();
		cout<<"Enter Pages: ";
		cin>>pageCount;
		sales::getdata();	
	}
	void putdata()
	{
		publication::putdata();
		cout<<"Pages are: "<<pageCount<<endl;
		sales::putdata();
	}		
};

class tape : publication , sales
{
	float playingTime;
	
public:
	void getdata()
	{
		publication::getdata();
		cout<<"Enter Playing Time: ";
		cin>>playingTime;
		sales::getdata();	
	}
	void putdata()
	{
		publication::putdata();
		cout<<"Playing time is: "<<playingTime<<endl;
		sales::putdata();
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