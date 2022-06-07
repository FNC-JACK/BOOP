#include<iostream.h>
#include<conio.h>
class distance
{
private:
float i,f;
public:
void getdistance(){
cout<<"enter feet";
cin>>f;
cout<<"enter inch";
cin>>i;
}
void getdisplay(distance d1,distance d2){
float feet=d1.f+d2.f;
float inch=d1.i+d2.i;
if(i>12)
{
i=12;
f++;
}
cout<<feet<<"feet "<<inch<<"inch";
}
};
int main()
{
distance d1,d2,d3;
d1.getdistance();
d2.getdistance();
d3.getdisplay(d1,d2);
getch();
return 0;
}
