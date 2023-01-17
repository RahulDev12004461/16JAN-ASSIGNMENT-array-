/*Print Odd and Even Number from an Array

Write a C++ program to print odd and even number from an array.

Input: 1,2,5,6,3,2
Output:
Odd Numbers:
1
5
3
Even Numbers:
2
6
2*/
#include<iostream>
using namespace std;
main()
{
	int arr[6]={1,2,5,6,3,2};
	for(int i=0;i<=5;i++)
	{
	 if(arr[i]%2!=0)
	{
		cout<<arr[i]<<" ";
	
	}
	


	if(arr[i]%2==0)
	{
		cout<<arr[i]<<" ";
	}
}
}
