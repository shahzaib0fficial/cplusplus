#include<iostream>
using namespace std;

struct sterling
{
	int pounds,shilling,penny;
};

sterling takeAmount()
{
    sterling amount;
    char ch;
    cout<<"Enter First Amount in old-style British format: ";
    cin>>amount.pounds>>ch>>amount.shilling>>ch>>amount.penny;
    return amount;
}

sterling sum(sterling amount1,sterling amount2)
{
    sterling sum;
    char ch = '.';
    sum.pounds = amount1.pounds + amount2.pounds;
    sum.shilling = amount1.shilling + amount2.shilling;
    sum.penny = amount1.penny + amount2.penny;
    return sum;
}

int Display(sterling amount)
{
    char ch = '.';
    cout<<"Amount is: "<<amount.pounds<<ch<<amount.shilling<<ch<<amount.penny<<endl;
}

int main()
{
	sterling amount1,amount2,sumOfAmmount;

    amount1 = takeAmount();
    amount2 = takeAmount();

    sumOfAmmount = sum(amount1,amount2);

    Display(sumOfAmmount);
}
