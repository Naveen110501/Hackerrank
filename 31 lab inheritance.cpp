#include<iostream>
#include<cstdio>
using namespace std;
class line 
{
	protected:
	int d1;
	public:
		void getdetails();
		void putdetails();
};
void line:: getdetails()
{
	cout<<"ENTER THE FIRST DIMENSION : ";
	cin>>d1;
}
void line::putdetails()
{
	cout<<"valUE :"<<d1;
}
class rectangle  :public line
{
	protected:
	int  d2;
	public:
		void getdata()
		{
			cout<<"ENTER THE OTHER DIMENSION  FOR RECTANGLE : ";
			cin>>d2; 
		}
		void calculate()
		{
			getdata();
			cout<<"\nAREA OF THE RECTANGLE IS "<<d1*d2;
			cout<<"\nPERIMETER OF THE RECTANGLE IS "<<2*(d1+d2);
		}
};


class cuboid  :public  rectangle
{
	int d3;
	public:
		void get()
		{
			cout<<"\nENTER THE THIRD DIMENSION :" ;
			cin>>d3;	
		}
		void calc_dis()
		{
			get();
			cout<<"\nVOLUME OF CUBOID = "<<d1*d2*d3;
			cout<<"\nSURFACE AREA OF CUBOID = "<<2*((d1*d2 )+ (d1*d3) + (d3*d2));
		}
	
};
int main()
{
	cuboid obj3;
	obj3.getdetails();
	obj3.calculate();
	obj3.calc_dis();
	return 0;
}
