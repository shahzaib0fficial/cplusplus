#include <iostream>

using namespace std;

struct student
{
    int reg;
    int priority;

    student* nextAddress;
};

student* Front = NULL;
student* Back = NULL;
int Limit = 0;

bool isFull()
{
    if(Limit == 5)
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
        student* node = new student;
        cout<<"Enter reg: ";
        cin>>node->reg;
        cout<<"Enter priority: ";
        cin>>node->priority;

        node->nextAddress = NULL;

        if(Front == NULL)
        {
            Front = node;
            Back = node;
        }
        else if(Front->nextAddress == NULL)
        {
            if(Front->priority >= node->priority)
            {
                node->nextAddress = Front;
                Front = node;
            }
            else
            {
                Front->nextAddress = node;
            }
        }
        else
        {
            student* tempFront = Front;
            while(tempFront)
            {
                if(tempFront->nextAddress->priority >= node->priority)
                {
                    node->nextAddress = tempFront->nextAddress;
                    tempFront->nextAddress = node;
                    break;
                }
                else if(tempFront->nextAddress->nextAddress == NULL)
                {
                    tempFront->nextAddress->nextAddress = node;
                    break;
                }
                else
                {
                    tempFront = tempFront->nextAddress;
                }
            }
        }
        Limit++;
    }
}

bool isEmpty()
{
    if(Front == NULL)
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
        Front = Front->nextAddress;
        Limit--;
    }
}

student* FrontReturner()
{
    return Front;
}

void Display()
{
    if(isEmpty())
    {
        cout<<"Data in List"<<endl;
        student* tempFront = Front;
        while(tempFront)
        {
            cout<<tempFront->reg<<endl;
            tempFront = tempFront->nextAddress;
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
    Display();

    deQueue();
    Display();

    if(isEmpty())
    {
        student* frontAddress = FrontReturner();
        cout<<"Front value is: "<<frontAddress->reg;
    }
}

