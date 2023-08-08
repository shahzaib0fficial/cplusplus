#include<iostream>
#include<nlohmann/json.hpp>
#include<fstream>

using namespace std;
using namespace nlohmann;

class Managment
{
public:
    virtual void execute() = 0;
    string names[10],numbers[10][10];
    int numberSize=0,contactSize=0;
    json contacts;
    Managment()
    {
        ifstream read("data.json");
        contacts = json::parse(read);

        contactSize = contacts["Names"].size();
        for(int i = 0;i<contactSize;i++)
        {
            names[i] = contacts["Names"][i];

            numberSize = contacts["Numbers"][i].size();
            for(int j=0;j<numberSize;j++)
            {
                numbers[i][j] = contacts["Numbers"][i][j];
            }
        }
    }

    int searchBy,found = 0,index = -1;
    string searchMe;
    int searching()
    {
        cout<<"1. Search by Name\n2. Search by Number\n";
        cin>>searchBy;
        while(cin.fail()||(!(searchBy>=1&&searchBy<=2)))
        {
            searchBy = checkValid(searchBy);
        }
        if(searchBy == 1)
        {
            cout<<"Enter Name: ";
            cin.ignore();
            getline(cin , searchMe);
            int i=0;
            while(names[i] != "")
            {
                if(searchMe == names[i])
                {
                    cout<<names[i];
                    int j=0;
                    while(numbers[i][j]!="")
                    {
                        cout<<" : "<<numbers[i][j];
                        index = i;
                        j++;
                    }
                    cout<<endl;
                    found++;
                    break;
                }
                i++;
            }
        }
        else if(searchBy == 2)
        {
            cout<<"Enter Number: ";
            cin.ignore();
            getline(cin , searchMe);
            int i=0;
            int k=0;
            while(numbers[i][k]!="")
            {
                int j=0;
                while(numbers[i][j]!="")
                {
                    if(searchMe == numbers[i][j])
                    {
                        cout<<names[i];
                        int k=0;
                        while(numbers[i][k]!="")
                        {
                           cout<<" : "<<numbers[i][k];
                           k++;
                        }
                        index = i;
                        found++;
                        break;
                    }
                    j++;
                }
                i++;
            }
        }
        if(found==0)
        {
            cout<<"Contact Not Found\n";
        }
        return index;
    }
    void writeInFile()
    {
        ofstream write("data.json");
        contacts["Names"] = {};
        contacts["Numbers"] = {};
        int i=0;
        while(names[i] != "")
        {
            contacts["Names"][i] = names[i];
            int j=0;
            while(numbers[i][j] != "")
            {
                contacts["Numbers"][i][j] = numbers[i][j];
                j++;
            }
            i++;
        }
        write<<"{\"Names\" : "<<contacts["Names"]<<",\"Numbers\" : "<<contacts["Numbers"]<<"}";
        write.close();
    }

    void emptyContacts()
    {
        cout<<"You Won't have any Contacts"<<endl;
    }
    int checkValid(int value)
    {
        cin.clear();
        cin.ignore();
        cout<<"Enter valid Input: ";
        cin>>value;
        return value;
    }
};

class createContact : public Managment
{
public:
    int yn=1;
    void execute()
    {
        cout<<"Enter Name: ";
        cin.ignore();
        getline(cin,names[contactSize]);
        int i=0;
        while(yn==1)
        {
            cout<<"Enter Number: ";
            cin>>numbers[contactSize][i];
            i++;
            cout<<"Enter 1 to Add more Number with this Name(Enter any other character to exit)";
            cin>>yn;
        }
        writeInFile();
    }
};

