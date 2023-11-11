//This program tells if a number is higher or lower than 0
#include<iostream>
using namespace std;
int main()
{
	int r;
	cout<<"Enter the number ";
	cin>>r;
	if(r==0)
	cout<<"The number is zero";
	if(r>0)
	cout<<"The number is positive";
	if(r<0)
	cout<<"The number is negative";
	return(0);
}
