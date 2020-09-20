#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
class bank
{
public:
float balance;
string name;
int acc_num;
public:
void getdetails()
{
cout<<"\nENTER THE ACCOUNT NUMBER \nHOLDER NAME \nACCOUNT BALANCE";
cin>>acc_num>>name>>balance;
}
void display()
{
cout<<"balance = "<<balance
<<"\nname="<<name
<<"\naccount number"<<acc_num;
}
};
class loan_acc : public bank//class 
{

float loan_no,amt,emi;
public:
void calc_emi(float p, float n, float r);
void getdata()
{
cout<<"\nENTER THE LOAN NUM,AMT";
cin>>loan_no>>amt;
float p,n,r;
cout<<"\nENTER THE no of years and rate of interest";
cin>>n>>r;
calc_emi(amt,n,r);}
};
void loan_acc :: calc_emi(float p, float t, float r)
{	
cout<<"\np="<<p<<" n="<<t<<" r="<<r;
r = r / (12 * 100); // one month interest 
t = t * 12; // one month period 
this->emi = ((p * r * pow(1 + r, t)) / (pow(1 + r, t) - 1));
cout<<"\np="<<p<<" n="<<t<<" r="<<r;  
cout<<"\nemi= "<<emi;
amt=amt-emi;
balance = balance + emi;
cout<<"\nAFTER PAYING ......balance = "<<balance<<" AMOUNT ="<<amt;
}
int main()
{
loan_acc loan_obj;
loan_obj.getdetails();
loan_obj.display();
loan_obj.getdata();
}