class deleteContact : public Managment
{
public:
    int deleteChoice,deleteMe;
    void execute()
    {
        if(names[0]=="")
        {
            emptyContacts();
        }
        else
        {
            index = searching();
            if(index != -1)
            {
                cout<<"\n1. Delete Whole Contact\n2. Delete Specific Number\n";
                cin>>deleteChoice;
                while(cin.fail()||(!(deleteChoice>=1&&deleteChoice<=2)))
                {
                    deleteChoice = checkValid(deleteChoice);
                }
                if(deleteChoice == 1)
                {
                    while(names[index] != "")
                    {
                        names[index] = names[index+1];
                        int i=0;
                        while(numbers[index][i]!="")
                        {
                            numbers[index][i] = numbers[index+1][i];
                            i++;
                        }
                        index++;
                    }
                }
                else if(deleteChoice == 2)
                {
                    cout<<"Which one you want to delete"<<endl;
                    int i=0;
                    while(numbers[index][i]!="")
                    {
                        cout<<i+1<<". "<<numbers[index][i]<<endl;
                        i++;
                    }
                    cin>>deleteMe;
                    while(cin.fail()||(!(deleteMe>=1&&deleteMe<=i)))
                    {
                        deleteMe = checkValid(deleteMe);
                    }
                    deleteMe--;
                    while(numbers[index][deleteMe]!="")
                    {
                        numbers[index][deleteMe] = numbers[index][deleteMe+1];
                        deleteMe++;
                    }
                    if(numbers[index][0]=="")
                    {
                        while(names[index] != "")
                        {
                            names[index] = names[index+1];
                            int i=0;
                            while(numbers[index+1][i]!="")
                            {
                                numbers[index][i] = numbers[index+1][i];
                                i++;
                            }
                            index++;
                        }
                    }
                }
            }
            writeInFile();
        }
    }
};

class updateContact : public Managment
{
public:
    int update,updateNumber;
    int index;
    void execute()
    {
        if(names[0]=="")
        {
            emptyContacts();
        }
        else
        {
            index = searching();
            if(index != -1)
            {
                cout<<"\n1. Update Name\n2. Update Number\n";
                cin>>update;
                while(cin.fail()||(!(update>=1&&update<=2)))
                {
                    update = checkValid(update);
                }
                if(update == 1)
                {
                    cout<<"Enter Updated Name: ";
                    cin.ignore();
                    getline(cin,names[index]);
                }
                else if(update == 2)
                {
                    cout<<"Which number you want to update"<<endl;
                    int numberSize = contacts["Numbers"][index].size();
                    for(int i=0;i<numberSize;i++)
                    {
                        cout<<i+1<<". "<<numbers[index][i]<<endl;
                    }
                    cin>>updateNumber;
                    while(cin.fail()||(!(updateNumber>=1&&updateNumber<=numberSize)))
                    {
                        updateNumber = checkValid(updateNumber);
                    }
                    updateNumber--;
                    cout<<"Enter Updated Number: ";
                    cin>>numbers[index][updateNumber];
                }
            }
            writeInFile();
        }
    }
};

class searchContact : public Managment
{
public:
    void execute()
    {
        if(names[0]=="")
        {
            emptyContacts();
        }
        else
        {
            searching();
        }
    }
};

class readAllContact : public Managment
{
public:
    void execute()
    {
        if(names[0]=="")
        {
            emptyContacts();
        }
        else
        {
            int i=0;
            while(names[i] != "")
            {
                cout<<names[i];
                int j=0;
                while(numbers[i][j] != "")
                {
                    cout<<" : "<<numbers[i][j];
                    j++;
                }
                cout<<endl;
                i++;
            }
        }
    }
};

int main()
{
    ifstream read("data.json");
    string fileCheck;
    getline(read,fileCheck);
    if(fileCheck=="")
    {
        ofstream write("data.json");
        write<<"{\"Names\" : [],\"Numbers\" : []}";
        write.close();
    }
    read.close();

    int operation=0;
    while(operation != 6)
    {
        Managment* management;
        cout<<"1. Create Contact\n2. Delete Contact\n3. Update Contact\n4. Search Contact\n5. Read All Contacts\n6. Exit\n";
        cin>>operation;
        while(cin.fail()||(!(operation>=1&&operation<=6)))
        {
            operation = management->checkValid(operation);
        }

        if(operation == 1)
        {
            createContact create;
            management = &create;
            management->execute();
        }
        else if(operation == 2)
        {
            deleteContact dlet;
            management = &dlet;
            management->execute();
        }
        else if(operation == 3)
        {
            updateContact update;
            management = &update;
            management->execute();
        }
        else if(operation == 4)
        {
            searchContact sarch;
            management = &sarch;
            management->execute();
        }
        else if(operation == 5)
        {
            readAllContact readAll;
            management = &readAll;
            management->execute();
        }
        if(operation!=6)
        {
            cout<<endl;
            system("Pause");
            system("CLS");
        }
    }
    cout<<"\nThank You for using our Service";
}
