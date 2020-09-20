#include<iostream>
#include<cstdio>
#include<algorithm>
#define MAX 1
using namespace std;
template <typename T>
class vector_
{
	T *arr;
	int size,ct;
	public:
		vector_()
		{
		//	this->size=size;
			arr = new T;
			size = 2;
			ct=0;
		}
		void pushback()
		{
			try
			{
				if(ct > size)
				{
					throw ct;
				}
				else
				{
					
			cout<<"\nENTER THE VALUE TO PUSH INTO THE VECTOR ! ";
			T x;
			cin>>x;
			arr[ct++]=x;
				
				}
			}
			catch(int x)
			{
				cout<<"\nEXCEPTION : COUNT OF ELEMENTS IS GREATER THAN ORIGINAL SIZE OF THE VECTOR !";
				
			}	
		}
		void display()
		{
			cout<<"\nDISPLAYING! ";
			for(int i=0;i<ct;i++)
			{
				cout<< arr[i] <<" ";
			}
		}
		void minimum()
		{
			T mini=arr[0];
			for(int i=0;i<ct;i++)
			{
				if(arr[i]<mini)
				{
					mini = arr[i];
				}
			}
			cout<<"\nMINIMUM ELEMENT = "<<mini;
				}	
				
				void maximum()
				{
					T maxi = arr[0];
					for(int i=0;i<ct;i++)
					{
						if(arr[i] > maxi)
						{
							maxi = arr[i];
						}
					}
					cout<<"\nMAXIMUM ELEMENT = "<<maxi;
					}	
					void sorting()
					{
						int i,j;
						 for(i=0;i<ct;i++)
						 {
						 	for(j=i+1;j<ct;j++)
						 	{
						 		if(arr[j] < arr[i])
						 		{
						 			swap(arr[i],arr[j]);
								 }
							 }
						 }
						 
						
					}
};
int main()
{
//	cout<<"\nENTER THE SIZE OF THE ARRAY !";
	int x;
//	cin>>x;
			vector_ <int> obj;	
			vector_ <char> obj2;	
		vector_ <float> obj3;	
	start:
	cout<<"\n1.INTEGER VECTOR \n2.CHARACTER VECTOR \n3.FLOAT VECTOR !";
	cout<<"\nENTER THE CHOICE !";
	int choice1,choice2;
	char ch;
	cin>>choice1;
	switch(choice1)
	{
		case 1:goto c1;break;
		case 2:goto c2;break;
		case 3:goto c3;break;
	default: cout<<"\nENTER THE PROPER CHOICE !";
			 goto start;
	}


c1:
	
	cout<<"\n1.PUSH INTO VECTOR !\n2.DISPLAY!\n3.FIND MINIMUM ! 4.FIND MAXIMUM !\n5.SORT \n";
	do
	{
		cout<<"\nENTER THE CHOICE !";
		cin>>choice2;
		switch(choice2)
		{
		case 1:	obj.pushback();break;
		case 2: obj.display();break;
		case 3: obj.minimum();break;
		case 4: obj.maximum();break;
		case 5: obj.sorting();break;
		}
		cout<<"\nDO YOU CONTINUE?";
		cin>>ch;	
	}while(ch=='y');
	goto end;
	
c2:
	
	cout<<"\n1.PUSH INTO VECTOR !\n2.DISPLAY!\n3.FIND MINIMUM ! 4.FIND MAXIMUM !\n5.SORT \n";
	do
	{
		cout<<"\nENTER THE CHOICE !";
		cin>>choice2;
		switch(choice2)
		{
		case 1:	obj2.pushback();break;
		case 2: obj2.display();break;
		case 3: obj2.minimum();break;
		case 4: obj2.maximum();break;
		case 5: obj2.sorting();break;
		}
		cout<<"\nDO YOU CONTINUE?";
		cin>>ch;	
	}while(ch=='y');
	goto end;
	
c3:

	cout<<"\n1.PUSH INTO VECTOR !\n2.DISPLAY!\n3.FIND MINIMUM ! 4.FIND MAXIMUM !\n5.SORT \n";
	do
	{
		cout<<"\nENTER THE CHOICE !";
		cin>>choice2;
		switch(choice2)
		{
		case 1:	obj3.pushback();break;
		case 2: obj3.display();break;
		case 3: obj3.minimum();break;
		case 4: obj3.maximum();break;
		case 5: obj3.sorting();break;
		}
		cout<<"\nDO YOU CONTINUE?";
		cin>>ch;	
	}while(ch=='y');
end:
	
	return 0;
}
