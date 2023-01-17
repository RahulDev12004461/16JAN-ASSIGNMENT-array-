//C++ Program to print the sum of all the items of the array
#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the size of an array ";
	cin>>n;
	int arr[100];
	for(int i=0;i<=n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the array is ";
	int sum=0;
		for(int i=0;i<=n;i++)
	{
		cout<<arr[i]<<endl;
		sum=sum+arr[i];		
	}
	cout<<"sum of all items of the array "<<sum;

}

