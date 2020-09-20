#include<iostream>
#include<cstdio>
using namespace std;
struct node
{
	
	int data;
	node *left,*right;
//	public:
	
		node()
		{
			this->data=0;
			left=right=NULL;
		}
		node* insert(int data , node* root);
		void inorder(node*);
		void preorder(node*);
		void postorder(node*);
		void search(node*);
		void deletion();
};
typedef struct node node;
node* insert(int dat, node* root)
{
	if(root==NULL)
	{
		root->data = dat;
		return root;
	}
	else if(root->data > dat)
	{
		root->left=insert(dat ,  root->left);
	}
	else if(root->data < dat)
	{
		root->right = insert(dat, root->right);
	}
	return root;
}

void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

int main()
{
	node *obj=NULL,obj2;
	obj = new node;
	char ch;
	int choice,input;
	cout<<"\n1.INSERTION \n2.INORDER \n3.PREORDER\n4.POSTORDER\n5.SEARCH\n6.DELETION";
	do
	{
		cout<<"\nENTER THE CHOICE !";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nENTER THE ELEMENT TO INSERT !";
				cin>>input;
				obj = obj->insert(input,obj);
				break;
			case 2:
				cout<<endl;
				obj->inorder(obj);break;
		}
		cout<<"\nDO YOU CONTINUE?";
		cin>>ch;
	}while(ch=='y');
	return 0;
}
