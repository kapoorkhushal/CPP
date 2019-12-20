#include<iostream>
using namespace std;

class employee{
	int id;
	char* name;
	float salary;
	public:
	employee(){
		id = 0;
		name = NULL;
		salary = 0;
	}
	void getdata();
	void putdata();
	employee* greater(employee &e);
};

void employee :: getdata(){
	cout<<"Enter ID : ";
	cin>>id;
	getchar();
	cout<<"Enter Name : ";
	name = new char[20];
	fgets(name,20,stdin);
	cout<<"Enter Salary : ";
	cin>>salary;
}

void employee :: putdata(){
	cout<<"ID : "<<id<<endl;
	cout<<"Name : "<<name;
	cout<<"Enter Salary : "<<salary<<endl;
}

employee* employee :: greater(employee &e){
	if(salary > e.salary)
		return this;
	else
		return &e;
}

int main(void){
	employee e1,e2;
	cout<<"Enter Data for Employee-I "<<endl;
	e1.getdata();
	cout<<"\nEnter Data for Employee-II "<<endl;
	e2.getdata();
	cout<<"\nGreater DATA ::"<<endl;
	e1.greater(e2)->putdata();
	return 0;
}
