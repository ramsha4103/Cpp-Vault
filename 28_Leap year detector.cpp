#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the year ";
	cin>>a;
	b=4;
	a=a%b;
	if(a==0)
	cout<<"Year is a leap year";
	else
	cout<<"Year is not a leap year";
	return(0);
}
