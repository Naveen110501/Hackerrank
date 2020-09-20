#include<iostream>
#include<sstream>
#include<limits>
#include<cmath>
using namespace std;
int main()
{
/*	int x2;
	cin>>x2;
	string p;
	stringstream ss2;
	ss2<<x2;
	p=ss2.str();
	cout<<p<<"IS A STRING"<<endl;
	string s;
	//cin.ignore(300,'\n');
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	getline(cin,s);
	stringstream ss(s);
	int x;
	ss>>x;
	cout<<x*25;
	cout<<endl<<"-----------------"<<endl;*/
	
//	cout<<numeric_limits<int>::max();
//	cout<<endl<<sizeof(int)<<" "<<sizeof(float)<<" "<<sizeof(char)<<" "<<sizeof(double)<<endl;
//	cout<<"\"\"";
	int maxi;
//	cin>>maxi;
//	cout<<maxi;

short int a,b;
cin>>a>>b;
short int c=a*b;
cout<<endl<<" "<<c;
cout<<endl<<sizeof(short int);
	return 0;
}
