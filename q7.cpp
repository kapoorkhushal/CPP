#include<iostream>
using namespace std;

class two;
class one{
	int num;
	public:
	one(int value){
		num = value;
	}
	friend int max(one o,two t);
};

class two{
	int num;
	public:
	two(int value){
		num = value;
	}
	friend int max(one o,two t);
};

int max(one o,two t)
{
	if(o.num > t.num)
		return o.num;
	else
		return t.num;
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
	cout<<"MAX VALUE : "<<max(o,t)<<endl;
	return 0;
}
