#include<iostream>
#include<cmath>
#include<sstream>
#include<cstring>
using namespace std;
class bank
{
	size_t acc_no,balance;
	public:
		bank()
		{
			balance=100000;
		}
		void getdetails()
		{
			flag1:
			string d;
			cout<<"\nENTER THE ACCOUNT NUMBER !";
			cin>>d;
		//	cout<<"\n"<<d.length();
			try
			{
				if(d.length() < 10 || d.length() > 10)
				{
					throw d;
				}
				else 
				{
					stringstream ss(d);
					ss>>acc_no;	
				}
			}
			catch(string d)
			{
				cout<<"\nEXCEPTION : YOU CANNOT HAVE NUMBER OF DIGITS IN ACCOUNT NUMBER LESS THAN 10 or MORE THAN TEN !";
				goto flag1;
			}
			//no_of_records++;
		}
		void display()
		{
			cout<<"\nBALANCE = "<<balance<<"\nACCOUNT NUMBER = "<<acc_no<<"\n";
			
		}
		void deposit()
		{
			flag2:
			cout<<"\nENETER THE AMOUNT TO DEPOSIT !";
			int d;
			cin>>d;
			try
			{
				if(d>100000)
				{
					throw d;
				}
				else 
				{
					balance = balance + d;
				}
			}
			catch(int d)
			{
				cout<<"\nEXCEPTION : YOU CANNOT PUT MORE THAN 1 LAKH IN A  SAME STRETCH !";
				goto flag2;
			}
		}
		void withdrawal()
		{
			flag3:
			int d;
			cout<<"\nENTER THE AMOUNT OF MONEY TO WITHDRAW ! ";
			cin>>d;
			try
			{
			if(d > balance)
			{
				throw d;
			}
			else balance =balance - d;
			}
		catch(int d)
		{
			cout<<"\nEXCEPTION : INSUFFICIENT BALANCE !";
			goto flag3;
		}
		}
		
		
};
int main()
{
	int n,choice;
	bank obj;
	char ch;
	obj.getdetails();
	cout<<"\n1.DISPLAY\n2.DEPOSIT \n3.WITHDRAWAL\n";
	do
	{
		cout<<"\nENTER THE CHOICE : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj.display();
				break;
			case 2:
				obj.deposit();
				break;
			case 3:
				obj.withdrawal();
				break;
			default:
				cout<<"\nENTER THE CORRECT OPTTION !";
				
			}
			cout<<"\nDO YOU CONTINUE ?";
			cin>>ch;	
			}while(ch=='y');
	return 0;
}
