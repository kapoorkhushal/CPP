#include<iostream>
using namespace std;
void sorting(int *,const int &);

int main(void){
	int *arr;
	int count;
	cout<<"Enter the Count of the Array : ";
	cin>>count;
	arr = new int[count];
	for(int i=0;i<count;i++){
		cout<<"Enter Element at "<<i<<" : ";
		cin>>arr[i];
	}
	cout<<endl<<"Array Display (INITIAL) : \t";
	for(int i=0;i<count;i++)
		cout<<arr[i]<<"\t";
	sorting(arr,count);
	cout<<endl<<"Array Display (SORTED) : \t";
	for(int i=0;i<count;i++)
		cout<<arr[i]<<"\t";
	cout<<endl<<endl;	
	return 0;
}

void sorting(int *arr,const int &count){
	int temp;
	for(int i=1;i<count;i++)
	{
		temp = arr[i];
		int j = i-1;
		while((j>=0) && (temp < arr[j]))
		{
			arr[j+1] = arr[j];
			j--;
		}arr[j+1] = temp;
	}
	temp = 0;
}
