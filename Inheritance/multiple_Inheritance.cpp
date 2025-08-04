#include<iostream>
using namespace std;

class A{
	int a;
	public:
	void get_A(){
		a=5;
		cout<<"a = "<<a;
	}
	int get_a(){
	return a;
	}
};

class B:public A{
	int b;
	public:
	void get_B(){
		b=10;
		cout<<"b = "<<b;
	}
	void mult(){
		int m=b*get_a();
		cout<<"a * b = "<<m<<endl;
	};
};

int main(){
	B b;
	b.get_A();
	b.get_B();
	b.mult();
}
