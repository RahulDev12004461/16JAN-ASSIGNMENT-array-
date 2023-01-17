#include<iostream>
using namespace std;
class construct
{
	public:
		float area;
		construct()
		{
			cout<<"0-argument constructor "<<endl;
			area=0;
			
		}
		construct(int a, int b)
		{
			cout<<"2-argument constructor"<<endl;
			area=a*b;
		}
		void display()
		{
			cout<<area<<endl;
		}
};
main()
{
	construct o;
	o.display();
	construct o2(10,30);
	o2.display();
}
