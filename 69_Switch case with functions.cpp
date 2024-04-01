#include<iostream>
using namespace std;
void WNO(int x, int y,int z);
int main()
{

	int a,b,d;
	char c;
	cout<<"Enter a number ";
	cin>>a;
	cout<<"Enter a number ";
	cin>>b;
	cout<<"Enter	 1 for + 	 2 for - 	 3 for * 	 4 for / ";
	cin>>d;
	switch(d)
	{
		case 1:
		c='+';
		break;
		case 2:
		c='-';
		break;
		case 3:
		c='*';
		break;
		case 4:
		if(d==0)
		cout<<"The value is invalid";
		else
		c='/';
		break;
	 
		default:
		cout<<"The operator is invalid";
}
	WNO(a,b,c);

	
	
}
void WNO(int x, int y, char z) 
{
		switch(z)
	{
		case'+';
		c=x+y;
		break;
		case '-';
		c=x-y;
		break;
		case '*';
		c=x*y;
		break;
		case 4:
		if(d==0)
		cout<<"The value is invalid";
		else
		c=x/y;
		break;
	 
		default:
		cout<<"The operator is invalid";
	
	
}
