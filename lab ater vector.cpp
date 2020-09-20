#include<iostream>
#include<cstdio>
#include<istream>
using namespace std;
class employee_data;

class employee_data
{
	int id;
	float salary;
	int acc_num,bal;
	string name;
	public:
		employee_data()
		{
		salary=0.00;
			
		}
friend float pay_sal(employee_data&,int );
friend	istream &operator >>(istream  &in ,employee_data &obj);
friend 	ostream &operator <<(ostream  &out,employee_data &obj);
};
istream& operator >>(istream  &in ,employee_data &obj) 
{
in>>obj.id>>obj.acc_num>>obj.name>>obj.bal;
return in;
}
ostream &operator <<(ostream  &out,employee_data &obj)	{
			out<<"\nEMPLOYEE ID = "<<obj.id
				<<"\nACCOUNT NUMBER = "<<obj.acc_num
				<<"\nNAME = " <<obj.name
				<<"\nBALANCE = "<<obj.bal
				<<"\nSALARY = "<<obj.salary;
				return out;
}

		
float pay_sal(employee_data &s1,int sal)
{
	s1.salary=sal*1.0;
	return s1.salary;
}





class company
{
	int sala;
	public:
		company(int basic,int all)
		{
			sala=basic+all;
		}
		int get_sala() {
		return sala;}
	//	friend float pay_sal(employee_data,int ,int );
};








int main()
{
	employee_data obj;
	cout<<"ENTER EMPLOYEE ID , ACCOUNT NUMBER , NAME, BALANCE :\n";
	cin>>obj;
	cout<<obj;
	cout<<"\nENTER THE BASIC  PAY : ";
	int basic;
	cin>>basic;
	cout<<"ENTER THE OTHER ALLOWANCES: ";
	int all;
	cin>>all;
	
	company obj_com(basic,all);
	float salary=pay_sal(obj,obj_com.get_sala());
	 cout<<"CALCULATED SALARY :  "<<salary<<endl;
	 
	 cout<<obj;
	return 0;
}

