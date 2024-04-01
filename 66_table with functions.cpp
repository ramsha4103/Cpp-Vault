#include<iostream>
using namespace std;
void table(int x,int i);
int main()
{
	int a,b;
	b=0;
	cout<<"Enter number ";
	cin>>a;
	table(a,b);
}
void table(int x,int i) 
{
	for(i=1;i<=10;i++)
	cout<<x<<" * "<<i<<" = "<<x*i<<endl;
}
