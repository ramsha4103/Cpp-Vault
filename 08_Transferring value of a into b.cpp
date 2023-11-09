//This program was created to transfer value of A into B and vice versa.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Give the value of A ";
	cin>>a;
	cout<<"Give the value of B ";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"A is "<<a<<"\n";
	cout<<"B is "<<b<<"\n";
	return(0);
}
