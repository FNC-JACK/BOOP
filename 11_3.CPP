#include<iostream.h>
#include<conio.h>
class base1
{
public:
int b1;
void show1()
{
cout<<"the value b1 "<<b1;
}
};

class base2
{
public:
int b2;
void show2()
{
cout<<"the value b2 "<<b2;
}
};

class derived:public base1, public base2
{
public:
int d;
void show3()
{
cout<<"the value of d "<<d;
}
};

int main()
{
base1 b1;
base2 b2;
derived x;

clrscr();

b1.b1=5;
b1.show1();

b2.b2=10;
b2.show2();

cout<<"enter the value of b1 "<<endl;
cin>>x.b1;
cout<<"enter the value of b2 "<<endl;
cin>>x.b2;
cout<<"enter the value of derived class "<<endl;
cin>>x.d;

cout<<"value of b1 "<<x.b1<<endl;
cout<<"value of b2 "<<x.b2<<endl;
cout<<"value of d "<<x.d<<endl;
getch();
return 0;
}




















