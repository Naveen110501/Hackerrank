#include <iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	// your code goes here
	int T,N;
	vector<int> A;
	cin>>T;
	while(T--)
	{   
	   string S;
	   getline(cin,S);
	   int len=S.length(),x;
	   
	   sscanf(S,"%d",&x);
	   
	   for(int i=0;i<S.length();i++)
	   {
	   		if(S.length()-1 ==stoi(S[i]))
	   		{
	   			N=stoi(S[i]);
				   break;		
			}
	   }
	   for(int i=0;i<N;i++)
	   {		
	   		A.push_back(stoi(S[i]));
	   }
	   sort(A.begin(),A.end());
	   cout<<A[A.size()-1]<<endl;

	}
	
	return 0;
}

