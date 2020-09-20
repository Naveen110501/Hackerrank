#include<iostream>
#include<cstdio>
using namespace std;
class vector1
{
int i,j,k;
public:
	vector1()
	{
		
	}
	vector1(int a,int b, int c)
	{
		i=a;
		j=b;
		k=c;
		}	
		void putdetails()
		{
			cout<<"\n"<<i<<" "<<j<<" "<<k<<" ";
		}
		vector1 operator + (const vector1 v2)
		{
			vector1 *v3=new vector1;
			v3->i=i+v2.i;
			v3->j=j+v2.j;
			v3->k=k+v2.k;
			return *v3;
		}
		vector1 operator - (const vector1& v2)
		{
			vector1 *v3=new vector1;
			v3->i=i-v2.i;
			v3->j=j-v2.j;
			v3->k=k-v2.k;
			return *v3;
		}
};

int main()
{
	int a,b,c,x,y,z;
	cout<<"ENTER I,J,K COMPONENTS : ";
	cin>>a>>b>>c;
	cout<<"\nENTER THE SECOND VECTOR: ";
	cin>>x>>y>>z;
	vector1 *v1 = new vector1(a,b,c);

	vector1 *v2=new vector1(x,y,z);
	vector1 *v3=new vector1;
	vector1 *v4=new vector1;
	*v3 = *v1 + *v2; //v1(v2)
	*v4 = *v1 - *v2;
	cout<<"\n OUTPUT :\n";
	v3->putdetails();
	v4->putdetails();
	delete v1;
	delete v2;
	delete v3;
	delete v4;
	return 0;
}
