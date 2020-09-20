#include<iostream>
using namespace std;
 int tribonacci(int n) {
    int arr[2]={0,1};
    for(int i=2;i<=n;i++)
    {
    	arr[i%2] += arr[(i+1) %2] ;
    	cout<<arr[i%2]<<endl;
	}
	return arr[n%2];
    }

int main()
{
	cout<<tribonacci(5)<<endl;


	return 0;
}
