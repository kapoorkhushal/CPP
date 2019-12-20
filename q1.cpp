#include<iostream>
using namespace std;

class production
{
	char *title;
	float price;
	public:
	production()
	{
		title = NULL;
		price = 0;
	}
	void getdata()
	{
		cout<<"Enter Title : ";
		title = new char(20);
		fgets(title,20,stdin);
		cout<<"Enter Price : ";
		cin>>price;
	}
	void putdata()
	{
		cout<<"Title : "<<title<<"Price : "<<price<<endl;
	}
};

class book : public production
{
	int page_count;
	public:
	book()
	{
		page_count = 0;
	}
	void getdata()
	{
		cout<<"Enter page count : ";
		cin>>page_count;
	}
	void putdata()
	{
		cout<<"Page Count : "<<page_count<<endl;
	}
};

class tape : public production
{
	float playing_time;
	public:
	tape()
	{
		playing_time = 0;
	}
	void getdata()
	{
		cout<<"Enter playing time : ";
		cin>>playing_time;
	}
	void putdata()
	{
		cout<<"Playing Time : "<<playing_time<<endl;
	}
};

int main(void)
{
	book B;
	tape T;
	cout<<"BOOKS Input :: \n";
	B.production::getdata();
	B.getdata();
	getchar();
	cout<<"TAPE Input :: \n";
	T.production::getdata();
	T.getdata();
	cout<<endl<<"BOOKS Display :: \n";
	B.production::putdata();
	B.putdata();
	cout<<endl<<"TAPE Display :: \n";
	T.production::putdata();
	T.putdata();
	return 0;
}
