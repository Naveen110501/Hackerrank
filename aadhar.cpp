/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
class aadhar
{
    public:
int aadhar_id , mm ,dd,yy;
string name , address;
public:
void aadhare()
{
    cout<<"ENTER THE aadhar_id,MM,DD,YY,NAME,ADDRESS";
    cin>>aadhar_id>>mm>>dd>>yy>>name>>address;
    cout<<"\nNAME = "<<name
        <<"\nAADHAR ID = "<<aadhar_id
        <<"\nDATE OF BIRTH = "<<dd<<" "<<mm<<" "<<yy
        <<"\nADDRESS = "<<address;
}
};



class student_class : public aadhar
{
public:
int roll,marks[3];
public:
void student_classe()
{
    cout<<"enter the roll number and marks of three subjects:(1st internals) ";
    cin>>roll>>marks[0]>>marks[1]>>marks[2];
}
};



class internal_exam:virtual public student_class
{
public:
int int_marks[3] , int_total[3];
public:
void internal_exame()
{
    cout<<"enter the marks of three subjects (2nd internals)";
    cin>>int_marks[0]>>int_marks[1]>>int_marks[2];
}
void calc_internal_total();
};
void internal_exam :: calc_internal_total()
{

int_total[0] =(marks[0] + int_marks[0])/2;
int_total[1] =(marks[1] + int_marks[1])/2;
int_total[2] =(marks[2] + int_marks[2])/2;
//int_total[3] =(marks[3] + int_marks[3])/2;
//int_total[4] =(marks[4] + int_marks[4])/2;	
}





class external_exam  :virtual public student_class
{
public:
int ext_marks[3],ext_total[3];
public:
void external_exame()
{
    cout<<"ENTER THE EXTERNAL MARKS OF THREE subjects";
    cin>>ext_marks[0]>>ext_marks[1]>>ext_marks[2];
}
void calculate_total();
};

void external_exam :: calculate_total()
{
ext_total[0]=  (ext_marks[0]/2);
ext_total[1]=  (ext_marks[1]/2);
ext_total[2]= (ext_marks[2]/2);
//ext_total[3]=  (ext_marks[3]/2);
//ext_total[4]=  (ext_marks[4]/2);
}








class result :  public internal_exam , public external_exam
{
    public:
int cgpa,final_total;
char results;
public:
void tot_fin();
void gpa_calc();
void display();
};
void result ::tot_fin()
{
final_total = int_total[0]+ext_total[0]+
int_total[1]+ext_total[1]
+ int_total[2]+ext_total[2];

//+ int_total[3]+ext_total[3]
//+ int_total[4]+ext_total[4];
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
<<"\nROLL NUMBER = "<<this->roll
<<"\nCGPA = "<<cgpa
<<"\nRESULT GRADE = "<<results;
}
int main()
{
result obj;
obj.aadhare();
obj.student_classe();
obj.internal_exame();
obj.external_exame();
obj.display();
return 0;
}
