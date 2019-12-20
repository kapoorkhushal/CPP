#include<iostream>
using namespace std;

class matrix{
	int row,column;
	int **num;
	public:
	matrix(int r,int c){
		row = r;
		column = c;
		num = new int*[row];
		for(int i=0;i<row;i++)
			num[i] = new int[column];
	}
	void input();
	void display();
	matrix operator*(matrix m);
};

void matrix :: input(){
	for(int i=0;i<row;i++)
		for(int j=0;j<column;j++){
			cout<<"Enter Element at ["<<i<<"]["<<j<<"] : ";
			cin>>num[i][j];
		}
}

void matrix :: display(){
	cout<<endl<<"Matrix Display :: \n";
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++)
			cout<<num[i][j]<<"\t";
		cout<<endl;
	}
}

matrix matrix :: operator*(matrix m){
	if(column == m.row)
	{
		matrix C(row,m.column);
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<m.column;j++)
			{
				C.num[i][j]=0;
				for(int k=0;k<column;k++)
					C.num[i][j]=C.num[i][j]+(num[i][k]*m.num[k][j]);
			}
		}
		return C;
	}
	else
		printf("Matrix can't be multiplied!\n");
}

int main(void){
	int row,column;
	cout<<"\nMATRIX-I INPUT ::"<<endl;
	cout<<"\nEnter Row : ";
	cin>>row;
	cout<<"Enter Column : ";
	cin>>column;
	matrix m1(row,column);
	m1.input();
	m1.display();
	cout<<"\nMATRIX-II INPUT ::"<<endl;
	cout<<"\nEnter Row : ";
	cin>>row;
	cout<<"Enter Column : ";
	cin>>column;
	matrix m2(row,column);
	m2.input();
	m2.display();
	cout<<"MATRIX MULTIPLY :: ";
	matrix m3 = m1*m2;
	m3.display();
	return 0;
}
