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
	vector<Product> products;
public:
	void addProduct(Product product){
            bool found = false;
            for(auto& p:products){
                if(p.getId==product.getId){
                    cout<<"Id already Exist."<<endl;
                    found=true;
                    break;               
                }            
            }
            if(!found){
                products.push_back(product);
                cout<<"Product added successfully."<<endl;
                cout<<"-----------------------------------------------------------------------------------------"<<endl;
            }
    }
    
    void removeProduct(int id){

        bool found = false;
        for(auto p& products){
            if(p->id==id){
                products.erase(p);
                found = true;
                cout<<"Product removed successfully"     
            }
        }
    }


    Product* findProduct(int id){
        for(auto i=product){
            if()
        }    
    }
    void updateProduct(int id, string name, sting category, double price, int quality){}
    void printProduct() const{}
};
