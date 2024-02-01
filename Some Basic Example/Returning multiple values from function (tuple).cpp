//While C++ does not have an official way to return multiple values from a function, one can make use of the std::pair, std::tuple, or a local struct to return multiple values.

#include<iostream>
#include<tuple>
using namespace std;

tuple<int , int> swapMe(int a , int b){
    //cout<<"Before Swaping a = "<<a<<" b = "<<b<<endl;
    int temp;
    temp = a;
    a=b;
    b = temp;
    //cout<<"After Swaping a = "<<a<<" b = "<<b;
    return {a,b};
}
int main(){
    int a,b;
    cout<<"Enter Two Values : ";
    cin>>a>>b;
    cout<<"Before Swaping a = "<<a<<" b = "<<b<<endl;
    auto [x , y] = swapMe(a,b);
    a=x;
    b=y;
    cout<<"After Swaping a = "<<a<<" b = "<<b;
}



/*
#include <iostream>
#include <tuple>
using namespace std;
tuple<int, float, string> foo()
{
  return {128, 3.142, "Hello"};
}
int main()
{
  auto [value1, value2, value3] = foo();
  cout << value1 << ", " << value2 << ", " << value3 << endl;
}
*/
