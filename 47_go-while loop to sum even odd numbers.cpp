#include<iostream>
using namespace std;
int main()
{
int st, en,r,ES,OS;
cout<<"Give the starting number "<<endl;
cin>>st;
cout<<"Give the end number "<<endl;
cin>>en;
do
{
r=st%2;
if(r==0)
{ES=ES+st;}
else
{OS=OS+st;}
st=st+1;
}
while(st<=en);
OS=OS-1;
cout<<"Sum of even numbers: "<<ES<<endl;
cout<<"Sum of odd numbers: "<<OS;
return(0);
}
