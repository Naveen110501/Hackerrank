#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
typedef unsigned long long int ull;

using namespace std;
int main()
{
	vector<ull> arr;
	ull i,j;
	ull T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		j=N;
		ull sum=0;
		while(j--)
		{
			ull x;
			cin>>x;
			arr.push_back(x);
			sum=sum+x;
		}	
		double mean=sum/(N*1.0);
		cout<<" \n mean= "<<mean<<endl;
		double sum2=(N-1)*mean;
		double result=sum*1.0-sum2;
		cout<<"\nresult="<<result<<endl;
			 std::vector<ull>::iterator it;
			it = find(arr.begin(),arr.end(),result);
			if(it != arr.end())
			cout<<it-arr.begin()+1<<endl;
			else
			cout<<"Impossible"<<endl;
			arr.clear();
		
	}
	
	return 0;
}
