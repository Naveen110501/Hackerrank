#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
unsigned long long 	int l,r,g,T,no_of_Terms;
	cin>>T;
	while(T--)
	{
		cin>>l>>r>>g;
		unsigned long long  int first=0,last=0;
		if( g>r)
		{
			cout<<"0"<<endl;
			continue;
		}

		if(l%g==0) first=l;
		else first=l+(g-l%g);
		
		if(r%g==0) last=r;
		else last=r-(r%g);
	
		no_of_Terms=last/g-first/g + 1;
		
		if(no_of_Terms==1  && first>g) cout<<"0"<<endl;//BECAUSE IN THAT SET HIGHEST GCD MUST BE 'g'.........
		else
		cout<<no_of_Terms<<endl;
	}
	return 0;
}
