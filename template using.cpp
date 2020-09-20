
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
queue <char> Q,Q2;
queue <char> q;
stack<float> S,S2,s;
cout<<"\nIMPLEMENTING CHARACTER QUEUE ! ";
cout<<"\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.IS EMPTY? \n5.SIZE\n6.FRONT\n7.BACK\n8.SWAP";
int choice;
char ch;
do
{
cout<<"\nENTER THE CHOICE !";
cin>>choice;
switch(choice)
{
case 1:cout<<"\nENTER ELEMENT TO PUSH INTO QUEUE !";
char t;
cin>>t;
Q.push(t);
break;
case 2:cout<<"\nELEMENT POPPED = "<<Q.front();
    Q.pop();
    break;
case 3:
q = Q;
while(!q.empty())
{
cout<<q.front()<<" ";
q.pop();
}
break;
case 4:
if(!Q.empty())
{
cout<<"\nQUEUE IS NOT EMPTY";
}
else
{
cout<<"\nQUEUE IS  EMPTY !";
}
break;
case 5:
cout<<"\nSIZE OF THE QUEUE = "<<Q.size();
break;
case 6:
cout<<"\nELEMENT AT THE FRONT ="<<Q.front();
break;
case 7:
cout<<"\nELEMENT AT THE REAR ="<<Q.back();
break;
case 8:
Q2.swap(Q);
cout<<"\nswap successful !\ndisplaying second queue!";
q = Q2;
while(!q.empty())
{
cout<<q.front()<<" ";
q.pop();
}
break;
}
cout<<"\nDO YOU CONTINUE ?";
cin>>ch;
}while(ch=='y');




















cout<<"\nIMPLEMENTING STACK USING FLOAT !";
cout<<"\n1.PUSH \n2.POP\n3.TOP\n4.IS EMPTY\n5.SIZE\n6.SWAP\n7.DISPLAY";
int choice2;

do
{
cout<<"\nENTER THE CHOICE!";
cin>>choice2;
switch(choice2)
{
case 1:
cout<<"\nENTER THE ELEMENT TO PUSH INTO THE STACK!";
float cc;
cin>>cc;
S.push(cc);
break;
case 2:
cout<<"\nELEMENT POPPED = "<<S.top();
S.pop();
break;
case 3:
cout<<"\nELEMENT AT THE TOP =" <<S.top();break;
case 4:
if(!S.empty())
{
cout<<"\nSTACK IS NOT EMPTY !";
}
else 
{
cout<<"\nSTACK IS EMPTY !";
}
break;
case 5:
cout<<"\nSIZE OF THE STACK = "<<S.size();break;
case 6:
S2.swap(S);
cout<<"\nSWAP SUCCESSFUL ! DISPLAYING THE SECOND STACK!";
s=S2;
while(!s.empty())
{
cout<<s.top()<<" ";
s.pop();
}
break;
case 7:
s=S;
while(!s.empty())
{
cout<<s.top()<<" ";
s.pop();
}break;

}
cout<<"\nDO YOU CONTINUE ?";
cin>>ch;
}while(ch=='y');






return 0;
}


