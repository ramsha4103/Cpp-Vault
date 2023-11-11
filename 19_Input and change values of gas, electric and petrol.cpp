#include<iostream>
using namespace std;
int main()
{
	float electricity, gas, petrol;
	cout<<"Enter rate of Petrol per unit\n";
	cin>>petrol;
	cout<<"Enter rate of electricity per unit\n";
	cin>>electricity;
	cout<<"Enter rate of gas per unit\n";
	cin>>gas;
	petrol=petrol*1.10;
	cout<<petrol<<endl;
	electricity=electricity*1.10;
	cout<<electricity<<endl;
	gas=gas*1.10;
	cout<<gas;
return(0);
}
