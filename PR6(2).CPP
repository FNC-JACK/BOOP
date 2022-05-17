#include<iostream.h>
#include<conio.h>

class Employee
{
private:
char emp_id;
char emp_name[50];
char emp_dept[20];
public:

void get()
{
cout<<"enter employee id:";
cin>>emp_id;
cout<<"enter employee name:";
cin>>emp_name;
cout<<"enter employee department:";
cin>>emp_dept;
}

void put()
{
cout<<"emp_id=:"<<emp_id<<endl;
cout<<"emp_name:"<<emp_name<<endl;
cout<<"emp_dept:"<<emp_dept<<endl;
}
};
int main()
{
Employee e1[100];
int n;
clrscr();
cout<<"enter number of employee:";
cin>>n;
for(int i=0;i<n;i++)
{
	e1[i].get();
}
for(i=0;i<n;i++)
{
	e1[i].put();
}
getch();
return 0;
}