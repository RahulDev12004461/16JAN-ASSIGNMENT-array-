#include<iostream>
using namespace std;
int count(int x, int y)
{
	int i=1;
	int count,epsca=0;
	while(x!=0)
	{
		int bit=x&1;
		
		count++;
		x>>1;
	}
		while(y!=0)
	{
		int bit=y&1;
		
		epsca;
		y>>1;
	}
	return count+epsca;
}
main()
{
	int x,y;
	cin>>x>>y;
	cout<<"the count will be "<<count(x,y);
}
