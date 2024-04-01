#include<iostream>
using namespace std;
void comparing(int x, int y);
int main()
{
	int a,b;
	cout<<"Enter number ";
	cin>>a;
	cout<<"Enter number ";
	cin>>b;
	comparing(a,b);
	
}
void comparing(int x, int y) 
{
	if(x>y)
	cout<<"X is the greatest number";
	if(y==x)
	cout<<"Y and X are equal";
	if(y>x)
	cout<<"Y is the greatest number";
	
}
