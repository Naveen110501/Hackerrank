#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	size_t i=0,n;
	cin>>n;
	for(size_t i=0;i<n; )
	{
		if(i<11)
		{
			cout<<i<<" ";
			i++;
		}
		else
		{
			if(i==11) 
			{
				i=12;
				cout<<i<<" ";
				i=i+9;
				
				}	
				else
				{
					cout<<i<<" ";
					i=i+2;
					cout<<i<<" ";
					i=i+9;
					
				}
		}
	}
		return 0;
}
