#include<iostream>
using namespace std;
#define failure -1
#define success 1

class LinkList
{
	public:
	class Node
	{
		int data;
		public:
		Node *next;
		Node()
		{
			data = 0;
			next = NULL;
		}
		void node_input()
		{
			cout<<"\nEnter Data : ";
			cin>>data;
		}
		void node_display()
		{
			cout<<data;
		}
	};
	Node *head = NULL;
	int add();
	int display();
};

int LinkList :: add()
{
	Node *N = new Node;
	N->node_input();
	if(NULL == head)
		head = N;
	else
	{
		N->next = head;
		head = N;
	}
	return success;
}

int LinkList :: display()
{
	if(NULL == head)
	{
		cout<<"List is Empty!\n";
		return failure;
	}
	Node *N = head;
	if(NULL == N->next)
		N->node_display();
	else
	{
		while(NULL != N->next)
		{
			N->node_display();
			cout<<"\t->\t";
			N = N->next;
		}N->node_display();
	}
	head = NULL;
	return success;
}

int main(void)
{
	LinkList L;
	char choice;
	int ch;
	do{
		cout<<"Options : \n";
		cout<<"1. Insert\n";
		cout<<"2. Display\n";
		cout<<"Enter Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:L.add();break;
			case 2:
				L.display();
				cout<<endl;break;
			default:cout<<"\nInvalid Input !\n";
		}
		cout<<"Do you want to continue [Y/N] : ";
		cin>>choice;
	}while('Y' == choice || 'y' == choice);
}
