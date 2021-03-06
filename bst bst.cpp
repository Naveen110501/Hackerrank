#include<iostream>
#include<algorithm>
using namespace std;
class node {
	public:
	int data; 
	node* left;
	node* right;
	node* Insert(node* root,int data);
	bool Search(node* root,int data);
	void inorder(node *root);
	void find_min(node* root);
	void find_max(node* root);
	void preorder(node*);
	void postorder(node*);
};
void node::find_max(node *root)
{
	while(root->right!=NULL)
	{
		root=root->right;
	}
	cout<<"\nMAXIMUM DATA = "<<root->data;
}
void node::find_min(node* root)
{
	while(root->left!=NULL)
		root=root->left;
	cout<<"\nMINIMUM DATA = "<<root->data;
}
node* node:: Insert(node* root,int data) {
	if(root == NULL) {
		root = new node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
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
	
		preorder(root->left);
		preorder(root->right);
			cout<<root->data<<" ";
	}
}
int main() {
	node* root = NULL;  
	char ch;
	int choice,input;
	cout<<"\n1.INSERTION \n2.INORDER \n3.PREORDER\n4.POSTORDER\n5.SEARCH\n6.DELETION\n7.MINIMUM\n8.MAXIMUM";
		do
	{
		cout<<"\nENTER THE CHOICE !";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nENTER THE ELEMENT TO INSERT !";
				cin>>input;
				root = root->Insert(root,input);
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
			
			case 7:
				root->find_min(root);
				break;
			case 8:
				root->find_max(root);
				break;
		}
		cout<<"\nDO YOU CONTINUE?";
		cin>>ch;
	}while(ch=='y');

}
