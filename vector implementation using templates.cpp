#include<iostream>
using namespace std;
#define MAX 100
template <class T>
class vector_
{
	T arr[MAX];
	int i;
	public:
		vector_()
		{
			i=-1;
		}
		void  push_back_()
		{
			cout<<"\nENTER THE ELEMENT INTO THE VECTOR !";
			T d;
			cin>>d;
			arr[++i]=d;
		}
		void pop_back_()
		{
			T d;
			if(i==-1)
			{
				cout<<"\nVECTOR IS EMPTY!";
			}
			else
			{
			
			d = arr[i--];
			cout<<"\nELEMENT POPPED = "<<d;
		}
		}
		void display()
		{
			cout<<"\n";
			for(int x=0;x<=i;x++)
			{
				cout<<arr[x]<<" ";
			}
		}
		void sort_()
		{
			for(int ind1=0;ind1<i;ind1++)
			{
				for(int j=ind1+1;j<i;j++)
				{
					if(arr[j]<arr[i])
					{
						T temp=arr[j];
						arr[j]=arr[i];
						arr[i]=temp;
					}
				}
			}
		}
		void min_()
		{
			
			cout<<endl<<"MINIMUM ELEMENT ="<<arr[0];
		}
		void max_()
		{
			cout<<endl<<"MAXIMUM ELEMENT = "<<arr[i];
		}
};
int main()
{
	vector_  <int>obj;
	vector_  <char>obj2;
	vector_  <float>obj3;
	cout<<"\n1.INTEGER VECTOR\n2.CHARACTER VECTOR\n3.FLOAT VECTOR";
	int chp;
	cout<<"\nENTER THE CHOICE";
	cin>>chp;
	switch(chp)
	{
		case 1: goto v1;break;
		case 2:goto v2;break;
		case 3:goto v3;break;
	}
	
	
	int choice;
	char ch;
	v1:
		cout<<"\n1.PUSH BACK\n2.POP BACK\n3.DISPLAY\n4.SORT\n5.FIND MAXIMUM \n6.FIND MINIMUM !";
	do
	{
		cout<<"\nENTER THE CHOICE!";
	cin>>choice;
	switch(choice)
	{
		case 1: obj.push_back_();break;
		case 2: obj.pop_back_();break;
		case 3: obj.display();break;
		case 4: obj.sort_();break;
		case 5: obj.max_();break;
		case 6: obj.min_();break;
	}
	cout<<"\nDO YOU CONTINUE?";
	cin>>ch;
}while(ch=='y');
goto end;
v2:
//	cout<<"\n1.PUSH BACK\n2.POP BACK\n3.DISPLAY\n4.SORT\n5.FIND MAXIMUM \n6.FIND MINIMUM !";
			cout<<"\n1.PUSH BACK\n2.POP BACK\n3.DISPLAY\n4.SORT\n5.FIND MAXIMUM \n6.FIND MINIMUM !";
	do
	{
		cout<<"\nENTER THE CHOICE!";
	cin>>choice;
	switch(choice)
	{
		case 1: obj2.push_back_();break;
		case 2: obj2.pop_back_();break;
		case 3: obj2.display();break;
		case 4: obj2.sort_();break;
		case 5: obj2.max_();break;
		case 6: obj2.min_();break;
	}
	cout<<"\nDO YOU CONTINUE?";
	cin>>ch;
}while(ch=='y');
goto end;
v3:
	
			cout<<"\n1.PUSH BACK\n2.POP BACK\n3.DISPLAY\n4.SORT\n5.FIND MAXIMUM \n6.FIND MINIMUM !";
	do
	{
		cout<<"\nENTER THE CHOICE!";
	cin>>choice;
	switch(choice)
	{
		case 1: obj3.push_back_();break;
		case 2: obj3.pop_back_();break;
		case 3: obj3.display();break;
		case 4: obj3.sort_();break;
		case 5: obj3.max_();break;
		case 6: obj3.min_();break;
	}
	cout<<"\nDO YOU CONTINUE?";
	cin>>ch;
}while(ch=='y');
end:
	return 0;
}
