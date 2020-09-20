#include<iostream>
using namespace std;
#define max 100
template <typename T>
class stack
{
	T S[max];
	int top;
	public:
		stack()
		{

			top=-1;	
		}
	

void push(T x)
{
	if(top==max-1)
	cout<<"\nSTACK OVERFLOW\n";
	else
	S[++top]=x;
}
T tops()
{
	if(top==-1) 
	{
		cout<<"\nSTACK EMPTY :";
		return NULL;
	}
	return S[top];
}
T pop()
{
	int r=top;
	if(top==-1) 
	{
		cout<<"stack empty";
		return NULL;
			}
	top--;
	return S[r];
}
void display()
{
	int temp=top;
	for (int i=0;temp>=0;i++)
	cout<<S[temp--]<<" ";
}
};
int main()
{
	stack <int> s;
		int x;
	int n;
	char ch;
	cout<<"1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n";
	cout<<"\nENTER THE CHOICE: ";
	cin>>n;
	do
	{
	switch(n)
	{
		case 1:
			cout<<"\nENTER TO PUSH INTO STACK:	";
		
			cin>>x;
			s.push(x);
			break;
		case 2:
			cout<<"\nELEMENT POPPED  =	 "<<s.pop()<<endl;break;
		case 3:
			cout<<"\nELEMENT AT PEEK = "<<s.tops();break;
		case 4:
			 s.display();break;
		}	
		cout<<"\nDO YOU CONTINUE ?";
		cin>>ch;
		if(ch=='y')	{
		cout<<"\nENTER THE CHOICE: ";
	cin>>n;}
	}while(ch=='y');

	return 0;
}
