#include<iostream.h>
#include<conio.h>
class temp
{
private:
float f;
public:
float c;
temp()
{
cout<<"enter f";
cin>>f;
}
~temp()
{
c=(f-32)*float(5)/9;
cout<<"value of c "<<c;
}
};
int main()
{
temp x;
getch();
return 0;
}
