#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(int argc, char* argv[])
{
	if(4 != argc)
	{
		cout<<"Invalid Number of arguments"<<endl;
		return -1;
	}
	ofstream f1;
	ifstream f2,f3;
	float f;
	char *str;
	str = new char[100];
	f2.open(argv[1]);
	cout<<"FLOAT FILE : "<<endl;
	while(f2){
		f2>>f;
		cout<<f<<"\t";
	}
	f3.open(argv[2]);
	cout<<"\nSTRING FILE : "<<endl;
	while(f3){
		f3.getline(str,100);
		cout<<str<<endl;
	}
	f1.open(argv[3]);
	f2.seekg(ios::beg);
	f3.seekg(ios::beg);
	while(f2 && f3){
		if(f2){
			f2>>f;
			f1<<f;
		}
		f1<<" ";
		if(f3){
			f2.getline(str,100);
			f1<<str;
		}
		//f1<<"\n";
	}
	f1.close();
	f2.close();
	f3.close();
	cout<<"FILE MERGED SUCCESSFULLY INTO "<<argv[3]<<endl;
	f2.open(argv[3]);
	while(f2){
		f2.getline(str,100);
		cout<<str;
	}
	f2.close();
	return 0;
}
