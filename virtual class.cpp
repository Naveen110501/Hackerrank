#include<iostream>
using namespace std;
class aadhar
{
	protected:
		int aadhar_id , mm ,dd,yy;
		string name , address;
	public:
		aadhar(int aadhar , int d,int m, int y,string name,string address)
			{
				this->aadhar_id=aadhar;
				this->dd=d;
				this->mm=m;
				this->yy=y;
				this->name=name;
				this->address=address;
			}
};
class student_class : public aadhar
{
	protected:
	int roll,marks[5];
	public:
		student_class(int roll , int m1,int m2 , int m3, int m4,int m5)
		{
			this->roll=roll;
			this->marks[0]=m1;
			this->marks[1]=m2;
			marks[2]=m3;
			marks[3]=m4;
			marks[4]=m5;
		}
};
class internal_exam:public virtual student_class
{
	protected:
	int int_marks[5] , int_total[5];
	public:
		internal_exam(int m1,int m2,int m3,int m4,int m5)
		{
			int_marks[0]=m1;
			int_marks[1]=m2;
			int_marks[2]=m3;
			int_marks[3]=m4;
			int_marks[4]=m5;
		}
		void calc_internal_total();
};
void internal_exam :: calc_internal_total()
{
	
	int_total[0] =(marks[0] + int_marks[0])/2;
	int_total[1] =(marks[1] + int_marks[1])/2;
	int_total[2] =(marks[2] + int_marks[2])/2;
	int_total[3] =(marks[3] + int_marks[3])/2;
	int_total[4] =(marks[4] + int_marks[4])/2;	
	 
}
class external_exam  :public virtual student_class
{
	protected:
	int ext_marks[5],ext_total[5];
	public:
		external_exam(int m1,int m2,int m3,int m4,int m5)
		{
			ext_marks[0]=m1;
			ext_marks[1]=m2;
			ext_marks[2]=m3;
			ext_marks[3]=m4;
			ext_marks[4]=m5;
			//this->
		}
		void calculate_total();
};
void external_exam :: calculate_total()
{
	ext_total[0]=  (ext_marks[0]/2);
	ext_total[1]=  (ext_marks[1]/2);
	ext_total[2]= (ext_marks[2]/2);
	ext_total[3]=  (ext_marks[3]/2);
	ext_total[4]=  (ext_marks[4]/2);
}
class result :  public internal_exam , public external_exam
{
	int cgpa,final_total;
	char results;
	public:
		result(string name,int id,int dd,int mm,int yy,string address,int rol,int m[0],int m[1],int m[2],int m[3],int m[4],int m[5],int m[6],int m[7],int m[8],int m[9],int m[10],int m[11],int m[12],int m[13],int m[14]):
		aadhar(int id , int dd,int mm, int yy,string name,string address) ,
		student_class(int rol , int m[0],int m[1] , int m[2], int m[3],int m[4]),
		internal_exam(int m[5],int m[6],int m[7],int m[8],int m[9])	,
			external_exam(int m[10],int m[11],int m[12],int m[13],int m[14])
			{
				
			}
		
		
		void tot_fin();
		void gpa_calc();
		void display();
};
void result ::tot_fin()
{
	final_total = int_total[0]+ext_total[0]
				+ int_total[1]+ext_total[1]
				+ int_total[2]+ext_total[2]
				+ int_total[3]+ext_total[3]
				+ int_total[4]+ext_total[4];
}
void result :: gpa_calc()
{
	cgpa = (((int_total[0]+ext_total[0])/10*4)+
				((int_total[1]+ext_total[1])/10*3)+
				((int_total[2]+ext_total[2])/10*3)+
				((int_total[3]+ext_total[3] )/10*3)+
				((int_total[4]+ext_total[4])/10*3))/18;
}
void result::display()
{
	calc_internal_total();
	calculate_total();
	tot_fin();
	gpa_calc();
	cout<<"\nNAME = "<<name
		<<"\nAADHAR ID = "<<aadhar_id
		<<"\nDATE OF BIRTH = "<<dd<<" "<<mm<<" "<<yy
		<<"\nADDRESS = "<<address
		<<"\nROLL NUMBER = "<<this->roll;
		<<"\nCGPA = "<<cgpa
		<<"\nRESULT GRADE = "<<results;
}
int main()
{
	cout<<"\nENTER THE AADHAR DETAILS: AADHAR ID ,DD,MM,YY,ADDRESS,NAME";
	int id,dd,mm,yy,address;
	string name;
	cin>>id>>dd>>mm>>yy>>address>>name;
	
	cout<<"\nENTER THE ROLL NUMBER";
	int ro;
	cin>>ro;
	int m[15];
	cout<<"\nENTER THE INTERNAL MARKS 1";
	cin>>m[0]>>m[1]>>m[2]>>m[3]>>m[4];
	cout<<"\nENTER THE INTERNAL MARKS 2" ;
	cin>>m[5]>>m[6]>>m[7]>>m[8]>>m[9];
	cout<<"\nENTER THE EXTERNAL MARKS : ";
	cin>>m[10]>>m[11]>>m[12]>>m[13]>>m[14];
	
	result obj(name,id,dd,mm,yy,address,ro,m[0],m[1],m[2],m[3],m[4],m[5],m[6],m[7],m[8],m[9],m[10],m[11],m[12],m[13],m[14]);
	obj.display();
	return 0;
}
