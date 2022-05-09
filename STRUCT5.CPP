#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class student
{
public:
student()
{
c++;
}

int r_no;
char name[20];
int age;
char br[10];
static int c;
static void int_c();
static int get_count();
void getdata()
	{
	cout<<"enter roll no :";
	cin>>r_no;
	cout<<"enter name :";
	cin>>name;
	cout<<"enter age";
	cin>>age;
	cout<<"enter branch";
	cin>>br;
	}
void display()
	{
	cout<<"roll no "<<r_no<<endl;
	cout<<"name "<<name<<endl;
	cout<<"age "<<age<<endl;
	cout<<"branch"<<br<<endl;
	}
};
int student::c=0;
int student::get_count(){
return c;
}

int main()
{
int ch;
char yn;
do{
clrscr();
cout<<"press 1 for object.\n"<<"press 2 for count"<<endl;
cout<<"enter your choice"<<endl;
cin>>ch;

switch(ch)
	{
	case 1:
	student s;
	s.getdata();
	s.display();
	break;

	case 2:
	cout<<"total obejct count are :"<<student::get_count()<<endl;
	break;
	}
cout<<"do you want to continue";
cin>>yn;
}while(yn=='Y'|| yn=='y');
return 0;
}
