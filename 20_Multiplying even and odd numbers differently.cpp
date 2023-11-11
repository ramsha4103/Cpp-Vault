#include<iostream>
using namespace std;
int main()
{
	int E, O, S;
	cout<<"Input the Even number\n ";
	cin>>E;
	cout<<"Input the Odd number\n ";
	cin>>O;
	E=E*5;
	O=O*3;
	S=E+O;
	S=S-1000;
	cout<<"The output is "<<S;
	return(0);
}

