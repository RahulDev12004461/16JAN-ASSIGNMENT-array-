#include<iostream>
using namespace std;
bool isprime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	
	return 1;
}
main()
{
	int n;
	cin>>n;
	if(isprime(n)==1)
	{
		cout<<"n is a prime number ";
	}
	else
	{
	
	cout<<"not a prime number"<<endl;
}
	
}
