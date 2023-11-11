//This program was created to display a marksheet.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int e, u, m, c, p, r, t;
	string n, g;
	cout<<"Enter your Name. \n";
	cin>>n;
	cout<<"Enter your Roll number. \n";
	cin>>r;
	cout<<"Enter your Group. \n";
	cin>>g;
	cout<<"Enter Marks in English out of 100 \n";
	cin>>e;
	cout<<"Enter Marks in Urdu out of 100 \n";
	cin>>u;
	cout<<"Enter Marks in Math out of 100 \n";
	cin>>m;
	cout<<"Enter Marks in Computer out of 100 \n";
	cin>>c;
	cout<<"Enter Marks in Physics out of 100 \n";
	cin>>p;
	t=e+u+m+c+p;
	system("cls");
	cout<<"\n                                                         Marksheet\n";
	cout<<"                                              ___________________________________\n";
	cout<<"\nName of Student:            "<<n;
	cout<<"\nRoll Number of Student:     "<<r;
	cout<<"\nGroup:                      "<<g;
	cout<<"\n========================================================================================================================\n";
	cout<<"\nSubject                                             Marks obtained out of 100";
	cout<<"\n________________________________________________________________________________________________________________________\n\n";
    cout<<"\nEnglish                                                      "<<e;
    cout<<"\nUrdu                                                         "<<u;
    cout<<"\nMath                                                         "<<m;
    cout<<"\nComputer science                                             "<<c; 
    cout<<"\nPhysics                                                      "<<p;
    cout<<"\n\n________________________________________________________________________________________________________________________\n\n";
    cout<<"\nTotal Marks Obtained                                         "<<t;
    cout<<"\n========================================================================================================================\n";
    cout<<"\nMade by Ramsha Ali\n";
    return(0);
	}
