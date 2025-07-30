#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Product{
private:
	int id;
	string name;
	int quantity;
	double price;
public:
	Product(int id, string &name; int qty; double price){
		this->id=id;
		this->name=name;
		this->qty=quantity;
		this->price = price;
	}
	
	int getId(){
		return id;
	}
	string getName(){
		return name;
	}
	int getQty(){
		return quantity;
	}
	int getPrice(){
		return price;
	}
	void setID(int newID){
		id=newID;
		cout<<"ID changed to : "<<id<<endl;
	}
	void setName
	string toCSV();
	static Product fromCSV(const string& line);
};

class Inventory{
private:
	vector<Product> items;
public:
	void loadFromFile(const string& filename);
	void saveToFile(const string filename) const;
	bool addProduct(const Product& p);
	bool removeProduct(int id);
	Product* findProduct(int id);
	bool updateQuantity(int id, int newQty);
	void displaAll() const;
};
