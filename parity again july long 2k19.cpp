#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
typedef unsigned long long int ull;
using namespace std;
vector<ull> binary(ull num)
{
vector<ull> arr;
ull bin,res;
	while (num > 0)

{

bin = num % 2;
arr.push_back(bin);

//cout << bin;

num /= 2;

}
return arr;
}


int main()
{
	set<ull> arr;
	ull T;
	vector<ull> vec;
	cin>>T;
	
	while(T--)
	{
		
		ull Q;
		ull ct1=0;
		cin>>Q;
		for(ull i=0;i<Q;i++)
		
		{ull o=0,e=0;
			ull x;
			cin>>x;
			if(arr.size()==0)
			{
				arr.insert(x);
				vec=binary(x);
				for(vector<ull> iterator ::itr=vec.begin();itr<vec.end();itr++)
				{
					if(*itr==1) ct1++;
				}		
				if(ct1%2==0)  cout<<"1"<<" "<<"0"<<endl;
				else
				cout<<"0"<<" "<<"1"<<endl;
						
						
			}
			else
			{
				arr.insert(x);
				for(set<ull> iterator ::itr=arr.begin();itr<arr.end()-1;itr++)
				{
					if(x!=*itr)
					{	
					arr.insert(x^itr);
					vec=binary(*itr);
					ct1=0;
					for(vector<ull> iterator ::itr2=vec.begin();itr2<vec.end();itr2++)
				{
						if(*itr2==1) ct1++;
			//ct1++;
				}//	e=ct1;
				//	o=arr.size()-ct1;
				//	cout<<e<<" "<<o<<endl;
					
				if(ct1%2==0)	
				{
					e++;
				}
				else o++;
				
				
				}
				
				
				}
				cout<<e<<endl<<o<<endl
			}
		}
		
		
	}
	return 0;
}
