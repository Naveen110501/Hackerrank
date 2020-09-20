#include<iostream>
#include<cstdio>
using namespace std;
class node
{
	
	int data;
	node *left,*right;
	public:
	
		node()
		{
		
			left=right=NULL;
		}
		node* insert( node* root,int);
		void inorder(node*);
		void preorder(node*);
		void postorder(node*);
		void search(node*);
		void deletion();
		
};
/*
node* node:: insert(int dat, node* root)
{/*
	if(root==NULL)
	{
		node *he=new node;
		he->data = dat;
		return he;
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
	}*/
	
	node* node:: insert(node* root,int data) {
	if(root == NULL) {
		
		root = new node;
		root->data = data;
		root->left=root->right=NULL;
	}
	else if(data <= root->data) {
		root->left = insert(root->left,data);
	}
	else {
		root->right = insert(root->right,data);
	}
	return root;
}


void node::inorder(node *root)
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
	node *obj=new node();
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
				obj= obj->insert(obj,input);
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
