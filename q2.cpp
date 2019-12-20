#include<iostream>
using namespace std;

typedef enum type
{
	savings=1,current=2
}type;


class bank
{
	char* cname;
	double accno;
	float balance;
	type acctype;
	public:
	bank()
	{
		cname = NULL;
		accno = 0;
		balance = 0;
	}
	void new_account();
	int deposit();
	int withdraw();
	void display();
};

void bank :: new_account()
{
	int acc;
	cout<<"New Account Opening ! \n";
	cname = new char(20);
	cout<<"Enter Name : ";
	fgets(cname,20,stdin);
	cout<<"Enter Account Number : ";
	cin>>accno;
	cout<<"Enter Account Type : \n"<<"1. Saving\n"<<"2. Current\n"<<"Input : ";
	cin>>acc;
	if(1 == acc)
		acctype = savings;
	else if(2 == acc)
		acctype = current;
	else
		cout<<"Invalid Input!\n";
}

int bank :: deposit()
{
	int amount;
	cout<<"Enter amount to deposit : ";
	cin>>amount;
	balance += amount;
	cout<<"Balance updated Successfully!\n";
	cout<<"New Balance : "<<balance<<endl;
	return amount;
}

int bank :: withdraw()
{
	int amount;
	cout<<"Enter amount to withdraw : ";
	cin>>amount;
	if(amount >= balance)
	{
		cout<<"Insufficient Balance !\n";
		return 0;
	}
	balance -= amount;
	cout<<"Amount Withdrawn : "<<amount<<endl;
	cout<<"Current New Balance : "<<balance<<endl;
}

void bank :: display()
{
	cout<<"Account Number : "<<accno<<endl;
	cout<<"Account Type : ";
	if(savings == acctype)
		cout<<"Savings\n";
	else
		cout<<"Current\n";
	cout<<"Customer Name : "<<cname<<endl;
	cout<<"Balance : "<<balance<<endl;
}

int main(void)
{
	bank B;
	int ch;
	char choice;
	B.new_account();
	do{
		cout<<"Banking Options ::\n";
		cout<<"1. Withdraw\n";
		cout<<"2. Deposit\n";
		cout<<"3. Display\n";
		cout<<"Enter Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1: B.withdraw();break;
			case 2: B.deposit();break;
			case 3: B.display();break;
			default: cout<<"Invalid Input!\n";
		}
		cout<<"Do you want to continue [Y/N] : ";
		cin>>choice;
	}while('Y' == choice || 'y' == choice);
	B.display();
	return 0;
}
