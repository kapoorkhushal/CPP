#include<iostream>
#include<fstream>
#include<cstring>
#include<iomanip>
using namespace std;

class employee{
	int empid;
	char* name;
	char* designation;
	float salary;
	public:
	employee(){
		empid = 0;
		name = NULL;
		designation = NULL;
		salary = 0;
	}
	void input();
	void output();
};

void employee :: input(){
	cout<<"Enter Employee-ID : ";
	cin>>empid;
	getchar();
	cout<<"Enter Name : ";
	name = new char[20];
	fgets(name,20,stdin);
	name[strlen(name)-1] = '\0';
	cout<<"Enter Designation : ";
	designation = new char[20];
	fgets(designation,20,stdin);
	designation[strlen(designation)-1] = '\0';
	cout<<"Enter Salary : ";
	cin>>salary;
}

void employee :: output(){
	cout<<setw(10)<<empid<<setw(25)<<name<<setw(10)<<designation<<setw(10)<<salary<<endl<<endl;
}

int main(void){
	int N;
	ofstream fileo;
	fileo.open("employee.dat",ios::out);
	cout<<"Enter the Number of Employees : ";
	cin>>N;
	employee e[N];
	for(int i=0;i<N;i++){
		cout<<endl<<"Enter Data for Employee-"<<i+1<<endl;
		e[i].input();
		fileo.write((char *) &e[i],sizeof(e[i]));
	}
	fileo.close();
	ifstream filei;
	filei.open("employee",ios::in);
	filei.seekg(ios::beg);
	cout<<endl<<"Output Data of Employees :\n";
	for(int i=0;i<N;i++){
		filei.read((char *) &e[i],sizeof(e[i]));
		e[i].output();
	}
	filei.close();
	return 0;
}
