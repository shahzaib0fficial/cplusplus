#include<iostream>
using namespace std;

struct employee
{
    int id;
    string name;

    employee* prev;
    employee* next;
};

employee* Head = NULL;
employee* Tail = NULL;

void insertInList()
{
    employee* node = new employee;
    cout<<"Enter employee id: ";
    cin>>node->id;
    cout<<"Enter employee name: ";
    cin>>node->name;

    node->next = node->prev = NULL;
    if(Head == NULL)
    {
        Head = node;
        Tail = node;
    }
    else
    {
        Tail->next = node;
        node->prev = Tail;
        Tail = node;
    }
}

void searchInList()
{
    if(Head == NULL)
    {
        cout<<"No Record in List"<<endl;
    }
    else
    {
        int id;
        cout<<"Enter id you want to search: ";
        cin>>id;
        employee* tempHead = Head;
        while(tempHead)
        {
            if(id == tempHead->id)
            {
                cout<<"Employee Data"<<endl;
                cout<<"Employee ID: "<<tempHead->id<<endl;
                cout<<"Employee Name: "<<tempHead->name<<endl;
                break;
            }
            else if(tempHead->next == NULL)
            {
                cout<<"ID not Found"<<endl;
                break;
            }
            else
            {
                tempHead = tempHead->next;
            }
        }
    }
}

void updateInList()
{
    if(Head == NULL)
    {
        cout<<"No Record in List"<<endl;
    }
    else
    {
        int id;
        cout<<"Enter id you want to update: ";
        cin>>id;
        employee* tempHead = Head;
        while(tempHead)
        {
            if(id == tempHead->id)
            {
                cout<<"Employee Data"<<endl;
                cout<<"Enter Employee ID: "<<endl;
                cin>>tempHead->id;
                cout<<"Employee Name: "<<endl;
                cin>>tempHead->name;
                break;
            }
            else if(tempHead->next == NULL)
            {
                cout<<"ID not Found"<<endl;
                break;
            }
            else
            {
                tempHead = tempHead->next;
            }
        }
    }
}

void deleteInList()
{
    if(Head == NULL)
    {
        cout<<"No Record in List"<<endl;
    }
    else
    {
        int id;
        cout<<"Enter id you want to delete: ";
        cin>>id;

        if(id == Head->id)
        {
            if(Tail == Head)
            {
                Head = Tail = NULL;
            }
            else
            {
                Head = Head->next;
                Head->prev = NULL;
            }
        }
        else if(id == Tail->id)
        {
            Tail = Tail->prev;
            Tail->next = NULL;
        }
        else
        {
            employee* tempHead = Head;
            while(tempHead)
            {
                if(id == tempHead->id)
                {
                    tempHead->prev->next = tempHead->next;
                    tempHead->next->prev = tempHead->prev;
                    break;
                }
                else if(tempHead->next == NULL)
                {
                    cout<<"ID not Found"<<endl;
                    break;
                }
                else
                {
                    tempHead = tempHead->next;
                }
            }
        }
    }
}

void Display()
{
    if(Head == NULL)
    {
        cout<<"\nNo Record in List\n"<<endl;
    }
    else
    {
        employee* tempHead = Head;
        cout<<"\nEmployee Data"<<endl;
        while(tempHead)
        {
            cout<<"Id: "<<tempHead->id<<endl;
            cout<<"Name: "<<tempHead->name<<endl;
            tempHead = tempHead->next;
        }
        cout<<"\n";
    }
}

int main()
{
    int choose;
    while(true)
    {
        cout<<"Choose any one\n1. Insert Data\n2. Search Data\n3. Update Data\n4. Delete Data\n5. Display\nPress any other Key to Exit\n";
        cin>>choose;
        if(choose == 1)
        {
            insertInList();
        }
        else if(choose == 2)
        {
            searchInList();
        }
        else if(choose == 3)
        {
            updateInList();
        }
        else if(choose == 4)
        {
            deleteInList();
        }
        else if(choose == 5)
        {
            Display();
        }
        else
        {
            break;
        }
    }
}
