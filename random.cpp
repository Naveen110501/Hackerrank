#include<iostream>
#include<cstdio>
#include<ctime>
#include<cstdlib>
using namespace std;
class student_class
{
public:
int roll,marks[4];
string name;
public:
void getdetails()
{
cout<<"\nENTER THE STUDENT ROLL NUMBER , MARKS:MATHS,PHYSICS,CHEMISTRY,CS , NAME:";
cin>>roll>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>name;			
}
void putdetails()
{
        cout<<"\nROLL NUMBER = "<<roll<<"\nname  = "<<name<<"\nmarks:"<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<" "<<marks[3]<<" "<<endl;
}

};

class engineering_council : public student_class
{
float cut_off;
int random;
public:
float get_cut_off();
int get_random();
};

float engineering_council:: get_cut_off()
{
cut_off=(marks[0]/2.0) +( marks[1]/4.0) +( marks[2]/4.0);
//random=33;
//cout<<"\nRANDOM = "<<random;
return cut_off;
}

int engineering_council :: get_random()
{
 srand(time(0));  // Initialize random number generator.
   // . . .
    random = (rand() % 1000);



return random;

}

int main()
{
int n,i;
cout<<"ENTER THE TOTAL NUMBER OF STUDENTS :";
cin>>n;
engineering_council obj[n];
for(i=0;i<n;i++)
{
        obj[i].getdetails();
        obj[i].putdetails();
        cout<<"\nCUT-OFF : "<<obj[i].get_cut_off();
     cout<<"\nRANDOM-NUMBER : "<<obj[i].get_random();
}
cout<<"\nDISPLAYINg:\n\n\n\n\n\n\n\n\n\n\n";
for(i=0;i<n;i++)
{
	obj[i].putdetails();
	     cout<<"CUT-OFF : "<<obj[i].get_cut_off();
    
}
return 0;
}
