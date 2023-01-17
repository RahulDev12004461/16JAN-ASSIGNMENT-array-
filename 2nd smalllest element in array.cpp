/*Find 2nd Smallest Number in an Array

Write a C++ program to find 2nd smallest number in an array.

Input: 1,2,5,6,3,2

Output: 2*/
#include<iostream>
#include<climits>
using namespace std;
main()
{
	int arr[6]={1,2,5,6,3,2};
	int smallest=INT_MAX;
	for(int i=0;i<=5;i++)
	{
		if(smallest>arr[i])
		{
		smallest=arr[i];
		}
		
	}
	cout<<"2nd smallest element in array is "<<smallest;
}
