#include <iostream>
using namespace std;
void print(int i)
{
    cout<<"Integer: "<<i<<endl;
}

void print(double f)
{
    cout<<"Float: "<<f<<endl;
}

void print(char* c)
{
    cout<<"Char: "<<endl;
}

int main()
{
    print(10);
    print(10.10);
    print("ten");
}
