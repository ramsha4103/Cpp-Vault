#include<iostream>
#include<string>
using namespace std;
int main()
{
int i,a;
string headings[4]={"Numbers", "squares","cubes","sum"};
int numbers[4],squares[4],cubes[4],sum[4];
for(i=1;i<=4;i=i+1)
{
numbers[i]=i;
squares[i]=i*i;
cubes[i]=i*i*i;
sum[i]=numbers[i]+squares[i]+cubes[i];
}
cout<<endl<<"Numbers:  "<<"0   ";
for(i=1;i<=4;i=i+1)
{
cout<<numbers[i]<<"   ";
}
cout<<endl<<"Sqares:  "<<"0   ";
for(i=1;i<=4;i=i+1)
{
cout<<squares[i]<<"   ";
}
cout<<endl<<"Cubes:  "<<"0   ";
for(i=1;i<=4;i=i+1)
{
cout<<cubes[i]<<"   ";
}
cout<<endl<<"Sum:   "<<"0   ";
for(i=1;i<=4;i=i+1)
{
cout<<sum[i]<<"   ";
}

return(0);
}
