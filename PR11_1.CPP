#include<iostream.h>
#include<conio.h>
class Account{
public:
float salary;
Account(){
salary=50000;
}
void disp_acc(){
cout<<"Salary:"<<salary<<endl;
}
};
class Programmer: public Account
{
public:
float bonus;
Programmer(){
bonus=25000;
}
void disp_bon(){
cout<<"Bonus:"<<bonus;
}
};
int main(){
Programmer p;
clrscr();
cout<<"Salary:"<<p.salary<<endl;
cout<<"Bonus:"<<p.bonus<<endl;
p.disp_acc();
p.disp_bon();
getch();
return 0;
}
