#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 100
template <class T>
class queue_
{
	T Q[100];
	int rear,front;
	public:
		queue_()
		{
			rear=front=-1;
		}
		void enqueue()
		{
				if(front==-1 && rear==-1)
					{
					rear=0;		
					}
				cout<<"INSERT A ELEMENT TO ENQUEUE !";
				T input;
				cin>>input;
				if(front==MAX-1)
				{
					cout<<"\nQUEUE OVERFLOW !";
				}
				else	
				{
					Q[++front]=input;
				}				
				
		}
		void dequeue()
		{
			if(rear==-1 || front<rear)
			{
				cout<<"\nQUEUE UNDERFLOW !";
			}
			else
			{
				T pop = Q[rear++];
				cout<<"\nELEMENT DEQUEUED = "<<pop;
			}
		}
		void display()
		{
			cout<<"\n";
			if(rear==-1) cout<<"\nQUEUE IS EMPTY !";
			else
			{
			
			for(int i=rear;i<=front;i++)
			{
				cout<<Q[i]<<" ";
			}
		}
		}
};
int main()
{
	queue_ <int>Que;
	queue_ <char>char_Q;
	queue_ <float>float_Q;
	cout<<"\n1.INTEGER QUEUE !\n2.CHARACTER QUEUE ! \n3.FLOAT QUEUE !";
	cout<<"\nENTER THE CHOICE(1/2/3)";
	int d;
	cin>>d;
	switch(d)
	{
		case 1: goto Q1;break;
		case 2:goto Q2;break;
		case 3: goto Q3;break;
	}
	
	int choice;
	char ch;
	
	Q1:
			cout<<"1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY";
	do
	{
	//	cout<<"1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY";
		cout<<"\nENTER THE CHOICE";
		cin>>choice;
switch(choice)
{
	case 1: Que.enqueue();break;
	case 2: Que.dequeue();break;
	case 3: Que.display();break;
	default: cout<<"\nENTER THE VALID OPTION!";
}
cout<<"\nDO YOU CONTINUE ?";
cin>>ch;
	}while(ch=='y');
	
	goto  end;
	Q2:
			cout<<"1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY";
	do
	{
	//	cout<<"1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY";
		cout<<"\nENTER THE CHOICE";
		cin>>choice;
switch(choice)
{
	case 1: char_Q.enqueue();break;
	case 2: char_Q.dequeue();break;
	case 3: char_Q.display();break;
	default: cout<<"\nENTER THE VALID OPTION!";
}
cout<<"\nDO YOU CONTINUE ?";
cin>>ch;
	}while(ch=='y');
	goto end;
	Q3:
			cout<<"1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY";
	do
	{
	
		cout<<"\nENTER THE CHOICE";
		cin>>choice;
switch(choice)
{
	case 1: float_Q.enqueue();break;
	case 2: float_Q.dequeue();break;
	case 3: float_Q.display();break;
	default: cout<<"\nENTER THE VALID OPTION!";
}
cout<<"\nDO YOU CONTINUE ?";
cin>>ch;
	}while(ch=='y');
	
	end:
	return 0;
}
