#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
class student
{
//	int sno;
	char name;
	public:
		int sno,*marks;
		void* operator new(size_t size)
		{
			//return malloc(size);
		student *ptr=::new student;
		ptr->marks=new int[10];
		return ptr; 
		}
		void operator delete(void *ptr)
		{
	//	free(ptr);
	student* rem=(student*)ptr;
		delete(int*)rem->marks;
		::delete (student*)ptr;
		}
};
int main()
{
		size_t x;
		unsigned long long int y;
	cout<<sizeof(y)<<endl;
	student *obj=new student;
	obj->sno=34;
	cout<<obj->sno;
	delete obj;

	 
	return 0;
}
