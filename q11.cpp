#include<iostream>
using namespace std;

class simple{
	int num;
	public:
	simple(int value){
	num = value;
	}
	simple(char* value){
	num = atoi(value);
	}
	int function(){
		return num;
	}
};

int main(void)
{
	simple s1(10);
	cout<<"\nValue Returned for simple s1(10) : "<<s1.function();
	simple s2('k');
	cout<<"\nValue Returned for simple s2('khushal') : "<<s2.function()<<endl;
	return 0;
}
