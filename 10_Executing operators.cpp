//This program was created to execute operators on two numbers using variables.
#include<iostream>
using namespace std;
int main()

{
	int a,b,sum,diff,product,div,mod;
	cout<<"Enter the first value ";
	cin>>a;
	cout<<"Enter the second value ";
	cin>>b;
	sum=a+b;
	cout<<"The sum is "<<sum;
	diff=a-b;
	cout<<"\nThe difference is "<<diff;
	product=a*b;
	cout<<"\nThe product is "<<product;
	div=a/b;
	cout<<"\nThe remainder is "<<div;
	mod=a%b;
	cout<<"\nThe modulus is "<<mod;
	return(0);
}
