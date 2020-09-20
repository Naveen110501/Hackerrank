#include<iostream>
#include<string>
#include<cstdio>
#define nullptr NULL
using namespace std;
typedef unsigned long long int ull;
int main()
{
	ull T;
	string N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		if(stoi(N,nullptr)<10)
		{
			cout<<N<<endl;
		}
		else if(stoi(N,nullptr)%10 == 9)
		{
			cout<<N<<endl;
		}
		else
		{
			cout<<stoi(N,nullptr)-(stoi(N,nullptr)%10 + 1);
		}
	}
	return 0;
}
