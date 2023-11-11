#include<iostream>
using namespace std;
int main()

{
	int a,b;
	float c;
	cout<<"Enter Number ";
	cin>>a;
	b=2;
	c=a%b;
	
	if(c==0)
	cout<<"The number you entered is even.";
	
	if(c==1)
	cout<<"The number you entered is odd.";
	
	return(0);
}

