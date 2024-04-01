#include<iostream>
using namespace std;
int main()
{
	int a,sum,avg,i;
	int array[5];
	sum=0;
	for(i=0;i<=4;i++)
{
	cout<<"Enter value : ";
	cin>>a;
	array[i]=a;
	sum=sum+a;
}

cout<<"The sum of array is : "<<sum;
avg=sum/5;
cout<<"\nThe average is : "<<avg;
return(0);
}
