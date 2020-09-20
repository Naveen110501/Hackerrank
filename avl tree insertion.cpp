#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
class node
{
	public:
	int data;
	node *left;
	node *right;
	int hh;
	public:
			bool Search(node* root,int data);
		void inorder(node*);
		void postorder(node*);
		void preorder(node*);
		node* insert(node*,int);
		node* left_rotate(node*);
		node* right_rotate(node*);
		void levelorder(node*);
		int height(node*);
};
bool node:: Search(node* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}


void node::levelorder(node* root)
{
	queue<node*> Q;
	Q.push(root);
	cout<<endl;
	while(!Q.empty())
	{
		cout<<Q.front()->data<<" ";
		node* root=Q.front();
		if(root->left!=NULL) Q.push(root->left);
		if(root->right!=NULL) Q.push(root->right);
		Q.pop();
	}
}






int node:: height(node* root)
{
	return root==NULL ?-1:root->hh;
}
void node:: inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
void node:: preorder(node *root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
void node:: postorder(node * root)
{
		if(root!=NULL)
	{
	
		postorder(root->left);
		postorder(root->right);
			cout<<root->data<<" ";
	}
}
node* node:: left_rotate(node* k1)
{
	node* k2=k1->right;
	k1->right=k2->left;
	k2->left = k1;
	k2->hh = max(height(k2->left),height(k2->right))+1;
	k1->hh = max(height(k1->left),height(k1->right))+1;
	
	return k2;
	
}
node* node::right_rotate(node* k2)
{
	node* k1=k2->left;
	k2->left=k1->right;
	k1->right=k2;
	k1->hh=max(height(k1->left),height(k1->right))+1;
	k2->hh=max(height(k2->left),height(k2->right))+1;
	return k1;

}

node* node:: insert(node* root,int data) {
	if(root == NULL) {
		root = new node;
		root->data = data;
		root->left = root->right = NULL;
		root->hh=0;
	}
	else if(data <= root->data) {
		root->left = insert(root->left,data);
	}
	else {
		root->right = insert(root->right,data);
	}
	
	root->hh = max(height(root->left),height(root->right))+1;
	int bal=height(root->left) -height(root->right);
	if(bal > 1 && data<root->left->data)
	{
		return right_rotate(root);
	}
	else if(bal>1 && data > root->left->data)
	{
		root->left = left_rotate((root->left));
		return right_rotate(root);
	}
	else if(bal  <-1 && data > root->right->data)
	{
		return left_rotate(root);
	}
	else if(bal<-1 && data < root->right->data)
	{
		root->right = right_rotate(root->right);
		return left_rotate(root);
	}
	else 
	return root;

		return root;
}

int main() {
	node* root = NULL;  
	char ch;
	int choice,input;
	cout<<"\n1.INSERTION \n2.INORDER \n3.PREORDER\n4.POSTORDER\n5.SEARCH\n6.LEVEL ORDER TRAVERSAL";
		do
	{
		cout<<"\nENTER THE CHOICE !";
		cin>>choice;
		switch(choice)
		{
			case 1:
				while(1)
				{
				cout<<"\nENTER THE ELEMENT TO INSERT and PRESS -1 to exit !";
				cin>>input;
				if(input!=-1)
				root = root->insert(root,input);
				else
				{
					cout<<endl<<root->data<<" "<<root->left->data<<" "<<root->right->data;
				  break;}
				}
					     
				break;
			case 2:
				cout<<endl;
				root->inorder(root);break;
			case 3:
				cout<<endl;
				root->preorder(root);break;
			case 4:
				cout<<endl;
				root->postorder(root);break;
			case 5:
					int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	if(root->Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
	break;
			case 6:root->levelorder(root);break;
		}
		cout<<"\nDO YOU CONTINUE?";
		cin>>ch;
	}while(ch=='y');

}

