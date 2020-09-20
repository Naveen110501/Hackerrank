#include<iostream>
#include<set>
#include<vector>
using namespace std;
typedef unsigned long long int ull;
ull binary(ull k)
{
	ull sum=0,i=1;
	while(k>0)
	{
		ull rem=k%2;
		sum=sum+rem*i;
		i=i*10;
	}
	return sum;
}
int main()
{
	set<ull> sets,copy;
	vector<ull> arr;
	ull Q,T;
	cin>>T;
	while(T--)
	{
		cin>>Q;
		for (ull i=0;i<Q;i++)
		{
			ull x;
			cin>>x;
			sets.insert(x);
			copy=sets;
				for (set <ull>:: iterator k=sets.begin();k!=sets.end();k++)
		{
			ull ct=0,o=0,e=0;
			set<ull> :: iterator k2=k;
				ull bina;
				bina=binary(*k2);
				ull num=bina;
				//for(ull num=0;num>)
				while(num>0)
				{
					ull remainder=num%10;					
					if(remainder==1)
					{
						ct++;
					}
					num/=10;
				}
			if(ct%2==0) e++;
			o=sets.size()-e;
			cout<<e<<" "<<o<<endl;
	
		}
			for(set<ull> :: iterator j=copy.begin();j!=copy.end() ;j++)
			{
				ull temp=*j^x;
				if(x!=*j)
				{
					sets.insert(temp);
				}
			}
			
		}
	}
	return 0;
}
