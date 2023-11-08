#include <iostream>

using namespace std;

struct department
{
    int reg;

    department* nextAddress;
};

department* bscsHead = NULL;
department* bsaiHead = NULL;

department* insertAtLast(department* Head)
{
    department* node = new department;
    cout<<"Enter Reg : ";
    cin>>node->reg;

    node->nextAddress = NULL;

    if(Head == NULL)
    {
        Head = node;
    }
    else
    {
        department* tempHead = Head;
        while(tempHead != NULL)
        {
            if(tempHead->nextAddress == NULL)
            {
                tempHead->nextAddress = node;
                break;
            }
            else
            {
                tempHead = tempHead->nextAddress;
            }
        }
    }
    return Head;
}

department* insertAtStart(department* Head)
{
    department* node = new department;
    cout<<"Enter Reg : ";
    cin>>node->reg;
    node->nextAddress = NULL;

    if(Head != NULL)
    {
        node->nextAddress = Head;
    }

    Head = node;

    return Head;
}

department* insertAfterSpecific(department* Head)
{
    department* node = new department;
    cout<<"Enter Reg : ";
    cin>>node->reg;
    node->nextAddress = NULL;

    int reg;
    cout<<"After which Reg you want to add this Reg : ";
    cin>>reg;

    if(Head->reg == reg)
    {
        node->nextAddress = Head->nextAddress;
        Head->nextAddress = node;
    }
    else
    {
        department* tempHead = Head;
        while(tempHead != NULL)
        {
            if(tempHead->reg == reg)
            {
                node->nextAddress = tempHead->nextAddress;
                tempHead->nextAddress = node;
                break;
            }
            else if(tempHead->nextAddress == NULL)
            {
                cout<<"Reg not Found"<<endl;
                break;
            }
            else
            {
                tempHead = tempHead->nextAddress;
            }
        }
    }

    return Head;
}



department* insertBeforeSpecific(department* Head)
{
    department* node = new department;
    cout<<"Enter Reg : ";
    cin>>node->reg;
    node->nextAddress = NULL;

    int reg;
    cout<<"Before which Reg you want to add this Reg : ";
    cin>>reg;

    if(Head->reg == reg)
    {
        node->nextAddress = Head;
        Head = node;
    }
    else
    {
        department* tempHead = Head;
        while(tempHead != NULL)
        {
            if(tempHead->nextAddress->reg == reg)
            {
                node->nextAddress = tempHead->nextAddress;
                tempHead->nextAddress = node;
                break;
            }
            else if(tempHead->nextAddress->nextAddress == NULL)
            {
                cout<<"Reg not Found"<<endl;
                break;
            }
            else
            {
                tempHead = tempHead->nextAddress;
            }
        }
    }

    return Head;
}

void Search(department* Head)
{
    if(Head == NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    else
    {
        int reg;
        cout<<"Enter Reg you wanna to search : ";
        cin>>reg;

        department* tempHead = Head;
        while(tempHead != NULL)
        {
            if(tempHead->reg == reg)
            {
                cout<<"Reg Found"<<endl;
                break;
            }
            else if(tempHead->nextAddress == NULL)
            {
                cout<<"Reg not Found"<<endl;
                break;
            }
            else
            {
                tempHead = tempHead->nextAddress;
            }
        }
    }
}

void searchDuplicate(department* Head)
{
    if(Head == NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    else
    {
        int repeat = 0;
        int reg;
        cout<<"Enter Reg you wanna to count Repetation : ";
        cin>>reg;

        department* tempHead = Head;
        while(tempHead != NULL)
        {
            if(tempHead->reg == reg)
            {
                repeat++;
                tempHead = tempHead->nextAddress;
            }
            else
            {
                tempHead = tempHead->nextAddress;
            }
        }
        cout<<"This Reg repeats "<<repeat<<" times"<<endl;
    }
}

department* Update(department* Head)
{
    if(Head == NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    else
    {
        int reg;
        cout<<"Enter Reg you wanna to Update : ";
        cin>>reg;

        department* tempHead = Head;
        while(tempHead != NULL)
        {
            if(tempHead->reg == reg)
            {
                cout<<"Enter updated reg : ";
                cin>>tempHead->reg;
                break;
            }
            else if(tempHead->nextAddress == NULL)
            {
                cout<<"Reg not Found"<<endl;
                break;
            }
            else
            {
                tempHead = tempHead->nextAddress;
            }
        }
    }
    return Head;
}

department* Delete(department* Head)
{
    if(Head == NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    else
    {
        int reg;
        cout<<"Enter Reg you wanna to Delete : ";
        cin>>reg;

        if(Head->reg == reg)
        {
            Head = Head->nextAddress;
        }
        else
        {
            department* tempHead = Head;
            while(tempHead != NULL)
            {
                if(tempHead->nextAddress->reg == reg)
                {
                    tempHead->nextAddress = tempHead->nextAddress->nextAddress;
                    break;
                }
                else if(tempHead->nextAddress->nextAddress == NULL)
                {
                    cout<<"Reg not Found"<<endl;
                    break;
                }
                else
                {
                    tempHead = tempHead->nextAddress;
                }
            }
        }
    }
    return Head;
}

void Display(department* Head)
{
    if(Head == NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    else
    {
        department* tempHead = Head;
        while(tempHead != NULL)
        {
            cout<<tempHead->reg<<endl;
            tempHead = tempHead->nextAddress;
        }
    }
}

int main()
{
    //BSCS

    cout<<"BSCS REG"<<endl;

    bscsHead = insertAtLast(bscsHead);
    Display(bscsHead);
    bscsHead = insertAtLast(bscsHead);
    Display(bscsHead);

    bscsHead = insertAtStart(bscsHead);
    Display(bscsHead);
    bscsHead = insertAtStart(bscsHead);
    Display(bscsHead);

    bscsHead = insertAfterSpecific(bscsHead);
    Display(bscsHead);
    bscsHead = insertAfterSpecific(bscsHead);
    Display(bscsHead);

    bscsHead = insertBeforeSpecific(bscsHead);
    Display(bscsHead);
    bscsHead = insertBeforeSpecific(bscsHead);
    Display(bscsHead);

    Search(bscsHead);

    searchDuplicate(bscsHead);

    Update(bscsHead);

    Display(bscsHead);

    Delete(bscsHead);

    Display(bscsHead);

    //BSAI

    cout<<"BSAI REG"<<endl;

    bsaiHead = insertAtLast(bsaiHead);
    Display(bsaiHead);
    bsaiHead = insertAtLast(bsaiHead);
    Display(bsaiHead);

    bsaiHead = insertAtStart(bsaiHead);
    Display(bsaiHead);
    bsaiHead = insertAtStart(bsaiHead);
    Display(bsaiHead);

    bsaiHead = insertAfterSpecific(bsaiHead);
    Display(bsaiHead);
    bsaiHead = insertAfterSpecific(bsaiHead);
    Display(bsaiHead);

    bsaiHead = insertBeforeSpecific(bsaiHead);
    Display(bsaiHead);
    bsaiHead = insertBeforeSpecific(bsaiHead);
    Display(bsaiHead);

    Search(bsaiHead);

    searchDuplicate(bsaiHead);

    Update(bsaiHead);

    Display(bsaiHead);

    Delete(bsaiHead);

    Display(bsaiHead);
}
