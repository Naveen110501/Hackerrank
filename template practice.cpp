#include<iostream>
#include<cstdio>
using namespace std;
template <typename T>
void swap(T *x,T *y)
{
	T t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int a=90,b=80;
	swap(&a,&b);
	cout<<a<<" "<<b;
	return 0;
}
