#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;
bool bs(vector<unsigned long long int > arr,unsigned long long int target)
{
	if(arr.size()==0) return 0;
	sort(arr.begin(),arr.end());
	unsigned long long int low,high,mid;
	low=arr[0];
	high=arr.size()-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(arr[mid]==target)
		{
			return true;
		}
		else if(arr[mid]<target)
		{
			low=mid+1;
			
		}
		else if(arr[mid]>target)
		{
			high=mid-1;
		}
		mid=(low+high)/2;
	}
	return false;
}
int main()
{
	unsigned long long int T;
	vector<unsigned long long int >arr;
	cin>>T;
	while(T--)
	{
		unsigned long long int N,i,x,flag=0;
		cin>>N;
		for(i=0;i<N;i++)
		{
			cin>>x;
			if(!bs(arr,x))
				arr.push_back(x);
			else {
				flag=1;
				break;
			}	
		}
		(flag==0)?cout<<"NO\n":cout<<"YES\n";
		arr.clear();
		
	 }
 
	return 0;
}
