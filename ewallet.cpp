#include<iostream>
#include<cstdio>
using namespace std;
class  bank
{
	int amt;
	string name;
	public:
		bank(int bal, string name)
		{
			this->amt=bal;
			this->name =  name;
		}
		friend class ewallet;
};
class ewallet
{
	int c;
	public:
		char ch,sur;
		ewallet()
		{
			c=0;
		}
		void calculate(bank obj)
		{
			int x;
			
		while(1)
		{
		
		cout<<"ENTER THE AMOUNT TO WITHDRAW FROM BANK  : ";
		cin>>x;
		obj.amt = obj.amt-x;
		//c=c + x+0.01*x;
		c=c+x;
		obj.amt=obj.amt-(0.01*x);
		cout<<"\nAMOUNT IN E-WALLET : "<<c<<"\nAMOUNT IN BANK : "<<obj.amt;
		cout<<"\nDO YOU SURRENDER ?";
		cin>>sur;
		if(sur=='y') 
		{
		obj.amt=obj.amt+c;
		c=0;
		}cout<<"DO YOU CONTINUE?";
		cin>>ch;
		if(ch!='y')
		{
			cout<<"\nAMOUNT IN E-WALLET : "<<c<<"\nAMOUNT IN BANK : "<<obj.amt;
		break;
		}}
			
	}
	
	
};
int main()
{
	int x,y;
	cout<<"ENTER THE BALANCE AMOUNT : ";
	cin>>x;
	cout<<"ENTER THE ACCOUNT HOLDER NAME : ";
	string name;
	cin>>name;
	bank obj(x,name);
	ewallet wallet;
	wallet.calculate(obj);
	return 0;
}
