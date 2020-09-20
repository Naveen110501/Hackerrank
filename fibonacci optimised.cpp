#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	size_t n;
	cout<<"enter n";
	cin>>n;
	size_t arr[n];
	arr[0]=0;
	arr[1]=1;
	cout<<arr[0]<<" "<<arr[1]<<endl;
	for(size_t i=2;i<=n;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
		cout<<arr[i]<<endl;
	}
	cout<<endl<<arr[n];
	return 0;
}
