#include<lib.h>
#include<stdio.h>
struct Student
{
int roll_no;
char name[10];
};
int main()
{
struct Student p*;
p=(struct Student*)malloc(sizeof(struct Student));
*p.roll_no=38;
strcpy(*p.name,"Kiran");
changeptr(p);
printf("%d %s\n",*p);
}
void changeptr(struct Student **p)
{
*p = (Struct Student*)malloc(sizeof(struct Student));
*p.roll_no=10;
strcpy(*P.name,"Shubham");
}

