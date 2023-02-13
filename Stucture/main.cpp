#include<iostream>
using namespace std;

 struct {
     string name = "Shahzaib"; //member of stucture
     int age = 18;
     string friends[3] = {"AbdulAleem" , "HuzaifaBinNaeem" , "HussainButt"};
 } info;

 int main(){
     cout<<info.name<<endl;
     cout<<info.age<<endl;
     cout<<info.friends[0]<<endl;
     cout<<info.friends[1]<<endl;
     cout<<info.friends[2]<<endl;
 }


/*
 int main(){
      struct {
     string name = "Shahzaib";
     int age = 18;
     string friends[3] = {"AbdulAleem" , "HuzaifaBinNaeem" , "HussainButt"};
 } info;
     cout<<info.name<<endl;
     cout<<info.age<<endl;
     cout<<info.friends[0]<<endl;
     cout<<info.friends[1]<<endl;
     cout<<info.friends[2]<<endl;
 }
*/

/*
struct {
     string name = "Shahzaib";
     int age = 18;
     string friends[3] = {"AbdulAleem" , "HuzaifaBinNaeem" , "HussainButt"};
 } info;

int information(){
     cout<<info.name<<endl;
     cout<<info.age<<endl;
     cout<<info.friends[0]<<endl;
     cout<<info.friends[1]<<endl;
     cout<<info.friends[2]<<endl;
}

 int main(){
     information();
 }
*/
