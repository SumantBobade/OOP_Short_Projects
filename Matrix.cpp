#include<iostream>
//#include<conic>
using namespace std;

class Matrix
{
	int m[3][3];
	public:
	void read(){
		cout<<"Enter the number of elements of 3X3 matrix:\n";
		int i,j;
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
			cout<<"m["<<i<<"]["<<j<<"] = ";
			cin>>m[i][j];
			}
		}
	}

	void display(){
		cout<<"The metrix entered is : \n";
		int i,j;

		for(i=0;i<3;i++){
			cout<<"\n";
			for(j=0;j<3;j++){
			cout<<m[i][j]<<"\t";
			}
		}
	}
	
	friend Matrix trans(Matrix);
};

Matrix trans(Matrix m1){
	Matrix m2;
	int i,j;

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		m2.m[i][j]=m1.m[j][i];
	return m2;
}

int main(){

Matrix mat1, mat2;
mat1.read();

cout<<"\nYou entered the following matrix : ";
mat1.display();

mat2=trans(mat1);
cout<<"Transposed Matrix : ";
mat2.display();

//getch();
return 0;
}
