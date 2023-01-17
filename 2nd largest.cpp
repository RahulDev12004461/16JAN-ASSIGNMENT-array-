/*Find 2nd Largest Number in an Array

Write a C++ program to find 2nd largest number in an array.

Input: 1,2,5,6,3,2

Output: 5*/
#include<iostream>
using namespace std;
main()
{
	int arr[6]={1,2,5,6,3,2};
	int largest=INT_MIN;
	for(int i=0;i<=5;i++)
	{
		if(largest<=arr[i])
		{
			largest=arr[i-1];
			
		   
		}
		
	}
	cout<<"2nd largest element in array is "<<largest;
}
