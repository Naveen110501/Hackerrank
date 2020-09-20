#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
/*	vector<int> arr;
	arr.push_back(45678);
	arr.push_back(2122);
    vector<int> myvector1;
	myvector1.push_back(34);
		myvector1.push_back(343); 
			myvector1.push_back(3433);  
	arr.swap(myvector1);
    cout<< myvector1[0]<<" "<< myvector1[1]<<endl;
	//arr.push_back(0);
	cout<< arr.front();
	cout<<"  "<<*arr.data();
	cout<<" "<<arr.size()<<" "<<myvector1.size();	return 0;*/
	
	vector<int> arr(5,24);
	arr.push_back(45);
	cout<<arr.size()<<" "<<arr.capacity();
	for(int i=0;i<arr.size();i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;
	vector<int> arr2;
	arr2.assign(arr.begin()+1,arr.end()-2);
	for(int i=0;i<arr2.size();i++)
	{
		cout<<" "<<arr2[i];
	}
	cout<<"  before pop"<<arr.size()<<" after pop: ";
	arr.pop_back();
	cout<<arr.size();
	stack <int> st;
	st.push(3);
	st.push(13);
	st.push(113);
	st.push(23);
	st.push(33);
	cout<<"  "<<st.size();
	
}
