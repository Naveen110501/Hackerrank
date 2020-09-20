/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<cstdio>
#include<sstream>
#include<string>
#include<algorithm>
#include<chrono>
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef unsigned long long int ull;
void using_loop(ull x)
{
	ull x2=x;
	ull rev=0;
	while(x2>0)
	{
		ull rem=x2%10;
		//sum=sum+rem;
		rev=rev*10+rem;
		x2=x2/10;
	}
		if(x==rev) cout<< "THE ENTERED NUMBER IS A PALINDROME";
	else cout<<"THE ENTERED NUMBER IS NOT  A PALINDROME";
	
}
void using_string(ull x)
{
		
	string p;
	stringstream ss;
	ss<<x;
	p=ss.str();
	reverse(p.begin(),p.end());
	stringstream ss2(p);
	ull x2;
	ss2>>x2;
	if(x==x2) cout<< "THE ENTERED NUMBER IS A PALINDROME"<<endl;
	else cout<<"THE ENTERED NUMBER IS NOT  A PALINDROME"<<endl;
}
int main()
{
	ull x;
	cout<<" ENTER A NUMBER ";
	cin>>x;
	//auto start,end;
	auto start = high_resolution_clock::now();
	using_string(x);
	auto stop = high_resolution_clock::now(); 
	auto duration = duration_cast<nanoseconds>(stop - start);
	cout << endl<<"TIME TAKEN BY STRING="<<duration.count() << endl; 

	auto start1=high_resolution_clock::now();
	using_loop(x);
		auto stop1 = high_resolution_clock::now(); 
	auto duration1 = duration_cast<nanoseconds>(stop1 - start1);
	cout << endl<<"TIME TAKEN BY LOOPS="<<duration1.count() << endl; 

	return 0;
}
