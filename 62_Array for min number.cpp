#include<iostream>
using namespace std;
int main()
{
	int min,i,b;
	int array[10];
  	cout<<"Enter value : ";
	cin>>min;
	array[0]=min;
	
	for(i=1;i<=9;i++)
{
	cout<<"Enter value : ";
	cin>>b;
	array[i]=b;
	if(min>b)
	min=b;
}

cout<<"The minimum value is : "<<min<<endl;
return(0);
}
