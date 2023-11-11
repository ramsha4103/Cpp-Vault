#include<iostream>
using namespace std;
int main()
{
	int Divident, Divisor, quotient, remainder;
	cout<<"Enter your Divident\n";
	cin>>Divident;
	cout<<"Enter your Divisor?\n";
	cin>>Divisor;
	quotient=Divident/Divisor;
	remainder=Divident%Divisor;
	cout<<"quotient is "<<quotient<<"\n";
	cout<<"remainder is "<<remainder<<"\n";
	return(0);
}
