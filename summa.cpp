#include<iostream>
#include<cmath>
using namespace std;
size_t expo(size_t n,size_t power)
{
	if(power==0) return 1;
	else
	{
		if(power%2==0)
		{
			size_t y=expo(n,power>>1);
			return y*y;
		}
		else
		{
			return n*expo(n,power-1);
		}
	}
}
int main()
{
	cout<<"enter n,power";
	size_t n,power;
	cin>>n>>power;
//	cout<<pow(n,power)<<endl;
	//cout<<power*log(n)<<endl;
//cout<<expo(n,power);
cout<<exp(power*log(n));
}
