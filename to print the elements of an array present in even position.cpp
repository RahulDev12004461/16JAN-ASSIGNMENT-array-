//7) C++ Program to print the elements of an array present on even position
#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<=n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the number of element present on even position "<<endl;
		for(int i=0;i<=n;i++)
	{
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<" ";
		}
	}
}
