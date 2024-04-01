#include<iostream>
using namespace std;
void table(int x);
int main()
{
	int a;
	cout<<"Enter number ";
	cin>>a;
	table(a);
}
void table(int x) 
{
	int f,b;
	b=x-1;
	f=x+1;
	cout<<"The precessor and successor are "<<b<<" and "<<f;
}
