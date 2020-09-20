#include<iostream>
using namespace std;
class employee
{
	int emp_id,bpay,da,hra,cca,tax;
	public:
		void getdetails();
		void putdetails();
};

class electricity
{
	int no_of_units;
	public:
		int eb_bill();
	
};
class grocery
{
	int item;
	int cost;
	public:
		int calc_total_amt();
};
class medical_bill
{
	
}
