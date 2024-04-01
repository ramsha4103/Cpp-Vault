#include<iostream>
using namespace std;
int main ()
{
	int b,c,d;
	for(b=1;b<=5;b=b+1)
	{	cout<<endl;
	d=d+b;
	
		
		for(c=1;c<=b;c=c+1)
		{
		if(c==1)
		cout<<c;
		if(c==2)
		{cout<<"+"<<c;}
		if(c==3)
		{cout<<"+"<<c;}
		if(c==4)
		{cout<<"+"<<c;}
		if(c==5)
		{cout<<"+"<<c;}
		}
		cout<<"="<<d;
	}
	return(0);
}
