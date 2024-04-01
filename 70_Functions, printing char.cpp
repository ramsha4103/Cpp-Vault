#include<iostream>
using namespace std;
void cube(int,char);
int main()
{
	int a;
	char b;
	cout<<"Enter your number ";
	cin>>a;
	cout<<"Enter your char ";
	cin>>b;
	cube(a,b);
	
}
void cube(int x,char y)
{
	int i;
	for(i=1;i<=x;i++)
	cout<<y<<"   ";
}
