#include<iostream>
#include<cstring>
using namespace std;
class bank
{
	public:
	int balance,bala,aaammmttt;
	string name;
	int acc_num;
	int IBAN,routing_num;

	public:
	
		
		void getdetails()
		{
			
				cout<<"\nENTER THE ACCOUNT NUMBER , HOLDER NAME , ACCOUNT BALANCE,IBAB NUMBER AND ROUTING NUMBER";
	int acc_num ,bal,ibab,route;
	string names;
	cin>>acc_num>>name>>bal>>ibab>>route;
	this->balance=bal;
	bala=bal;
	this->IBAN=ibab;
	this->name=names;
	this->routing_num=route;
		}
		void display()
		{
			cout<<"balance = "<<balance;
		}
};
class loan_acc : public bank
{
	public:
	int loan_no,amt,emi;
	public:

		
		void getdata()
		{
				cout<<"\nENTER THE LOAN NUM,AMT ,EMI";
	int nums,amts,emis;
	cin>>nums>>amts>>emis;	
		this->amt=amts;
		aaammmttt=amts;
			this->emi=emis;
			this->loan_no=nums;
		}
		void calc_emi();
};
void loan_acc :: calc_emi()
{
//	cout<<"\nAMOUNT = "<<amt<<endl;
//	amt=amt -this->emi;
	
//	cout<<"\nAMOUNT = "<<amt<<endl<<"emi = "<<emi ;cout<<"\nbalance = "<<balance<<endl;
//	balance = balance - emi;
	cout<<"\nAMOUNT = "<<amt-emi<<"\n"<<"BALANCE="<<balance-emi;	
}
class recurring_deposit : public bank
{
	float p,n;
	float r;
	float interest,maturity_amt;
	public:
		void calculate_recurring()
		{
	cout<<"\nENTER THE P,N,r TO CALCULATE RATE AT 6%";
	cin>>p>>n>>r;
	interest = p*n*r*(n+1) / 2400;
	maturity_amt = p+interest;
	balance = balance  +  maturity_amt;
	cout<<"\nFINAL ACCOUNT BALANCE : "<<bala-aaammmttt ;
}};
int main()
{
	

	bank bank_obj;
	bank_obj.getdetails();
	bank_obj.display();
	


	loan_acc loan_obj;
	loan_obj.getdata();
	loan_obj.calc_emi();


	recurring_deposit dep_obj;
	dep_obj.calculate_recurring();
	
	
}
