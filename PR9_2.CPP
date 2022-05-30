#include<iostream.h>
#include<conio.h>
class classb;
class classa
{
private:
int numa;
friend class classb;
void display()
{
cout<<numa<<endl;
}
public:
classa(){
numa=15;
}
};
class classb
{
private:
int numb;
public:
classb(){
numb=5;
}
int add(){
classa objecta;
objecta.display();
return objecta.numa + numb;
}
};
int main(){
classb objectb;
clrscr();
cout<<"SUM"<<objectb.add();
getch();
return 0;
}







