#include<iostream>
using namespace std;

class resource
{
	static bool res_all;
	public:
	static int value;
	static void release()
	{
		res_all = false;
		value = 0;
	}
	static void allocator(int num)
	{
		res_all = true;
		value = num;
	}
	static int status()
	{
		if(true == res_all)
			return 0;
		else
			return 1;
	}
};

int resource :: value;
bool resource :: res_all;

int main(void)
{
	int ch1,ch2;
	char choice;
	resource R1,R2,R3;
	do{
		cout<<"1. Allocate Resource to Process :: \n";
		cout<<"2. Release Resource\n";
		cout<<"Enter Choice : ";
		cin>>ch1;
		if(1 == ch1)
		{
			if(resource::status())
			{
				cout<<"Process :\n"<<"1. R1\n"<<"2. R2\n"<<"3. R3\n"<<endl;
				cout<<"Enter Choice : ";
				cin>>ch2;
				switch(ch2)
				{
					case 1:resource::allocator(1);break;
					case 2:resource::allocator(2);break;
					case 3:resource::allocator(3);break;
				}
			}
			else
				cout<<"Resource already allocated to Process : "<<resource::value<<endl;
		}
		if(2 == ch1)
		{
			if(resource::status())
				resource::release();
			cout<<"Resources are fred! \n";
		}
		cout<<"Do you want to Continue [Y/N] : ";
		cin>>choice;
	}while('Y' == choice || 'y' == choice);
	return 0;
}
