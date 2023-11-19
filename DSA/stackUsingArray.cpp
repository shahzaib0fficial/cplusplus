#include <iostream>

using namespace std;

int Reg[5];
int top = -1;

bool isFull()
{
    int arraySize = sizeof(Reg)/sizeof(int);
    if(top == arraySize-1)
    {
        cout<<"Can't Push Stack is Full"<<endl;
        return false;
    }
    else
    {
        return true;
    }
}

void push()
{
    if(isFull())
    {
        cout<<"Enter reg: ";
        cin>>Reg[++top];
    }
}

bool isEmpty()
{
    if(top == -1)
    {
        cout<<"List is Empty"<<endl;
        return false;
    }
    else
    {
        return true;
    }
}

void pop()
{
    if(isEmpty())
    {
        top--;
    }
}

int Top()
{
    return Reg[top];
}

void Display()
{
    if(isEmpty())
    {
        cout<<"Data in List"<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<Reg[i]<<endl;
        }
    }
}

int main()
{
    push();
    push();
    push();
    push();
    push();
    push();
    Display();

    pop();
    Display();

    if(isEmpty())
    {
        cout<<"Top value is: "<<Top();
    }
}

