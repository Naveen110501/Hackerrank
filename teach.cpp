#include<iostream>
using namespace std;

int scope=10;

class sri
{
	private:
	int a,b;
	
	public:
		//int a,b;
		sri(int x,int y)
		{
			a=x;
			b=y;
		//	cout<<"ajai";	
		}
		sri()
		{
			float a;
			float b;
			
		}
		
		void display()
		{
			cout<<endl<<a<<" "<<b<<endl;
		//	get(3,4);
		}
	
	~sri()
	{
		a=0;
		b=0;
	}
	
};
void func()
{
	cout<<"balaji"<<endl;
}
void func(int a)
{
	//cout<"sri"<<" "<<a;
}
void func(float a)
{
	
}

void value(const int &a, int &b)
{
//	a=a+1;
//	b=b+3;
	cout<<" "<<a<<" "<<b;
	
}
int main()
{
	int c;
	cin>>c;
	func();
	func(3);
	const int xxx=3;
	xxx++;
	cout<<xxx;


return 0;
}
