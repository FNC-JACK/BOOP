#include<iostream.h>
#include<conio.h>
#include<string.h>
class person
{
public:
char name[10];
int age;
person(char name[], int age)
{
strcpy(this->name,name);
this->age=age;
}

person greater(person p)
{
if(p.age>this->age)

return p;

else

return *this;
}

};

int main()
{
person p1("ved",18);
person p2("aman",100);
person p=p1.greater(p2);
cout<<p.name<<p.age<<endl;
return 0;
}



























