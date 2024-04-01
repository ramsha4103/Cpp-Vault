#include<iostream>
using namespace std;
int main()
{
	float a,b;
	int c;
	cout<<"Enter a number ";
	cin>>a;
	cout<<"Enter a number ";
	cin>>b;
	cout<<"Enter	 1 for + 	 2 for - 	 3 for * 	 4 for / ";
	cin>>c;
	
	switch(c)
	{
		case 1:
		
		cout<<a+b;
		break;
		case 2:
		cout<<a-b;
		break;
		case 3:
		cout<<a*b;
		break;
		case 4:
		if(b==0)
		cout<<"The value is invalid";
		else
		cout<<a/b;
		break;
		
		default:
		cout<<"The operator is invalid";
	}
	return(0);
}
