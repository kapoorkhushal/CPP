#include<iostream>
using namespace std;

class two;
class one{
	int num;
	public:
	one(int value){
		num = value;
	}
	void display(){
		cout<<"class-1 NUM : "<<num<<endl;
	}
	friend void swap(one &o,two &t);
};

class two{
	int num;
	public:
	two(int value){
		num = value;
	}
	void display(){
		cout<<"class-2 NUM : "<<num<<endl;
	}
	friend void swap(one &o,two &t);
};

void swap(one &o,two &t)
{
	t.num = t.num + o.num;
	o.num = t.num - o.num;
	t.num = t.num - o.num;
	cout<<"\nSWAP SUCCESSFULL\n";
}

int main(void)
{
	int num1,num2;
	cout<<"Enter First NUM : ";
	cin>>num1;
	cout<<"Enter Second NUM : ";
	cin>>num2;
	one o(num1);
	two t(num2);
	swap(o,t);
	cout<<"After SWAP : \n";
	o.display();
	t.display();
	return 0;
}

