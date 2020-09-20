#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T,n,m,i,j,input;
    vector<int> arr;
    vector<int> chef;
    vector<int> assistant;
    
    cin>>T;
    while(T--)
    {
        int ct=0;
        cin>>n>>m;
        j=m;
        arr.push_back(0);
        while(m--)
        {
            cin>>input;
            arr.push_back(input);
        }
        sort(arr.begin(),arr.end());
        for(i=1;i<=m;i++)
        {
            if(i==arr[i])
            {
                continue;
            }
            else
            {
                ct++;
                if(ct%2==0)
                {
                    assistant.push_back(i);
                }
                else chef.push_back(i);
                
            }
        }
        for(i=0;i<chef.size();i++)
        {
            cout<<chef[i]<<" ";
        }
        cout<<endl;
         for(i=0;i<assistant.size();i++)
        {
            cout<<assistant[i]<<" ";
        }
        cout<<endl;
     arr.clear();
    chef.clear();
    assistant.clear();
    }
    
	return 0;
}

