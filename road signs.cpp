#include<iostream>
#include<cmath>
#include<algorithm>
#include<set>
using namespace std;
typedef unsigned long long int ull;
int main()
{
	ull T,K;
	cin>>T;
	while(T--)
	{
		cin>>K;
		cout<<((pow(2,K)%1000000007)*10)%1000000007; 
	}
	return 0;
}





























/*int main()
{
	set<int> arr;
	int K,T;
	cin>>T;
	while(T--)
	{
		cin>>K;
		
		for(int i=0;i<k;i++)
		{
			set<int> arr1,arr2;
			int first=i,second=pow(10,k)-i-1;
			string s1=to_string(first);
			string s2=to_string(second);
			int max;
			for(int j=0;j<s1.length();j++)
			{
				arr1.insert(stoi(s1[j],nullptr));
			}
			for(int j=0;j<s2.length();j++)
			{
				arr1.insert(stoi(s2[j],nullptr));
			}
			if(arr.size()==2)
			{
				cout<<first<<endl;
			}
			
			
		}
		
	}
	return 0;
}








































#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string>
#include<set>
typedef unsigned long long int ull;
using namespace std;
int main()
{
	set<ull> arr;
	ull k,T;
	cin>>T;
	while(T--)
	{
		cin>>k;
		ull ct=0;
		
		for(ull i=0;i<pow(10,k);i++)
		{
			set<ull> arr1,arr2;
			ull first=i,second=pow(10,k)-i-1;
		//	cout<<" "<<first<<" "<<second<<" ";
			string s1=to_string(first);
			string s2=to_string(second);
		//	cout<<" "<<s1<<" "<<s2<<" ";
			ull max;
			for(ull j=0;j<s1.length();j++)
			{
			   // int x=stoi(s1[j],nullptr,10);
				arr1.insert(s1[j]-48);
			}
			for(ull j=0;j<s2.length();j++)
			{
				arr1.insert(s2[j]-48);
			}
			if(arr1.size()==2)
			{
			//	cout<<first<<endl;
			ct++;
			}
			
			
		
		}
		cout<<ct<<endl;
		
	}
	return 0;
}
*/
