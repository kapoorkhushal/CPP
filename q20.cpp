#include<iostream>
using namespace std;

int main(void)
{
	float num;
	cout<<"Enter Number (FLOAT) : ";
	cin>>num;
	cout.width(10);
	cout.setf(ios::right,ios::adjustfield);
	cout.precision(6);
	cout.fill('*');
	cout.setf(ios::showpoint);
	cout.setf(ios::showpos);
	cout<<num<<endl;
	return 0;
}
