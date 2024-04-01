#include<iostream>
using namespace std;
int area(int,int);
int main()
{
	int b,h,c;
	cout<<"Input the base ";
	cin>>b;
	cout<<"Input the height ";
	cin>>h;
	c=area(b,h);
	cout<<c;
	
}
int area(int x,int y)
{
	int c;
	c=(x*y)/(2);
	return c;
}
