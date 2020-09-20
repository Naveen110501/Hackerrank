#include<iostream>
using namespace std;
class pre_post
{
	int sec,min,hrs,dd,mm,yy;
	public:
		pre_post(int sec,int min,int hrs,int dd,int mm,int yy)
		{
			this->sec=sec;
			this->min=min;
			this->hrs=hrs;
			this->dd=dd;
			this->mm=mm;
			this->yy=yy;
		}
		void operator ++()
		{
			++sec;
			if(sec>60)
			{
				//++min;
				sec=sec%60;
				++min;
			}
			if(min>60)
			{
				++hrs;
				min=min%60;
				
			}
			if(hrs>24)
			{
				++dd;
				hrs=hrs%24;
			}
			if(dd>31)
			{
				++mm;
				dd=dd%31;
			}
			if(mm>12)
			{
				++yy;
				mm=mm%12;
			}
			
		}
		void operator ++(int)
		{
			dd++;
				if(dd>31)
			{
				mm++;
				dd=dd%31;
			}
			if(mm>12)
			{
				yy++;
				mm=mm%12;
			}
		}
		void display()
		{
			cout<<endl<<"SECONDS = "<<sec
				<<endl<<"MINUTES = "<<min
				<<endl<<"HOURS = "<<hrs
				<<endl<<"DATE = "<<dd
				<<endl<<"MONTH = "<<mm
				<<endl<<"YEAR = "<<yy<<endl;
		}
};


int main()
{
	cout<<"ENTER THE SEC,MIN,HRS,DATE,MONTH,YEAR";
	int s,mi,hr,d,m,y;
	cin>>s>>mi>>hr>>d>>m>>y;
	pre_post obj(s,mi,hr,d,m,y);
	++obj;
	obj.display();

		cout<<"ENTER THE SEC,MIN,HRS,DATE,MONTH,YEAR";
//	int s,mi,hr,d,m,y;
	cin>>s>>mi>>hr>>d>>m>>y;
	pre_post obj2(s,mi,hr,d,m,y);
	obj2++;
	obj2.display();
	return 0;
}
