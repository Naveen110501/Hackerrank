
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
class node 
{
	public:
	int data;
	node *next;
	public:
		node()
		{
			data=0;
			next = NULL;
		}
		node *insert(node *);
		void display(node *);
};
void node::display(node *run)
{
	int ct=0;
	while(run!=NULL)
	{
		cout<<run->data<<"->"<<" ";
		run=run->next;
		ct++;
	}
	cout<<"\nTOTAL COUNT="<<ct;
}

node* node::insert(node *head)
{
	cout<<"\nENTER THE NODE VALUE:";
	node* temp;
	temp=new node;
	cin>>temp->data;
	if (head==NULL)
	{
		head=temp;
		return head;
	}
	else 
	{
		node *temp2;
		temp2=head;
		while(temp2->next!=NULL)
		{
			temp2=temp2->next;
		}
		temp2->next=temp;
		return head;
	}
}	

void mass(node* root)
{
	if(root->next!=NULL)
	{
		mass(root->next);
	}	
	cout<<root->data<<" ";
}										
int main()
{
	node *head;
	head=new node;
	int n;
	cout<<"ENTER THE NUMBER OF NODES:";
	cin>>n;
	
	head=NULL;
	while(n--)
	{
		
		head=head->insert(head);
		}	
	node *run;
	run = head;
	cout<<"\n DISPLAYING:\n";
	head->display(head);
	cout<<endl;
	mass(head);
	return 0;
}

