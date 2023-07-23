#include<iostream>
#include<fstream>
#include<nlohmann/json.hpp>
#include<string>
using namespace std;
using namespace nlohmann;

int checkValidInput(int value,bool condition)
{
    while(cin.fail()||(condition==false))
        {
            cin.clear();
            cin.ignore();
            cout<<"Enter valid Input: ";
            cin>>value;
            condition = true;
        }
        return value;
}

int main()
{
    ofstream write;
    ifstream read;

    read.open("todos.json");
    string check;
    getline(read,check);
    if(!read ||(check==""))
    {
        write.open("todos.json");
        write<<"{\"todos\" : []}";
        write.close();
    }
    read.close();

    int i=0;
    int repeat=0;

    while(repeat!=5)
    {
    cout<<"1. Read Todos\n2. Delete Todos\n3. Update Todo\n4. Create Todos\n5. Exit\n";
    cin>>repeat;
    while(cin.fail()||(!(repeat>0&&repeat<=5)))
    {
        if(!(repeat>0&&repeat<=5))
        {
            repeat = checkValidInput(repeat,false);
        }
        else
        {
            repeat = checkValidInput(repeat,true);
        }
    }
    if(repeat>=1&&repeat<=4)
    {
        string todos[10];
        read.open("todos.json");
        json data;
        data = json::parse(read);
        int todosSize = data["todos"].size();
        i=0;
        for(i=0;i<=todosSize-1;i++)
        {
            todos[i] = data["todos"][i];
            //cout<<todos[i]<<endl;
        }

    if(todos[0]==""&&(repeat>=1&&repeat<=3))
        {
            cout<<"You Won't have any Todos"<<endl;
        }
    else
        {
        if(repeat>=1&&repeat<=3)
        {
            i=0;
            while(todos[i] != "")
            {
                cout<<i+1<<") "<<todos[i]<<endl;
                i++;
            }
            cout<<"---------------------------"<<endl;
        }

        if(repeat==2)
        {
            i=0;
            int dlt;
            cout<<"Which one you want to delete"<<endl;
            cin>>dlt;
            dlt = dlt-1;
            while(dlt>=todosSize||dlt<0)
            {
                dlt = checkValidInput(dlt,false);
                dlt = dlt-1;
            }
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

        else if(repeat==3)
        {
            int upd;
            string updTodo;
            cout<<"Which todo you want to update: ";
            cin>>upd;
            upd = upd-1;
            while(upd>=todosSize||upd<0)
            {
                upd = checkValidInput(upd,false);
                upd = upd-1;
            }
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
        }
        if(repeat==4)
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

        if(repeat>=2&&repeat<=4)
        {
            if(todos[0]!="")
            {
                i=0;
                cout<<"\nNew todos are\n";
                while(todos[i] != "")
                {
                    cout<<i+1<<") "<<todos[i]<<endl;
                    i++;
                }
                cout<<"---------------------------"<<endl;
            }
        }

        read.close();

        if(repeat>=2&&repeat<=4)
        {
            write.open("todos.json");
            data["todos"] = {};
            i=0;
            while(todos[i] != "")
            {
                data["todos"][i] = todos[i];
                i++;
            }
            write<<"{\"todos\":"<<data["todos"]<<"}";
            write.close();
        }
        system("PAUSE");
        system("CLS");
    }
    else if(repeat==5)
    {
        cout<<"Thank you for using our services";
    }
    }
}
