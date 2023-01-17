/*20) Find Smallest Number in an Array

Write a C++ program to find smallest number in an array.

Input: 1,2,5,6,3,2

Output: 1

*/
#include<iostream>
#include<climits>
using namespace std;
main()
{
		int arr[6]={1,2,5,6,3,2};
	int largest=INT_MAX;
	for(int i=0;i<=5;i++)
	{
		if(largest>=arr[i])
		{
			largest=arr[i];
		}
	}
	cout<<"smallest element in the array is "<<largest;
}
