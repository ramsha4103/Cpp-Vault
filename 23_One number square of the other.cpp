//Program that finds out if one number is square of the other
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the first number ";
	cin>>a;
	cout<<"Enter the second number ";
	cin>>b;
	c=a*a;
	if(c==b)
	cout<<"Second number is the square of the first number";
	if(c!=b)
	cout<<"Second number is not the square of the first number";
	return(0);
}
