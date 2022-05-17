#include<iostream.h>
#include<conio.h>

class Student
{
private:
int enr;
char name[20];
char co[20];
int m,p,c;
public:

void get()
{
cout<<"enter enrollnment no:";
cin>>enr;
cout<<"enter name:";
cin>>name;
cout<<"enter course:";
cin>>co;
cout<<"enter maths marks:";
cin>>m;
cout<<"enter physics marks:";
cin>>p;
cout<<"enter c language marks:";
cin>>c;
}

void put()
{
cout<<"enr="<<enr<<endl;
cout<<"name="<<name<<endl;
cout<<"co="<<co<<endl;
cout<<"m="<<m<<endl;
cout<<"p="<<p<<endl;
cout<<"c="<<c<<endl;
};
int main()
{
employee e1[100];
int n;
cout<<"enter number:";
cin>>n;
for (i=0;i<n;i++)
e1[i].get()
for(i=0;i<n;i++)
e1[i].put()
getch()
return 0;
}