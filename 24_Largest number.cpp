//This program inputs 3 numbers and prints the largest
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,s;
	cout<<"input first number ";
	cin>>a;
	cout<<"input second number ";
	cin>>b;
	cout<<"input third number ";
	cin>>c;
	if(a>=b)
	d=a;
	if(a<b)
	d=b;
	if(d>=c)
	s=d;
	if(c>d)
	s=c;
	cout<<"Largest number is "<<s;
	return(0);
}

