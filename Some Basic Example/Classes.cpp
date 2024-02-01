#include <iostream>

using namespace std;

class Chef
{
    public:
    void Pizza()
    {
        cout<<"A Chef Can Make Pizza."<<endl;
    }
    void Lazania()
    {
        cout<<"A Chef Can Make Lazania."<<endl;
    }
    void Speciality()
    {
        cout<<"A Chef Can Make BBQ's."<<endl;
    }
};

class PakistaniChef : public Chef
{
    public:
    void Speciality()
    {
        cout<<"A Chef Can Make Gossips";
    }
} ;

int main()
{
    Chef chef1;
    chef1.Lazania();
    chef1.Speciality();

    PakistaniChef chef2;
    chef2.Pizza();
    chef2.Speciality();
}
