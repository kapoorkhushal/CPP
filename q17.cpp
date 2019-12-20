#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main(void)
{
	char* name = new char[20];
	char* data = new char[100];
	ofstream fileo;
	ifstream filei;
	cout<<"Enter File-I : ";
	fgets(name,20,stdin);
	name[strlen(name)-1]='\0';
	//strcat(name,".txt");
	fileo.open(name);
	cout<<"Enter Data (Input) (PRESS CTRL+D TO STOP) : ";
	while(NULL != fgets(data,100,stdin))
		fileo<<data;
	fileo.close();
	filei.open(name);
	memset(name,20,0);
	cout<<"Enter File-II : ";
	fgets(name,20,stdin);
	name[strlen(name)-1]='\0';
	//strcat(name,".txt");
	fileo.open(name);
	while(fileo)
		fileo<<filei.rdbuf();
	cout<<"Data copied Successfully to the destination file!"<<endl;
	filei.close();
	fileo.close();
	return 0;
}
