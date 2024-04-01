#include<iostream>
using namespace std;
int main()
{
	int c;
	float i,f;
	cout<<"1. Convert cm to inches 2. Convert litres to gallons 3. Kilometer to miles 4. Kilogram to pounds ";
	cin>>c;
	
	switch(c)
	{
		case 1:
		cout<<"Enter a value in cm ";
		cin>>i;
		f=0.394*i;
		cout<<"The value in inches is "<<f;
		break;
		case 2:
	    cout<<"Enter a value in liters ";
		cin>>i;
		f=0.264*i;
		cout<<"The value in gallons is "<<f;
		break;
		case 3:
		cout<<"Enter a value in Kilometer ";
		cin>>i;
		f=0.622*i;
		cout<<"The value in miles is "<<f;
		break;
		case 4:
	cout<<"Enter a value in kilograms ";
		cin>>i;
		f=2.2*i;
		cout<<"The value in pounds is "<<f;
		break;
		default:
		cout<<"Invalid input";
	}
	return(0);
}
