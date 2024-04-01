#include<iostream>
using namespace std;
int main()
{
	char abd;
	cout<<"Enter a character ";
	cin>>abd;
	if(abd=='a'||abd=='e'||abd=='i'||abd=='o'||abd=='u'||abd=='A'||abd=='E'||abd=='I'||abd=='O'||abd=='U')
	cout<<"The character is a vowel";
	else 
	cout<<"Your character is not a vowel";
	return(0);
}
