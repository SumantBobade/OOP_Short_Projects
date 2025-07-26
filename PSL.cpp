#include <iostream>
#include <string>
#include <vector>
using namespace std;

//const m=50;

class Items{
	vector<string> itemName;
	vector<float> itemPrice;
	int count;

	public:
	void CNT(){ count=0;};
	void getItem();
	void displaySum();
	void remove();
	void displayItems();
};

void Items::getItem(){
	cout<<"Enter item name : "<<endl;
	string s="";
	cin>>s;
	itemName.push_back(s);

	cout<<"Enter item price : "<<endl;
	float f=0;
	cin>>f;
	itemPrice.push_back(f);
	count++;
}

void Items::displaySum(){
	float sum=0;
	for(int i=0;i<itemPrice.size();i++){
		sum+=itemPrice[i];
	}
	cout<<"The total price is : "<<sum<<endl;
}

void Items::remove(){
	string s;
	cout<<"Enter the item to remove : "<<endl;
	cin>>s;
	int i=0;
	for(int i=0;i<count;i++){
		if(itemName[i]==s){
			itemName[i]="0";
			itemPrice[i]=0;
		}
	}
}

void Items::displayItems(){
	cout<<"Item name .\t"<<"Item Price ."<<endl;
	for(int i=0;i<itemName.size();i++){
		cout<<"\n"<<itemName[i]<<"\t";
		cout<<itemPrice[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	Items order;
	order.CNT();
	int x;
	do{
		cout<<"\nYou can do the following : "<<"Enter approprite number \n";
		cout<<"\n1 : Add an item ";
		cout<<"\n2 : Display total values";
		cout<<"\n3 : Delete an item";
		cout<<"\n4 : Display all items";
		cout<<"\n5 : Quit";
		cout<<"\n\nWhat is your option?";

		cin>>x;
	
		switch(x){
			case 1: order.getItem();break;
			case 2: order.displaySum();break;
			case 3: order.remove();break;
			case 4: order.displayItems();break;
			case 5: break;
			default: cout<<"Error in input; try again.\n";
		}
	}while(x!=5);
	
	return 0;
}
