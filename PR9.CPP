#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class mark;
class student
{
public:
student ()
{

}
int r_no;
char name[20];
int age;
char br[20];



void getdata()
{
cout<<"enter roll no";
cin>>r_no;
cout<<"enter name";
cin>>name;
cout<<"enter age";
cin>>age;
cout<<"enter branch";
cin>>br;
}
friend void display(student a, mark b)

};
class mark
{
public:
int p;
int m;
int c;
void getmark()
{
cout<<"mark of physic:";
 cin>>p;
cout<<"mark of maths:";
cin>>m;
cout<<"mark of computer:";
cin>>c;
}
friend void display(student x,  mark y)
};
void display(student x,mark y)
{
cout<<x.r_no<<endl;
cout<<x.name<<endl;
cout<<x.age<<endl;
cout<<x.br<<endl;
cout<<y.p<<endl;
cout<<y.m<<endl;
cout<<y.c<<endl;
}


int main()
{
int ch;
char yn;
do{
clrscr();
cout<<"press 1 to creat object.\n"<<"press 2 count"<<endl;
cout<<"enter your choice"<<endl;
cin>>ch;
switch (ch)
{
case 1:
student s;
mark  b;
s.getdata();
b.getmark();

break;
case 2:
display(s,b);
break;



}
cout<<"do you wish to continue?";
cin>>yn;
}
while(yn=='Y'|| yn=='y');
return 0;
}





















































































































































