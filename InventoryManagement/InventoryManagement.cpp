#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<fstream>
using namespace std;

class Product{
private:
	int id;
	string name;
    string category;
	double price;
    int quantity;
public:
	Product(int id, string name, string category, double price, int quantity){
		this->id=id;
		this->name=name;
		this->category=category;
		this->price = price;
        this->quantity = quantity; 
	}
	
	int getId(){
		return id;
	}
	string getName(){
		return name;
	}
	string getCategory(){
        return category;        
    }
	double getPrice(){
		return price;
	}
    int getQty(){
		return quantity;
	}
	void setID(int newID){
		id=newID;
		cout<<"ID changed to : "<<id<<endl;
	}
	void setName(string name){
        this->name=name;
    }
    void setCategory(string category){
        this->category = category;
    }
    void setPrice(double price){
        this->price=price;    
    }
};

class Inventory{
private:
	vector<Product> items;
public:
	void addProduct(Product product){
            
    }
    
    void removeProduct(int id){

        bool found = false;
        for(auto &p: product){
}





}
    Product* findProduct(int id){}
    void updateProduct(int id, string name, sting category, double price, int quality){}
    void printProduct() const{}
};
