#include<iostream>
using namespace std;
int main()
{
	int a;
	float b,r;
	cout<<"Input the radius ";
	cin>>r;
	cout<<"Input 1 for Area and 2 for Circumference ";
	cin>>a;
	if(a==1)
	{
		b=3.14*r*r;
		cout<<"Area of the circle is "<<b;
    }
	else if(a==2)
    {
		b=2*3.14*r; 
		cout<<"Circumference of the circle is "<<b;
    }
    return(0);
}

