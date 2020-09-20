#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,N,i;
	string S;
	cin>>T;
	while(T--)
	{
	    cin>>N>>S;
	    int ct=0;
	    for(i=0;i<N;i++)
	    {
	        if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o'&& S[i]!='u') 
	        {
	            if(S[i+1]=='a' || S[i+1]=='e' || S[i+1]=='i' ||S[i+1]=='o' || S[i+1]=='u')
	            {
	               ct++; 
	            }
	        }
	    }
	    cout<<ct<<endl;
	}
	return 0;
}

