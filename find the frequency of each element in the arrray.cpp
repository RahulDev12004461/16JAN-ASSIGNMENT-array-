//C++ Program to find the frequency of each element in the array
#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int arr[90];
	for(int i=0;i<=n;i++)
	{
		cin>>arr[i];
	}
	int count=1;
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		if(arr[i]==arr[i+1]||arr[i]==arr[i+2]||arr[i+2]==arr[i+3])
		{
			count++;
		}
		sum=sum+count;
	}
	cout<<"the frequency of each element is "<<count;
}
