#include<iostream>
using namespace std;
int main(){
	int year;
	float income=0,expenses=0,savings=0;
	int choice;
	float amount;
	cout<<"Enter year:";
	cin>>year;
	while(true){
		cout<<"Budget Menu"<<endl;
		cout<<"press 1 add Income"<<endl;
		cout<<"press 2 add expense"<<endl;
		cout<<"press 3 show Budget Summary"<<endl;
		cout<<"press 4 exit"<<endl;
		cout<<"Enter your choice:";
		cin>>choice;
		if(choice==1){
			cout<<"Enter income amount:";
			cin>>amount;
			income=income+amount;
		}
		else if(choice==2){
			cout<<"Enter expense amount:";
			cin>>amount;
			expenses=expenses+amount;
		}
		else if(choice==3){
			savings=income-expenses;
			cout<<"Budget Summary"<<endl;
			cout<<"Year:"<<year<<endl;
			cout<<"Total Income:"<<income<<endl;
			cout<<"Total expenses:"<<expenses<<endl;
			cout<<"Saving:"<<savings<<endl;
		}
		else if(choice==4){
			cout<<"Exiting program"<<endl;
			break;
		}
		else{
			cout<<"Invalid input"<<endl;
		}
	}
	return 0;
}
