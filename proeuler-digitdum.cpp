#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned long long int sum(unsigned long long int x)
{
    unsigned long long int n=pow(2,x);
      unsigned long long int i,sum=0,r,q;
      while (n>0)
      {
            r=n%10;
            sum=sum+r;
            n=n/10;
      }
      return sum;
 }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long long int T,N;
    //cin>>T;
    T=1000;
    while(T--)
    {
        //cin>>N;
        cout<<"2 power"<<T <<" is "<<sum(T)<<endl;
    }
    return 0;
}

