#include<stdio.h>
void changeptr(int **);
int main()
{
int num;
num =10;
int *ptr;
ptr =&num;
printf("%d\n",*ptr);
changeptr(&ptr);
printf("%d\n",*ptr);
}
void changeptr(int **p)
{
int num2=20;
 *p=&num2;
}


