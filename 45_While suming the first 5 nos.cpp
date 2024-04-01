#include<iostream>
using namespace std;
int main ()
{
int a,b;
a=1;
b=0;
while(a<=5)
{
cout<<a<<endl;
b=b+a;
a++;
}
cout<<"The sum of first five numbers is "<<b;
return 0;
}
