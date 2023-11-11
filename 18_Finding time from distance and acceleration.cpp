#include<iostream>
using namespace std;
int main()
{
	int Distance, speed, time;
	cout<<"Enter your Distance in km\n";
	cin>>Distance;
	cout<<"Enter your speed in km/h\n";
	cin>>speed;
	time=Distance/speed;
	cout<<"Time required to reach the destination is "<<time<<" hours\n";

	return(0);
}
