#include<iostream>
using namespace std;
int main()

{
	int h,d,w,rh,wt,dt;
	cout<<"input the number of hours ";
	cin>>h;
	dt=24;
	wt=168;

	if(h>168)
	{
	w=h/wt;
	rh=h%wt;
	
	if(rh>24)
	{
		d=rh/dt;
		rh=rh%dt;
	}
	cout<<w<<" week(s) "<<d<<" day(s) and "<<rh<<" hour(s).";
	goto end;
	}
	
	else if(h>24)
	{
		d=h/dt;
		rh=h%dt;
		cout<<d<<" day(s) and "<<rh<<" hour(s).";
		goto end;
	}
	
	else if(h>0);
	{
	cout<<h<<" hour(s)";
	}
	end:
	return(0);
}
