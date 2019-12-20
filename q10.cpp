#include<iostream>
using namespace std;

class student
{
	char* name;
	int rollno;
	int age;
	float marks;
	public:
	student(){
		name = NULL;
		rollno = 0;
		age = 0;
		marks = 0;
	}
	void input();
	void display();
};

void student :: input(){
	name = new char[25];
	cout<<"Enter Name : ";
	fgets(name,25,stdin);
	cout<<"Enter Roll No : ";
	cin>>rollno;
	cout<<"Enter Age : ";
	cin>>age;
	cout<<"Enter Marks : ";
	cin>>marks;
	getchar();
}

void student :: display(){
	cout<<"Name : "<<name;
	cout<<"Roll No : "<<rollno<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Marks : "<<marks<<endl;
}

int main(void)
{
	student s[3];
	for(int i=0;i<3;i++)
	{
		cout<<"\nEnter Details for STUDENT-"<<i+1<<" ::\n";
		s[i].input();
	}cout<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"\nDetails for STUDENT-"<<i+1<<" ::\n";
		s[i].display();
	}
}
