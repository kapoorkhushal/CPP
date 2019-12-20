#include<iostream>
using namespace std;

class one{
	int num;
	public:
	one(int value){
		num = value;
	}
	int operator+(one o);
};

int one :: operator+(one o){
	return (num+o.num);
}

int main(void){
	int num1,num2;
	cout<<"Enter First NUM : ";
	cin>>num1;
	cout<<"Enter Second NUM : ";
	cin>>num2;
	one o1(num1);
	one o2(num2);
	cout<<"Sum of Numbers : "<<o1+o2<<endl;
	return 0;
}
