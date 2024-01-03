#include<iostream>

using namespace std;

struct student
{
    int regNo;
    string name,branch;
    float cgpa;
};

student s[50] = {
    {117,"saad","bscs",1.0},
    {115,"sammer","bscs",2.0},
    {98,"ateeb","bscs",3.0},
    {109,"mohaimin","bscs",4.0},
    {99,"mahad","bscs",2.0},
    {143,"ibrahim","bscs",1.0},
    {77,"danish","bscs",3.0},
    {129,"hassan","bscs",2.0},
    {140,"najam","bscs",3.0},
    {116,"ramish","bscs",1.0},
    {111,"ahmed","bscs",2.0},
    {133,"ali","bscs",3.0},
    {100,"saad","bscs",2.0},
    {128,"maryam","bscs",1.0},
    {132,"minahil","bscs",2.0},
    {261,"hania","bscs",1.0},
    {131,"aala","bscs",3.0},
    {204,"arooba","bscs",2.0},
    {105,"bakar","bscs",3.0},
    {118,"saud","bscs",3.0},
    {136,"abdullah","bscs",3.0},
    {208,"arslan","bscs",2.0},
    {212,"ahmad","bscs",2.0},
    {113,"wahid","bscs",2.0},
    {112,"ahad","bscs",1.0},
    {220,"uswa","bscs",1.0},
    {174,"adeena","bscs",2.0},
    {106,"abdullah","bscs",2.0},
    {178,"subhan","bscs",2.0},
    {156,"adeel","bscs",3.0},
    {154,"ayan","bscs",3.0},
    {148,"malik","bscs",3.0},
    {157,"sehar","bscs",3.0},
    {153,"mouzama","bscs",3.0},
    {150,"hamna","bscs",3.0},
    {243,"eman","bscs",3.0},
    {112,"fatima","bscs",3.0},
    {138,"shahzaib","bscs",3.0},
    {108,"umar","bscs",3.0},
    {110,"kamran","bscs",3.0},
    {141,"abdul","bscs",3.0},
    {197,"mateen","bscs",4.0},
    {222,"hussain","bscs",1.0},
    {107,"ahmad","bscs",2.0},
    {158,"umar","bscs",3.0},
    {85,"muhannad","bscs",3.0},
    {66,"zain","bscs",2.0},
    {21,"hussnain","bscs",3.0},
    {65,"asim","bscs",2.0},
    {58,"tabish","bscs",3.0},
};

void insertInRecord()
{
    for(int i=0;i<50;i++)
    {
        cout<<"Enter Reg number: ";
        cin>>s[i].regNo;
        cout<<"Enter Name: ";
        cin>>s[i].name;
        cout<<"Enter Branch: ";
        cin>>s[i].branch;
        cout<<"Enter CGPA: ";
        cin>>s[i].cgpa;
    }
}

void linearSearch()
{
    int regNo;
    cout<<"Enter Reg number to Search: ";
    cin>>regNo;

    for(int i=0;i<50;i++)
    {
        if(regNo==s[i].regNo)
        {
            cout<<"Reg Number: "<<s[i].regNo<<endl;
            cout<<"Name: "<<s[i].name<<endl;
            cout<<"Branch: "<<s[i].branch<<endl;
            cout<<"CGPA: "<<s[i].cgpa<<endl;
        }
    }
}

void bubbleSort()
{
    for(int i=0;i<50;i++)
    {
        for(int j=0;j<49-i;j++)
        {
            if(s[j].regNo > s[j+1].regNo)
            {
                int tempRegNo;
                string tempName,tempBranch;
                float tempCgpa;

                tempRegNo = s[j].regNo;
                s[j].regNo = s[j+1].regNo;
                s[j+1].regNo = tempRegNo;

                tempName = s[j].name;
                s[j].name = s[j+1].name;
                s[j+1].name = tempName;

                tempBranch = s[j].branch;
                s[j].branch = s[j+1].branch;
                s[j+1].branch = tempBranch;

                tempCgpa = s[j].cgpa;
                s[j].cgpa = s[j+1].cgpa;
                s[j+1].cgpa = tempCgpa;

            }
        }
    }
}

void Display()
{
    cout<<"\nData of Students\n";
    for(int i=0;i<50;i++)
    {
        cout<<"Reg Number: "<<s[i].regNo<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Branch: "<<s[i].branch<<endl;
        cout<<"CGPA: "<<s[i].cgpa<<endl;
    }
}

void binarySearch()
{
    int regNo;
    cout<<"Enter Reg number to Search: ";
    cin>>regNo;

    int start = 0, last = 50,mid;
    while(start<last)
    {
        mid = (start + last)/2;
        if(regNo == s[mid].regNo)
        {
            cout<<"Reg Number: "<<s[mid].regNo<<endl;
            cout<<"Name: "<<s[mid].name<<endl;
            cout<<"Branch: "<<s[mid].branch<<endl;
            cout<<"CGPA: "<<s[mid].cgpa<<endl;
            break;
        }
        else if(regNo > s[mid].regNo)
        {
            start = mid + 1;
        }
        else if(regNo < s[mid].regNo)
        {
            last = mid;
        }
    }
}

void insertionSort()
{
    for(int i=1;i<50;i++)
    {
        float cgpa = s[i].cgpa;
        string name = s[i].name;
        string branch = s[i].branch;
        int regNo = s[i].regNo;
        int j = i-1;
        while(j>=0 && cgpa > s[j].cgpa)
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1].cgpa = cgpa;
        s[j+1].name = name;
        s[j+1].branch = branch;
        s[j+1].regNo = regNo;
    }
}

int main()
{
    linearSearch();

    bubbleSort();
    Display();

    binarySearch();

    insertionSort();
    Display();
}
