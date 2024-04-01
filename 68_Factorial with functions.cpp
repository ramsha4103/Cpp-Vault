#include<iostream>
using namespace std;
void factorial(int x);
int main()
{
	int a;
	cout<<"Enter number ";
	cin>>a;
	factorial(a);
}
void factorial(int x) 
{
	int i,f;
	f=1;
	for(i=1;i<=x;i++)
	{f=f*i;}
	cout<<f;
}
