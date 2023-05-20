#include<iostream>
using namespace std;

struct Electricity{
	int Current_reading, Previous_reading, Consumer_ID, Previous_Bill;
	float  Current_Bill;
	char Previous_Bill_Status;
};

int Bill_Calculator(Electricity e[], int n){
	int Units[n];
	float sum=0,avg, unitsAvg, unitsSum=0;
	for(int i=0;i<n;i++){
	    e[i].Current_Bill = 0;
		Units[i] = e[i].Current_reading - e[i].Previous_reading;
		if(Units[i] <= 85){
			e[i].Current_Bill = Units[i]*7.5;
		}
		else if(Units[i] > 85 && Units[i]<=185){
			e[i].Current_Bill = Units[i]*13;
		}
		else if(Units[i] > 185 && Units[i]<=400){
			e[i].Current_Bill = Units[i]*22;
		}
		else{
			e[i].Current_Bill = Units[i]*33;
		}

		if(e[i].Previous_Bill_Status == 'N' || e[i].Previous_Bill_Status == 'n'){
			e[i].Current_Bill = e[i].Current_Bill + e[i].Previous_Bill;
		}
		cout<<i+1<<" Bill is: "<<e[i].Current_Bill<<endl;
		sum = sum + e[i].Current_Bill;
		unitsSum = unitsSum + Units[i];
	}
	avg = sum/n;
	unitsAvg = unitsSum/n;
	cout<<"Average Bill of all Consumers: "<<avg<<endl;
	cout<<"Average Units of all Consumers: "<<unitsAvg<<endl;
	int maxi = Units[0],mini = Units[0], max_index=0, min_index=0;
	for(int i=0;i<n;i++){
		if(maxi < Units[i]){
			maxi = Units[i];
			max_index = i;
		}
		if(mini > Units[i]){
			mini = Units[i];
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
	int n;
	cout<<"How many User's data you want to process: ";
	cin>>n;
	Electricity e[n];

	for(int i=0;i<n;i++){
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

	Bill_Calculator(e,n);
}
