#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,disc;
    float s1,s2;
    cout<<"Enter Three Numbers to Solve Quadratic Equation"<<endl;
    cin>>a>>b>>c;
    disc=(b*b)-4*a*c;

    if(disc==0){
        s1 = -b/(2*a);
        cout<<"Solution of this Quadratic Equation is = "<<s1<<endl;
    }
    else if(disc>0){
        s1 = (-b+sqrt(disc))/(2*a);
        s2 = (-b-sqrt(disc))/(2*a);
        cout<<"First Solution = "<<s1<<endl;
        cout<<"Second Solution = "<<s2<<endl;
    }
    else {
        cout<<"Solution is Imaginary"<<endl;
    }
    cout<<"Press any Key to Exit";
    getch();
}
