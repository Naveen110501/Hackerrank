
#include<iostream>
using namespace std;
class complex
{
	float real,img;
	public:
		complex(float real,float img)
		{
			this->real=real;
			this->img=img;
		}
		
		complex()
		{
		}
		void display()
		{
			cout<<"THE NUMBERS ARE:"<<real;
			if(img>=0)
			cout<<"+";
			cout<<img<<"i"<<endl;
		}
		complex operator + (complex second)
		{
			complex res;
			res.real=this->real + second.real;
			res.img=this->img + second.img;
			return res;
		}
		complex operator - (complex two)
		{
			complex final;
			final.real=this->real - two.real;
			final.img=this->img - two.img;
			return final;
		}
		complex operator * (complex sec)
		{
			complex ret;
			ret.real=this->real*sec.real - this->img*sec.img;
			ret.img=this->real * sec.img + this->img*sec.real;
			return ret;
		}
		complex operator / (complex seco)
		{
			complex give;
			give.real=(this->real*seco.real + this->img*seco.img )/(seco.real*seco.real + seco.img*seco.img);
			give.img=(this->img*seco.real - this->real*seco.img)/(seco.real*seco.real + seco.img*seco.img);
			return give;
		}
};
int main()
{
	
	cout<<"ENTER TWO COMPLEX NUMBERS:";
	float a,b,c,d;
	cout<<"\nenter the real and imaginary parts:";
	cin>>a>>b;
	complex c1(a,b);
	cout<<"ENTER THE SECOND COMPLEX MUMBER REAL AND IMAGINARY PARTS:";
	cin>>c>>d;
	complex c2(c,d);
	complex res1,res2,res3,res4;
	res1=c1+c2;
	cout<<"AFTER ADDITION:"<<endl;
	res1.display();
	
	res2=c1-c2;
	cout<<"AFTER SUBTRACTION:"<<endl;
	res2.display();
	
	res3 = c1*c2;
	cout<<"after MULTIPLICATION:"<<endl;
	res3.display();
	
	res4 = c1/c2;
	cout<<"AFTER DIVISION"<<endl;
	res4.display();
	return 0;
}
