#include<iostream>
#include<vector>
using namespace std;
int ct=0,ct1=0,ct2;
int n;
void reversing(int arr[])
{
	if(ct--)
	{
		reversing(arr++);
	}
	cout<<arr[ct2--];
}
int main()
{
	int x;
//	vector <int> vec;
	int arr[100];
	while(1)
	{
		cin>>x;
		if(x!=-1)
		{
			arr[ct++]=x;
		}else break;
	}
	ct2=ct;
	reversing(arr);
	return 0;
}
