#include<iostream>
using namespace std;
int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	
	return fact;
}
int ncr(int n,int r)
{
	int num=factorial(n);
	int deno=factorial(r)*factorial(n-r);
	int  answer=num/deno;
	
	return answer;
}
main()
{
	int n,r;
	cin>>n;
	cin>>r;
	cout<<"the sequence is "<<ncr(n,r);
}
