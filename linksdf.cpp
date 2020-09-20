#include<iostream>
#include<cstdlib>
using namespace std;
class node
{
	public:
		int data;
		node *next;
		node(int data)
		{
			this->data = data;
			this->next=NULL;
		}
		node* insert(node *head);
		void display();
		
};
node *insert(node *head,node* run)
{
	if(head==NULL)
	{
		return head;
	}
	else
	{
		node *temp = new node(0);
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next = run ;
		return head;
	}
}
void display(node *head)
{
	cout<<"\nDISPLAYING : ";
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}
}
int main()
{
	int n;
	cout<<"ENTER THE NUMBER OF NODES";
	cin>>n;
	int data;
		cin>>data;
		node *disp = new node(0);
		node *head=new node(data);
	for(int i=1;i<n;i++)
	{
		int data;
		cout<<"\nENTER THE NODE DATA FOR "<<i<<"NODE\t";
		cin>>data;
		node *temp=new node(data);
		head =  insert(head,temp);
	}
	disp.display(head);
}
