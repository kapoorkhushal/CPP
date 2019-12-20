#include<iostream>
using namespace std;

class stack{
	int *num;
	int len;
	int count;
	public:
	stack(int n){
		num = new int[len = n];
		count = -1;
	}
	void push(){
			if(len-1 <= count)
				throw(count);
			count++;
			cout<<"Enter Number : ";
			cin>>num[count];
	}
	void pop(){
			if(0 > count)
				throw(count);
			cout<<"Number : "<<num[count]<<endl;
			count--;
	}
};

int main(void){
	int limit;
	cout<<"Enter Limit of Stack : ";
	cin>>limit;
	stack s(limit);
	char ch;
	int choice;
	do{
		cout<<endl<<"1. Push Stack";
		cout<<endl<<"2. Pop Stack";
		cout<<endl<<"Enter Choice : ";
		cin>>choice;
		switch(choice){
			case 1:
				try{
					s.push();
				}catch(int x){
					cout<<"Stack Overflow!\n";
				}break;
			case 2:
				try{
					s.pop();
				}catch(int x){
					cout<<"Stack Underflow!\n";
				}break;
			default : cout<<"Invalid Selection!\n";
		}
		cout<<"Do you want to continue [Y/N] : ";
		cin>>ch;
	}while('Y' == ch || 'y' == ch);
	return 0;
}
