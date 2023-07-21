#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream write;
    ifstream read;

    int i=0;
    int n=0;

    while(n!=5)
    {
    cout<<"1. Read Todos\n2. Delete Todos\n3. Update Todo\n4. Create Todos\n5. Exit\n";
    cin>>n;
    if(n>=1&&n<=4)
    {
        string todos[10];
        read.open("todos.txt");
        i=0;
        while(read.eof() == 0)
        {
            getline(read , todos[i]);
            i++;
        }
        if(n>=1&&n<=3)
        {
            i=0;
            while(todos[i] != "")
            {
                cout<<i+1<<". "<<todos[i]<<endl;
                i++;
            }
        }

        if(n==2)
        {
            i=0;
            int dlt;
            cout<<"Which one you want to delete"<<endl;
            cin>>dlt;
            dlt = dlt-1;
            while(todos[i] != "")
            {
                if(i==dlt)
                {
                    while(todos[i]!="")
                    {
                        todos[i] = todos[i+1];
                        i++;
                    }
                }
                i++;
            }
        }

        else if(n==3)
        {
            int upd;
            string updTodo;
            cout<<"Which todo you want to update: ";
            cin>>upd;
            upd = upd-1;
            cout<<"Write updated todo: ";
            cin.ignore();
            getline(cin,updTodo);
            i=0;
            while(todos[i] != "")
            {
                if(i==upd)
                {
                    todos[i]=updTodo;
                }
                i++;
            }
        }
        else if(n==4)
        {
            i=0;
            string add;
            cout<<"Write Todo: ";
            cin.ignore();
            getline(cin,add);
            while(todos[i]!="")
            {
                i++;
            }
            while(todos[i]=="")
            {
                todos[i] = add;
                break;
                i++;
            }
        }

        if(n>=2&&n<=4)
        {
            i=0;
            cout<<"\nNew todos are\n";
            while(todos[i] != "")
            {
                cout<<i+1<<". "<<todos[i]<<endl;
                i++;
            }
        }

        read.close();

        if(n>=2&&n<=4)
        {
            write.open("todos.txt");
            i=0;
            while(todos[i] != "")
            {
                write<<todos[i]<<endl;
                i++;
            }
            write.close();
        }
    }
    else if(n==5)
    {
        cout<<"Thank you for using our services";
    }
    else
    {
        cout<<"Invalid Press!!!\n";
    }
    }
}
