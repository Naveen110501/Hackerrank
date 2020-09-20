#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> v1,v2;
	int T,ct=0;
	cin>>T;
	while(T--)
	{
		++ct;
	    v1.clear();
	    v2.clear();
	    for(int i=0;i<3;i++)
	    {
	        int x;
	        cin>>x;
	        v1.push_back(x);
	    }
	     for(int i=0;i<3;i++)
	    {
	        int x;
	        cin>>x;
	        v2.push_back(x);
	    }
	   
	   if(v1[0]==v1[1])
	   {
	       if(v2[0]!=v2[1])
	       {
	           cout<<"NOT FAIR";
	           if(ct<T) cout<<endl;
	           continue;
	       }
	   }
	    if(v1[1]==v1[2])
	   {
	       if(v2[1]!=v2[2])
	       {
	           cout<<"NOT FAIR";
	           if(ct<T) cout<<endl;
	           continue;
	       }
	   }
	    if(v1[0]==v1[2])
	   {
	       if(v2[0]!=v2[2])
	       {
	           cout<<"NOT FAIR";
	           if(ct<T) cout<<endl;
	           continue;
	       }
	   }
	   if(v1[0] > v1[1])
	   {
	      if( v2[0]<=v2[1])
	       {
	           cout<<"NOT FAIR";
	           if(ct<T) cout<<endl;
	           continue;
	       }
	   }
	  else if(v1[0] < v1[1])
	  {
	      if(v2[0]>v2[1])
	      {
	          cout<<"NOT FAIR";
	          if(ct<T) cout<<endl;
	           continue;
	      }
	      
	  }
	    if(v1[1] > v1[2])
	   {
	      if( v2[1]<=v2[2])
	       {
	           cout<<"NOT FAIR";
	           if(ct<T) cout<<endl;
	           continue;
	       }
	   }
	  else  if(v1[1] < v1[2])
	  {
	      if(v2[1]>v2[2])
	      {
	          cout<<"NOT FAIR";
	          if(ct<T) cout<<endl;
	           continue;
	      }
	      
	  }
	    if(v1[0] > v1[2])
	   {
	      if( v2[0]<=v2[2])
	       {
	           cout<<"NOT FAIR";
	           if(ct<T) cout<<endl;
	           continue;
	       }
	   }
	  else  if(v1[0] < v1[2])
	  {
	      if(v2[0]>v2[2])
	      {
	          cout<<"NOT FAIR";
	          if(ct<T) cout<<endl;
	           continue;
	      }
	      
	  }
	  
	  
	  cout<<"FAIR";
if(ct<T) cout<<endl;
	    
	}
	return 0;
}

