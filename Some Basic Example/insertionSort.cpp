#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {7,6,8,5,2};
    for(int i=1;i<5;i++)
    {
        int value = arr[i];
        int j = i-1;
        while(j>=0 && value < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = value;
    }

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<< " ";
    }
}
