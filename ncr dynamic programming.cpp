
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
size_t combinations(size_t n ,size_t r)
{
    if(n==r) return 1;
    r = n-r;
    int arr[n+1][n+1]={0};
    arr[0][0]=1;
    arr[1][0]=1;
    arr[1][1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=r;j++)
        {
            arr[i][0] = 1;
           
            arr[i][j]  = (arr[i-1][j-1])%(MOD) + (arr[i-1][j])%MOD;
          
        }
    }
    return arr[n][r];
}


int main()
 {

    int T,n,r;
    cin>>T;
    while(T--)
    {
        cin>>n>>r;
        cout<<combinations(n,r)<<endl;
    }
	return 0;
}

