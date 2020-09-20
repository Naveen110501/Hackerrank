#include<iostream>
using namespace std;
int main()
{
	int x,y ,z=0;
	cout<<"ENTER THE TWO VALUES !";
	cin>>x>>y;
	try
	{
		if(y==0)
		{
			throw y;
		}
		else 
		{
			z=x/y;	
		}
	}
	catch (int s)
	{
		cout<<"\nEXCEPTION :cant divide by zero!";
	}
	cout<<"\nvalue of z ="<<z;
	return 0;
}
