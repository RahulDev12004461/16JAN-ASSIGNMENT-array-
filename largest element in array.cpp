//largest element in the array
#include<iostream>
#include<climits>
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
	
	int largest=INT_MIN;
	for(int i=0;i<=n;i++)
	{
		if(largest<=arr[i])
		{
		largest=arr[i];
			
		}
	}
	cout<<"largest element is "<<largest<<endl;
	int smallest=INT_MAX;
		for(int i=0;i<=n;i++)
	{
		if(smallest>=arr[i])
		{
		smallest=arr[i];
			
		}
	}
	cout<<"smallest element in array is "<<smallest;
	
}
