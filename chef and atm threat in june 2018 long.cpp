#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,k,n;
	for(int i=10;i<1000;i++)
	{
		int ct=0;
		string str;
		str.push_back(i);
		reverse(str.begin(),str.end());
		if(i==stoi(i)) 
		{
			cout<<i<<endl;
			ct++;
		}
		cout<<"TOTAL = "<<ct<<endl;;
	}
	return 0;
}
