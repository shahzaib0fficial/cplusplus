#include <iostream>

using namespace std;

struct student
{
    int reg;

    student* prevAddress;
};

student* Top = NULL;
int Limit = 0;

bool isFull()
{
    if(Limit == 5)
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
        student* node = new student;
        cout<<"Enter reg: ";
        cin>>node->reg;

        node->prevAddress = NULL;

        if(Top == NULL)
        {
            Top = node;
        }
        else
        {
            node->prevAddress = Top;
            Top = node;
        }
        Limit++;
    }
}

bool isEmpty()
{
    if(Top == NULL)
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
        Top = Top->prevAddress;
        Limit--;
    }
}

student* top()
{
    if(isEmpty())
    {
        return Top;
    }
}

void Display()
{
    if(isEmpty())
    {
        cout<<"Data in List"<<endl;
        student* tempTop = Top;
        while(tempTop)
        {
            cout<<tempTop->reg<<endl;
            tempTop = tempTop->prevAddress;
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
        student* topAddress = top();
        cout<<"Top value is: "<<topAddress->reg;
    }
}
