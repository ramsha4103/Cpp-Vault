//This program inputs 5 numbers and prints the largest and smallest
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cout<<"input first number ";
	cin>>a;
	cout<<"input second number ";
	cin>>b;
	cout<<"input third number ";
	cin>>c;
	cout<<"input fourth number ";
	cin>>d;
	cout<<"input fifth number ";
	cin>>e;
	if(b>=a)
	f=b;
	if(c>=a)
	f=c;
	if(d>=a)
	f=d;
	if(e>=a)
	f=e;
	cout<<"The biggest number is "<<f<<endl;
	
	if(a<=b)
	b=a;
	if(c<=b)
	b=c;
	if(d<=b)
	b=d;
	if(e<=b)
	b=e;
	cout<<"The smallest number is "<<b;
	return(0);
}
	
