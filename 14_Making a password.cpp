#include<iostream>
#include <string>
using namespace std;
int main ()
{ 
string name, fname, clas; 
int phoneno;

	cout<<"Name: ";
	cin>>name;
	cout<<"Father's Name: ";
	cin>>fname;
	cout<<"Phone Number: ";
	cin>>phoneno;
	cout<<"Class: ";
	cin>>clas;
	
	cout<<endl<<endl<<endl<<endl<<endl;
	cout<<"Your Password is : "<<name<<"\b\b\b"<<fname<<"\b\b\b"<<phoneno<<"\b\b\b";

	return (0);
	
}
