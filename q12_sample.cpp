#include<iostream>
using namespace std;

class two;
class one{
	int num;
	public:
	one(int value){
		num = value;
	}
	int operator+(two &t);
};

class two{
	int num;
	public:
	two(int value){
		num = value;
	}
	friend int one::operator+(two &t);
};

int one :: operator+(two &t){
	return (num+t.num);
}

int main(void){
	int num1,num2;
	cout<<"Enter First NUM : ";
	cin>>num1;
	cout<<"Enter Second NUM : ";
	cin>>num2;
	one o(num1);
	two t(num2);
	cout<<"Sum of Numbers : "<<o+t<<endl;
	return 0;
}
