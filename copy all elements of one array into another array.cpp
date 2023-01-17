//1) C++ Program to copy all elements of one array into another array
#include<iostream>
using namespace std;
main()
{
	int arr[40];
	int n;
	cin>>n;
	int arr1[n]={0};
	cout<<"the elements of first array is ";
	for(int i=0;i<=n;i++)
	{
		cin>>arr[i];
		
		
	}
	cout<<"copied element in second array is ";
	for(int i=0;i<=n;i++)
	{
			arr1[i]=arr[i];
		cout<<arr1[i]<<" ";
		
		
	}
	
}
