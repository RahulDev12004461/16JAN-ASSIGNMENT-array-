//C++ Program to print the elements of an array in reverse order
#include<iostream>
using namespace std;
main()
{
	int n;
	int arr[100];
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(int i=n;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
}
