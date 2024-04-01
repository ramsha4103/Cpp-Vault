#include<iostream>
using namespace std;
int main()
{
int tn, st,en;
cout<<"What do you want the table number to be ";
cin>>tn;
cout<<"Where should the table start ";
cin>>st;
cout<<"Where should the table end ";
cin>>en;

for(;st<=en;st=st+1)
{
cout<<tn<<" * "<<st<<" = "<<tn*st<<endl;
st=st+1;
}
return(0);
}
