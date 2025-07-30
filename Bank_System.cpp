#include<iostream>
#include<vector>
#include <string>
using namespace std;

const int no=0;
class Bank{
	string userName;
	int accNo;
	string accType;
	int balance;

	public:
	Bank(){
		cout<<"Enter user name :"<<endl;
		cin>>userName;
		accNo=no+1;
		cout<<"Enter account type : "<<endl;
		cin>>accType;
		balance=0;
	}
	void deposite();
	void withdraw(int);
	void display();
};

void Bank::deposite(){
	cout<<"Enter amount to deposite :"<<endl;
	int amt=0;
	cin>>amt;
	balance+=amt;
	cout<<"Your current balance is : "<<balance<<endl;
}

void Bank::withdraw(int amt){
	balance-=amt;
	cout<<"Amount "<<amt<<" withdrawed sucessfully."<<endl;
	cout<<"Your current balance is  :"<<balance<<endl;
}

void Bank::display(){
	cout<<"Username : "<<userName<<endl;
	cout<<"User Account no : "<<accNo<<endl;
	cout<<"User Account type :"<<accType<<endl;
	cout<<"User Balance is : "<<balance<<endl;
}

int main(){
	Bank b;
	
	int x;

	do{
	cout<<"\tWelcome to Bank\n";
	cout<<"Enter choice : "<<endl;
	cout<<"1. Deposite amount to bank"<<endl;
	cout<<"2. Withdraw amount from Bank"<<endl;
	cout<<"3. Display status of accout"<<endl;
    cout<<"4.Exit"<<endl;
	cin>>x;
	switch(x){
		case 1:b.deposite();break;
		case 2:{
			int am=0;
			cout<<"Enter the amount to withdraw"<<endl;
			cin>>am;
			b.withdraw(am);
			break;
		}
		case 3:b.display();break;
		case 4:break;
		default:
			cout<<"Try again "<<endl;
	}
}while(x!=4);
	return 0;
}
