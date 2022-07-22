#include<conio.h>
#include<iostream.h>
#include<fstream.h>
#include<string.h>


struct student{
int r_no;
char name[20];
int age;
char br[20];
};


int main()
{
student s[10];
ofstream ofs;
ofs.open("test.txt",ios::app);
int i,n;
clrscr();
cout<<"Enter number of Students:";
cin>>n;

cout<<"Enter Student details:"<<endl;
for(i=0;i<n;i++)
{
cout<<"Enter Roll No:";
cin>>s[i].r_no;
cout<<"Enter Name:";
cin>>s[i].name;
cout<<"Enter Age:";
cin>>s[i].age;
cout<<"Enter Branch:";
cin>>s[i].br;
}
cout<<"Display Student details:"<<endl;
for(i=0;i<n;i++)
{
cout<<"Student Roll_No:"<<s[i].r_no<<endl;
ofs<<s[i].r_no<<" ";
cout<<"Student Name:"<<s[i].name<<endl;
ofs<<s[i].name<<" ";
cout<<"Student Age:"<<s[i].age<<endl;
ofs<<s[i].age<<" ";
cout<<"Student Branch:"<<s[i].br<<endl;
ofs<<s[i].br<<" ";
cout<<endl;
}
ofs.close();

ifstream ifs("test.txt");
int r_no,sr;
char name[20];
int age;
char br[20];
cout<<"Enter Roll No to be searched:";
cin>>sr;
for(i=0;i<n;i++)
	{
	ifs>>r_no;
	if(r_no==sr)
		{
		cout<<"Roll No: "<<r_no<<endl;
		ifs>>name;
		cout<<"Name: "<<name<<endl;
		ifs>>age;
		cout<<"Age: "<<age<<endl;
		ifs>>br;
		cout<<"Branch "<<br<<endl;
	}
	else
		{
		ifs>>name;
		ifs>>age;
		ifs>>br;
		}
	}


ifs.close();

return 0;
}