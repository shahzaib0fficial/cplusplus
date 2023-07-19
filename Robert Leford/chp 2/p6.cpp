/*On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, and then displays this
value converted to these four other monetary units*/
#include<iostream>
using namespace std;

int main()
{
    float dollar,franc,deutschemark,yen;
    cout<<"Enter amount in dollar: ";
    cin>>dollar;
    franc = dollar*0.172;
    deutschemark = dollar*0.584;
    yen = dollar*0.00955;
    cout<<"In French franc: "<<franc<<endl;
    cout<<"In German deutschemark: "<<deutschemark<<endl;
    cout<<"In Japanese yen: "<<yen;
}
