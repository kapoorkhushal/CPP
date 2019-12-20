#include<iostream>
#include<math.h>
using namespace std;
void my_sqrt(int);

void my_sqrt(int num){
	if(0 <= num)
		cout<<"Square root is : "<<sqrt(num)<<endl;
	else
		throw(num);
}

int main(void)
{
	int num;
	cout<<"Enter the Number  : ";
	cin>>num;
	try{
		my_sqrt(num);
	}
	catch(int x){
		cout<<endl<<num<<" is Negative! \nCannot get Square Root"<<endl;
	}
	return 0;
}
