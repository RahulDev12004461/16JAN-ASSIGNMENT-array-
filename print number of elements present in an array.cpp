//11) C++ Program to print the number of elements present in an array
#include<iostream>
using namespace std;
main()
{
	int arr[80];
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		cin>>arr[i];
	}
	int count=0;
	for(int i=0;i<=n;i++)
	{
		count++;
	}
	cout<<"number of element present in array is "<<count;
}
