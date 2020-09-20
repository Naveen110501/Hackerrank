
#include<iostream>
using namespace std;
class lib
{
int issn,cost,dd,mm,yy;
string bk_name,author_name;

public:
void getdetails();
void display();
void calculate();
 lib(int d=10,int m=7,int y=2019)
{

dd=d;
mm=m;
yy=y;

}
};


void lib::getdetails()
{
cout<<"ENTER THE ISSN NUMBER , BOOK NAME , AUTHOR NAME,cost:";
cin>>issn>>bk_name>>author_name>>cost;
//cout<<"ENTER THE ISSUE DATE:";
//cin>>dd>>mm>>yy;
}





void lib::display()
{
cout<<"ISSN="<<issn<<endl<<"BOOK NAME="<<bk_name<<endl<<"AUTHORNAME="<<author_name<<endl<<"ISSUE="<<dd<<" "<<mm<<" "<<yy<<endl<<"COST="<<cost<<endl;
}




void lib::calculate()
{
int dd2,mm2,yy2,must_dd,must_mm,must_yy,fine=0;

if(this->dd + 15 >30)
{
must_dd=(this->dd+15) % 30;
must_mm=++ this->mm ;
if(must_mm > 12)
{
must_mm=must_mm%12;
must_yy=++ this->yy;
}
else
{
	must_yy=this->yy;
}
}
else
{
	must_dd=dd+15;
	must_mm=this->mm;
	must_yy=this->yy;
}
cout<<"\nmust RETURN DATE  = :"<<must_dd<<" "<<must_mm<<" "<<must_yy<<endl;

cout<<"ENTER THE RETURN DATE : ";
cin>>dd2>>mm2>>yy2;
int fine_dd,fine_mm,fine_yy;
if(dd2 > 25)
{
	fine=2*(dd2-must_dd);
}
if(mm2>must_mm)
{
	fine_dd=30 + dd2;
	if(fine_dd >40)
	{
		fine=5*(fine_dd - must_dd);
	}
	cout<<"\najai\n"<<fine_dd;
	if(fine_dd <=40)
	fine=2*(fine_dd - must_dd);
	
}

/*if(dd2<=must_dd && mm2<=must_mm && yy2<=must_yy)
{
cout<<"ACCEPTED";
}
else
{
if(must_dd-dd2 <=15 || must_mm-mm2>1||must_yy-yy2>0)
{
cout<<"FINE OF RUPEES 2";
fine=2;
}
if(must_dd-dd2 >15 && must_dd-dd2<30 || must_mm-mm2>1||must_yy-yy2>0) fine=30;
if( must_dd-dd2>30 || must_mm-mm2>1||must_yy-yy2>0)
{
cout<<"\n FINE OF RUPEES 30\n";
fine=cost;
}
}
*/

cout<<"\n  TOTAL FINE="<<fine<<endl;
}


int main()
{
 lib obj;
obj.getdetails();
obj.calculate();
obj.display();
return 0;
}

