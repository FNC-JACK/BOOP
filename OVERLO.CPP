#include<iostream.h>
#include<conio.h>

float r;
float area(float r)
{
return(r*r*3.14);
}
float area(float l, float b)
{
return l*b;
}


int main()
{
clrscr();
float r;
cout<<"enter value of r - ";
cin>>r;
cout<<"the area of circle"<<area(r)<<endl;
float l,b;
cout<<"enter value of l - ";
cin>>l;
cout<<"enter value of b - ";
cin>>b;
cout<<"area of rectangle"<<area(l,b)<<endl;
getch()
return 0;
}

