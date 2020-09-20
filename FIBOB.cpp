#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<long long> arr,arr2,a,b;
    int T,N=-1;
    cin>>T;
    while(T--)
    {
       // cin>>N;
       ++N;
        arr.clear();
        a.clear();
        b.clear();
        arr.push_back(0);
        a.push_back(0);
        arr.push_back(1);
        a.push_back(1);
       if(N==0)
       {
           cout<<a[0]<<endl;
       }
       else
       {
        for(int i=2;i<=N;i++)
        {
            arr.push_back(arr[i-1]+arr[i-2]);
            a.push_back(arr[i] % 10);
        }
        for(int i=0;a.size()!=1 ;i++)
        {
        	for(int j=0;j<a.size();j++)
        	{
        	
			if(j%2!=0)
			{
				b.push_back(a[j]);
			}
			}
		a.swap(b);
			b.clear();			
		}
       cout<<N<<" = "<<a[0]<<"\n";
    }
    }
    return 0;
}

