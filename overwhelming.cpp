#include<iostream>
#include<cstdio>
using namespace std;
class student
{
int roll_no,marks[5];
string name;
public:
float cgp_avg;
void getdetails(int,int,int,int,int,int,string);
void cgpa();
void swap(student);
void display();
friend void swap(student &s1,student &s2)
{
	student temp;
	temp.roll_no=s1.roll_no;
	s1.roll_no=s2.roll_no;
	s2.roll_no=temp.roll_no;
	
	temp.marks[0]=s1.marks[0];
	s1.marks[0]=s2.marks[0];
	s2.marks[0]=temp.marks[0];
	
		temp.marks[1]=s1.marks[1];
	s1.marks[1]=s2.marks[1];
	s2.marks[1]=temp.marks[1];
	
		temp.marks[2]=s1.marks[2];
	s1.marks[2]=s2.marks[2];
	s2.marks[2]=temp.marks[2];
	
		temp.marks[3]=s1.marks[3];
	s1.marks[3]=s2.marks[3];
	s2.marks[3]=temp.marks[3];
	
		temp.marks[4]=s1.marks[4];
	s1.marks[4]=s2.marks[4];
	s2.marks[4]=temp.marks[4];
	
	string temp_name;
	temp_name = s1.name;
	s1.name=s2.name;
	s2.name=temp_name;
	
	float pa=s1.cgp_avg;
	s1.cgp_avg=s2.cgp_avg;
	s2.cgp_avg=pa;
	
}
bool operator > (student s2)
{
	if(cgp_avg > s2.cgp_avg)
	return 1;
	else return  0;
}
bool operator < (student s2)
{
	if(cgp_avg < s2.cgp_avg) return 1;
	else return 0;
}
};
void student:: getdetails (int roll,int marks1,int marks2,int marks3,int marks4,int marks5,string name)
{
this->roll_no=roll;
this->name=name;
marks[0]=marks1;
marks[1]=marks2;
marks[2]=marks3;
marks[3]=marks4;
marks[4]=marks5;
}
void student::display()
{
	cout<<"\nROLL-NUMBER : "<<roll_no
		<<"\nNAME : "<<name
		<<"\nMARKS: "<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<" "<<marks[3]<<" "<<marks[4]
		<<"\nCGPA : "<<cgp_avg<<"\n";
}
void student::cgpa()
{
float cred;

cred=(float) (((marks[0]/10)+1)*4 +((marks[1]/10)+1)*3
+((marks[2]/10)+1)*3 + ((marks[3]/10)+1)*3 + ((marks[4]/10)+1)*3);
cgp_avg=cred/16.0;

//gp_avg=(marks[0]+marks[1]+marks[2] +marks[3]+marks[4])/50.0;
}
int main()
{
int roll,marks[5],n;
cout<<"ENTER THE TOTAL NUMBER OF STUDENTS";
cin>>n;
string name;
student obj[100];
for(int i=0;i<n;i++)
{
cout << "ENTER THE ROLL NUMBER, NAME ,5 SUBJECT MARKS : MATHS , OOPS ,PHYSICS , DIGITAL , EVS ";
cin>>roll;
cin>>name;
cin>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4];
obj[i].getdetails(roll,marks[0],marks[1],marks[2],marks[3],marks[4],name);
obj[i].cgpa();
}
for(int i=0;i<n;i++)
{
	obj[i].display();
	if(obj[i].cgp_avg < 6) cout<<"HE IS FAIL!\n";
}
cout<<"\nENTER TWO STUDENTS TO COMPARE\n";
int compare1,compare2;
cin>>compare1>>compare2;
if(obj[compare1-1] > obj[compare2-1])
{
	cout<<"\nSTUDENT ONE IS BETTER THAN STUDENT TWO\n";
	
}
else cout<<"STUDENT TWO IS BETTER THAN STUDENT ONE\n";
for(int i=0;i<n;i++)
{
	
	for(int j=i+1;j<n;j++)
	{
		if(obj[j]>obj[i])
		{
			//int roll,int marks1,int marks2,int marks3,int marks4,int marks5,string name;
			swap(obj[i],obj[j]);
		 } 
	}
}
cout<<"\nTOPPERS:\n";
for(int i=0;i<3;i++)
{
	obj[i].display();
}
cout<<"LAST THREE : "<<endl;						
for(int i=n-1;i > n-4;i--)
{
	obj[i].display();
}

cout<<"\n\n\n\n";
for(int i=0;i<n;i++)
{
	obj[i].display();
	if(obj[i].cgp_avg < 6) cout<<"HE IS FAIL!\n";
}
return 0;
}
