#include<iostream>
using namespace std;
int main()
{
	int s,f;
	cout<<"Input the salary ";
	cin>>s;
	
	if(s>=20000)
	{
	f=s-(0.07*s);
	cout<<f;
    }
	else if(s>=10000)
	{
	f=s-1000;
	cout<<f;
    }
	else if(s<10000)
	cout<<s;
	
	return(0);
}
