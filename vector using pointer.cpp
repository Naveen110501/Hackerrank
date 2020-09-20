#include<iostream>
using namespace std;
#define size 4
template <typename T>
class vector_
{
	T arr[size];
	int itr;
	
	public:
		vector_()
		{
		//	size=x;
			itr=0;
		}
		void getdata()
		{
			T input;
			char ch;
			do
			{
				try
				{
					if(itr>size)
					{
						throw itr;
					}
				}
				catch(int itr)
				{
					cout<<"\nEXCEPTION : INPUT ELEMENTS EXCEEDS THE SIZE OF THE ARRAY !\n";
					break;
				}
				cout<<"\nENTER THE ARRAY ELEMENT !";
				cin>>input;
				arr[itr++]= input;
				//itr++;
				cout<<"\nDO YOU CONTINUE !";
				cin>>ch;
			}while(ch=='y');		
		}
		void display()
		{
			cout<<endl;
			for(int i=0;i<itr;i++)
			{
				cout << arr[i]<<" ";
			}
		}
		void minimum()
		{
			int mini= arr[0];
			for(int i=0;i<itr;i++)
			{
				if(arr[i] < mini)
				{
					mini = arr[i];
				}
			}
			cout<<endl<<"MINIMUM ELEMENT = "<<mini;
		}
		void maximum()
		{
			int maxi=arr[0];
			for(int i=0;i<itr;i++)
			{
				if(arr[i] > maxi)
				{
					maxi  = arr[i];
				}
			}
			cout <<"\nMAXIMUM ELEMENT = "<<maxi;
		}
		
};
int main()
{
	int x;
//	cout<<"ENTER THE SIZE OF THE VECTOR ! ";
//	cin>>x;
	vector_  <int>obj;
	obj.getdata();
	
	obj.display();
	obj.minimum();
	obj.maximum();
	
	return 0;
}
