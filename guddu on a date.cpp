#include<iostream>
#include <cstdio>
using namespace std;
unsigned long long int sumu(unsigned long long int x)
 {
 	unsigned long long int num,digit, sum = 0;
  num=x;
    while (num > 0)
    {
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
    }
 return sum;
 }
int main()
{
   	unsigned long long int num, temp, digit, sum = 0;
 	 unsigned long long int T,N,X,z;
  cin>>T;
  while(T--)
  {
cin>>N;
X=sumu(N);
if(X>9 && X%10!=0 ) X=X%10;
if(X%10==0) X=10;
		cout<<N*10+(10-X)<<endl;

}
return 0;
}
