#include <iostream>

using namespace std;

int Reg[5];

int Front = 0;
int Back = -1;

bool isFull()
{
    int Limit = sizeof(Reg)/sizeof(Reg[0]);
    if(Back == Limit-1)
    {
        cout<<"Can't Push Queue is Full"<<endl;
        return false;
    }
    else
    {
        return true;
    }
}

void enQueue()
{
    if(isFull())
    {
        cout<<"Enter reg: ";
        cin>>Reg[++Back];
    }
}

bool isEmpty()
{
    if(Back == -1)
    {
        cout<<"List is Empty"<<endl;
        return false;
    }
    else
    {
        return true;
    }
}

void deQueue()
{
    if(isEmpty())
    {
        for(int i=0;i<Back;i++)
        {
            Reg[i] = Reg[i+1];
        }
        Back--;
    }
}

int FrontReturner()
{
    return Reg[0];
}

void Display()
{
    if(isEmpty())
    {
        cout<<"Data in List"<<endl;
        for(int i=0;i<=Back;i++)
        {
            cout<<Reg[i]<<endl;
        }
    }
}

int main()
{
    enQueue();
    enQueue();
    enQueue();
    enQueue();
    enQueue();
    enQueue();
    Display();

    deQueue();
    Display();

    if(isEmpty())
    {
        cout<<"Front value is: "<<FrontReturner();
    }
}
