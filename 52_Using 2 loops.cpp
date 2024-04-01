#include<iostream>
using namespace std;
int main ()
{
	int a=1,b=5;
	cout<<"--------------\n";
	cout<<"   a      b   \n";
	cout<<"--------------\n";
	top:
	if(a<=5)
	{
	for(b;b>=1;b=b-1)
	
	{cout<<"   "<<a<<"     "<<b<<endl;
	a=a+1;}
	goto top;}
	return(0);
	
	
}
