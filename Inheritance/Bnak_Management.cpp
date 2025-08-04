#include<iostream>
using namespace std;

class Account{
	string customerName;
	int accountNo;
	string accType;
	int balance;
	bool provide_check_book;

	public:
	void show_balance(){
		cout<<"Your current balance is : "<<balance<<endl;
	}

	void deposit(){
		int deop;
		cout<<"Enter the amount you want to deposite : "<<endl;
		cin>>depo;
		balance+=depo;
		cout<<"Your current balance is : "<<balance<<endl;
	}
	
	void provide_cheque_book(){
		cout<<"Enter your account type : "<<endl;
		string acc;
		cin>>acc;
		if(acc=="Current")
			cout<<"We provide you a cheque book."<<endl;
		else
			cout<<"Sorry we don't provide you checque book."<<endl;
	}
};

class cur_acct: public Account{
	int interest=0;
	int minBalance = 5000;
	float serviceCharge = 0.3;
	public:
	void intrest_we_provide(){
		cout<<"Sorry we don't provide intrest."<<endl;
	}
	
	void min_Balance(){
		if(balance<minBalance){
			cout<<"Your Balance is low than min balance. Please deopsite"<<endl;
			balance*=serviceCharge;
		}else{
			deposite(mon);
		}
	}
};

class sav_acct: public Account{
	int intrestRate = 5;
	public:
	
	void withdrawal(){
		cout<<"Enter amount to withdrawal"<<endl
		cin>>wit;
		balance+=wit;
	}

	void intrest_Gain(){
		cout<<"Your Current balance is : "<<balance;
		int intrest_G = balance*intrestRate/100;
		cout<<"Intrest gained is : "<<intrest_G<<endl;
		balance+=intrest_G;
		co
