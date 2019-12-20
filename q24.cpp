#include<iostream>
using namespace std;

template<class T>
void reverse_array(T* arr, int N){
	T temp;
	for(int i=0;i<N-1;i++)
	{
		temp = arr[i];
		for(int j = i+1;j<N;j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(void){
	int int_arr[] = {2,4,6,5,3,1}; 
	float float_arr[] = {9.41,7.52,13.47,8.94,10.10,13.11};
	char char_arr[] = {'c','f','a','e','b','d'};
	int count = 0;
	cout<<"INT-Array Reverse : ";
	count = sizeof(int_arr)/sizeof(int);
	reverse_array(int_arr,count);
	for(int i=0;i<count;i++)
		cout<<int_arr[i]<<"\t";
	cout<<endl<<"FLOAT-Array Reverse : ";
	count = sizeof(float_arr)/sizeof(float);
	reverse_array(float_arr,count);
	for(int i=0;i<count;i++)
		cout<<float_arr[i]<<"\t";
	cout<<endl<<"CHAR-Array Reverse : ";
	count = sizeof(char_arr)/sizeof(char);
	reverse_array(char_arr,count);
	for(int i=0;i<count;i++)
		cout<<char_arr[i]<<"\t";
	cout<<endl;
	return 0;
}
