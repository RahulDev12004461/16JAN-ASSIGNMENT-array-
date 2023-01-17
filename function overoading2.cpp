#include<iostream>
using namespace std;
int sum(int x,int y)
{
	cout<<x+y<<endl;
}
int sum(int a,int b,int c)
{
	cout<<a+b+c<<endl;
}
double sum(double x, double y)
{
	cout<<x+y;
}
main()
{
	sum(10,20);
	sum(10,20,30);
	sum(10.2,20.2);
	
}
