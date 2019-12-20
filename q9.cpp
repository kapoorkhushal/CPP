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
	void insert(int value,int i,int j){
		num[i][j] = value;
	}
	int display(int i,int j){
		return num[i][j];
	}
};

int main(void)
{
	int row,column,value;
	cout<<"\nEnter Row : ";
	cin>>row;
	cout<<"Enter Column : ";
	cin>>column;
	matrix m(row,column);
	cout<<"Matrix Input : \n";
	for(int i=0;i<row;i++)
		for(int j=0;j<column;j++)
		{
			cout<<"Enter Element at ["<<i<<"]["<<j<<"] : ";
			cin>>value;
			m.insert(value,i,j);
		}
	cout<<endl<<"Matrix Display :: \n";
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++)
			cout<<m.display(i,j)<<"\t";
		cout<<endl;
	}
	return 0;
}
