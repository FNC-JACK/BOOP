#include<iostream.h>
#include<conio.h>
class minimum
{

private:
int a,b;
public:

void get()
{
cout<<"Enter first Number:";
cin>>a;
cout<<"Enter second Number:";
cin>>b;
}

int min(minimum m){
if(m.a>m.b)
cout<<"Second number is Minimum:"<<b;
else
cout<<"First number is Minimum:"<<a;
return (m.a,m.b);
}
};

int main(){
minimum m;
clrscr();
cout<<"This program shows you which number is minimum.\n";
m.get();
m.min(m);
getch();
return 0;
}