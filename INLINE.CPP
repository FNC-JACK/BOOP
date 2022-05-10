#include<iostream.h>
#include<conio.h>
inline float area(float r)
{
return (3.14*r*r);
}
int main()
{
float r;
clrscr();
cout<<"Enter radius:";
cin>>r;
cout<<"Area of circle is:"<<area(r);
getch();
return 0;
}
