#include<iostream.h>
#include<conio.h>
void point(int x, int y);
int main()
{
int p,q;
clrscr();
cout<<"enter y corrdinated";
cin>>p;
//cout<<"enter x corrdinated";
//cin>>q;
point(p,q);
getch();
}
void point(int x, int y)
{

cout<<"("<<x<<","<<y<<")"<<endl;
}
