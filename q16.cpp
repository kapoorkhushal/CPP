#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main(void)
{
	char* str = new char[100];
	int len = 0;
	ofstream outfile("data");
	cout<<"Enter Data (Input) (PRESS CTRL+D TO STOP) : ";
	while(NULL != fgets(str,30,stdin)){
		outfile<<str;
		len += strlen(str);
	}
	cout<<"Length of the input Data : "<<len<<endl;
	outfile.close();
	ifstream infile("data");
	cout<<"Data is : \n";
	while(infile){
		infile.getline(str,100);
		cout<<str;
	}
	cout<<endl;
	infile.close();
	return 0;
}
