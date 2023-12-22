#include <iostream>

using namespace std;

struct list
{
	int data;
	
	list* prev;
	list* next;
};

list* Head = NULL;

void insertAtLast()
{
	list* node = new list;
	cout<<"Enter Data: ";
	cin>>node->data;
	
	node->next = node->prev = NULL;
	
	if(Head == NULL)
	{
		Head = node;
		Head->next = Head;
	}
	else
	{
		list* tempHead = Head;
		
		while(tempHead != NULL)
		{
			if(tempHead->next == Head)
			{
				tempHead->next = node;
				node->prev = tempHead;
				node->next = Head;
				Head->prev = node;
				break;
			}
			else
			{
				tempHead = tempHead->next;
			}
		}
	}
}

void Display()
{
	if(Head == NULL)
	{
		cout<<"Empty";
	}
	else
	{
		list* tempHead = Head;
		int count = 0;
		while(tempHead != NULL && count != 3)
		{
			cout<<"Value: "<<tempHead->data<<endl;
			tempHead = tempHead->next;
			if(tempHead == Head)
			{
				count++;
			}
		}
	}
}

int main() 
{
	insertAtLast();
	insertAtLast();
	insertAtLast();
	
	Display();
	return 0;
}