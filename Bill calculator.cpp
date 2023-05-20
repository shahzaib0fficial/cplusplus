#include<iostream>
using namespace std;

struct Electricity{
	int Current_reading, Previous_reading, Consumer_ID, Previous_Bill;
	float  Current_Bill;
	char Previous_Bill_Status;
};

int Bill_Calculator(Electricity e[], int sha_n){
	int sha_Units[sha_n];
	float sha_sum=0,sha_avg, sha_unitsAvg, sha_unitsSum=0;
	for(int i=0;i<sha_n;i++){
	    e[i].Current_Bill = 0;
		//sha_Units = 0;
		sha_Units[i] = e[i].Current_reading - e[i].Previous_reading;
		if(sha_Units[i] <= 85){
			e[i].Current_Bill = sha_Units[i]*7.5;
		}
		else if(sha_Units[i] > 85 && sha_Units[i]<=185){
			e[i].Current_Bill = sha_Units[i]*13;
		}
		else if(sha_Units[i] > 185 && sha_Units[i]<=400){
			e[i].Current_Bill = sha_Units[i]*22;
		}
		else{
			e[i].Current_Bill = sha_Units[i]*33;
		}
		
		if(e[i].Previous_Bill_Status == 'N' || e[i].Previous_Bill_Status == 'n'){
			e[i].Current_Bill = e[i].Current_Bill + e[i].Previous_Bill;
		}
		cout<<i+1<<" Bill is: "<<e[i].Current_Bill<<endl;
		sha_sum = sha_sum + e[i].Current_Bill;
		sha_unitsSum = sha_unitsSum + sha_Units[i];
	}
	sha_avg = sha_sum/sha_n;
	sha_unitsAvg = sha_unitsSum/sha_n;
	cout<<"Average Bill of all Consumers: "<<sha_avg<<endl;
	cout<<"Average Units of all Consumers: "<<sha_unitsAvg<<endl;
	int sha_max = sha_Units[0],sha_min = sha_Units[0], max_index=0, min_index=0;
	for(int i=0;i<sha_n;i++){
		if(sha_max < sha_Units[i]){
			sha_max = sha_Units[i];
			max_index = i;
		}
		if(sha_min > sha_Units[i]){
			sha_min = sha_Units[i];
			min_index = i;
		}
	}
	cout<<"Maximum Bill user Detail"<<endl;
	cout<<"ID: "<<e[max_index].Consumer_ID<<endl;
	cout<<"Bill: "<<e[max_index].Current_Bill<<endl;
	
	cout<<"Minimum Bill user Detail"<<endl;
	cout<<"ID: "<<e[min_index].Consumer_ID<<endl;
	cout<<"Bill: "<<e[min_index].Current_Bill<<endl;
}

int main(){
	int sha_n;
	cout<<"How many User's data you want to process: ";
	cin>>sha_n;
	Electricity e[sha_n];
	
	for(int i=0;i<sha_n;i++){
		cout<<i+1<<" Consumer ID: ";
		cin>>e[i].Consumer_ID;
		cout<<i+1<<" Previous Reading: ";
		cin>>e[i].Previous_reading;
		cout<<i+1<<" Current Reading: ";
		cin>>e[i].Current_reading;
		cout<<i+1<<" Enter your Previous Bill: ";
		cin>>e[i].Previous_Bill;
		cout<<i+1<<" Have You Paid Previous Bill?(Y/N): ";
		cin>>e[i].Previous_Bill_Status;
	}
	
	Bill_Calculator(e,sha_n);
}
