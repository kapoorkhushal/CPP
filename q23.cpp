#include<iostream>
using namespace std;

template <class T>
int binary_search(T* arr,int top,int bottom,T element){
	int mid = (top+bottom)/2;
	if(element == arr[top])
		return top;
	else if(element == arr[bottom])
		return bottom;
	else if(element == arr[mid])
		return mid;
	else if(top == bottom)
		return -1;
	else if(element > arr[mid])
		binary_search(arr,mid+1,bottom,element);
	else if(element < arr[mid])
		binary_search(arr,top,mid-1,element);
}

int main(void){
	int int_arr[] = {1,2,3,4,5,6};
	char char_arr[] = {'a','b','c','d','e','f'};
	int num;
	char ch;
	cout<<"{1,2,3,4,5,6}"<<endl;
	cout<<"Enter Number to Search : ";
	cin>>num;
	int count = sizeof(int_arr)/sizeof(int);
	int loc = binary_search(int_arr,0,count-1,num); 
	if(-1 == loc)
		cout<<"\nElement does not exist !\n";
	else
		cout<<num<<" exist at "<<loc+1<<endl;
	cout<<endl<<"{'a','b','c','d','e','f'}"<<endl;
	cout<<"Enter Character to Search : ";
	cin>>ch;
	count = sizeof(char_arr)/sizeof(char);
	loc = binary_search(char_arr,0,count-1,ch); 
	if(-1 == loc)
		cout<<"\nElement does not exist !\n";
	else
		cout<<endl<<ch<<" exist at "<<loc+1<<endl;
	return 0;
}
