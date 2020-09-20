#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
class node {
	public:
	int data; 
	node* left;
	node* right;
	node* parent;
	char color;
	
	node()
	{
		
	}
	
	node* Insert(node* root,node*);
	bool Search(node* root,int data);
	void inorder(node *root);
	void find_min(node* root);
	void find_max(node* root);
	void preorder(node*);
	void postorder(node*);
};

void levelorder(node* nodes)
          { 
		  queue <node*> q;
            q.push(nodes);
            while(!q.empty())
            { nodes=q.front();
              cout<<nodes->data<<" "<<"color = "<<nodes->color<<" -- ";
              if(nodes->left!=NULL)
              q.push(nodes->left);
              if(nodes->right!=NULL)
              q.push(nodes->right);
              q.pop();
             }
           }









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



void left_rotate(node* root , node* x)
{
	node* y =new node();
	y=x->right;
	x->right = y->left;
	if(y->left!=NULL)
	{
		y->left->parent = x;
	}
	y->parent = x->parent;
	if(x->parent == NULL)
	{
		root = y;
	}
	else if(x==x->parent->left)
	{
		x->parent->left = y;
	}
	else
	{
		x->parent->right = y;
	}
	y->left = x;
	x->parent = y;
}
void right_rotate(node *&root, node *&pt) 
{ 
    node *pt_left = new node();
	 pt_left = pt->left; 
  
    pt->left = pt_left->right; 
  
    if (pt->left != NULL) 
        pt->left->parent = pt; 
  
    pt_left->parent = pt->parent; 
  
    if (pt->parent == NULL) 
        root = pt_left; 
  
    else if (pt == pt->parent->left) 
        pt->parent->left = pt_left; 
  
    else
        pt->parent->right = pt_left; 
  
    pt_left->right = pt; 
    pt->parent = pt_left; 
} 



node* node:: Insert(node* root,node* temp) {
	if(root == NULL) {
		return temp;
	
	}
	else if(temp->data <= root->data) {
		root->left = Insert(root->left,temp);
		root->left->parent = root;
	}
	else {
		root->right = Insert(root->right,temp);
		root->right->parent = root;
	}
	return root;
}

/*
void insert_fixup(node* root,node* z)
{
	if(root==z)
	{
		root->color = 'b';
		return ;
	}
	while(z->parent->color=='r')
	{
		if(z==z->parent->left)
		{
			node* y ;
			y = new node();
			y = z->parent->parent->right;//uncle
			if(y->color == 'r')
			{
				z->parent->color = 'b';
				y->color='b';
				z->parent->parent->color = 'r';
				z=z->parent->parent;
				
			}
		
			else
			{
			  if(z==z->parent->right)
			{
				z=z->parent;
				left_rotate(root , z);
				
			}
			z->parent->color = 'b';
				z->parent->parent->color = 'r';
				right_rotate(root,z->parent->parent);
				}
				
				
	}
	else
	{
		node* y ;
			y = z->parent->parent->left;//uncle
			if(y->color == 'r')
			{
				z->parent->color = 'b';
				y->color='b';
				z->parent->parent->color = 'r';
				z=z->parent->parent;
				
			}
		
			else 
			{
			if(z==z->parent->left)
			{
				z=z->parent;
				right_rotate(root , z);
			
			}
				z->parent->color = 'b';
				z->parent->parent->color = 'r';
				left_rotate(root,z->parent->parent);
		}
	}
	}
	
	root->color = 'b';
}



*/


void insert_fixup(node *&root, node *&pt) 
{ 
    node *parent_pt = NULL; 
    node *grand_parent_pt = NULL; 
  
    while ((pt != root) && (pt->color != 'b') && 
           (pt->parent->color == 'r')) 
    { 
   parent_pt = pt->parent; 
        grand_parent_pt = pt->parent->parent; 
        if (parent_pt == grand_parent_pt->left) 
        { 
            node *uncle_pt = grand_parent_pt->right; 
            if (uncle_pt != NULL && uncle_pt->color == 'r') 
            { 
                grand_parent_pt->color = 'r'; 
                parent_pt->color = 'b'; 
                uncle_pt->color = 'b'; 
                pt = grand_parent_pt; 
            } 
  
            else
            { 
              
                if (pt == parent_pt->right) 
                { 
                    left_rotate(root, parent_pt); 
                    pt = parent_pt; 
                    parent_pt = pt->parent; 
                } 
  
                right_rotate(root, grand_parent_pt); 
                swap(parent_pt->color, grand_parent_pt->color); 
                pt = parent_pt; 
            } 
        } 
        else
        { 
            node *uncle_pt = grand_parent_pt->left; 
            if ((uncle_pt != NULL) && (uncle_pt->color == 'r')) 
            { 
                grand_parent_pt->color = 'r'; 
                parent_pt->color = 'b'; 
                uncle_pt->color = 'b'; 
                pt = grand_parent_pt; 
            } 
            else
            { 
                if (pt == parent_pt->left) 
                { 
                    right_rotate(root, parent_pt); 
                    pt = parent_pt; 
                    parent_pt = pt->parent; 
                } 
                left_rotate(root, grand_parent_pt); 
                swap(parent_pt->color, grand_parent_pt->color); 
                pt = parent_pt; 
            } 
        } 
    } 
  
    root->color = 'b'; 
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
		cout<<root->data<<" "<<"color = "<<root->color<<" -- ";
		inorder(root->right);
	}
}
void node:: preorder(node *root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" "<<"color = "<<root->color<<" -- ";
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
			cout<<root->data<<" "<<"color = "<<root->color<<" -- ";
	}
}
int main() {
	node* root = NULL;  
	char ch;
	int choice,input;
	cout<<"\n1.INSERTION \n2.INORDER \n3.PREORDER\n4.POSTORDER\n5.SEARCH\n6.DELETION\n7.MINIMUM\n8.MAXIMUM\n9.levelorder";
		do
	{
		cout<<"\nENTER THE CHOICE !";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nENTER THE ELEMENT TO INSERT !.enter -1 to stop";
				while(1)
				{
				
				cin>>input;
				if(input==-1) break;
				
					node* temp;
					temp=new node();
					temp->data = input;
					temp->left=temp->right=temp->parent=NULL;
					temp->color='r';
			
				root = root->Insert(root,temp);
				insert_fixup(root ,temp);
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
			
			case 7:
				root->find_min(root);
				break;
			case 8:
				root->find_max(root);
				break;
				
			case 9:
				levelorder(root);
				break;
				
				
		}
		cout<<"\nDO YOU CONTINUE?";
		cin>>ch;
	}while(ch=='y');

}
