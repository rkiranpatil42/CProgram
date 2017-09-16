#include<stdio.h>
//#include<conio>
int main()
{
int num1=10;
int *ptr1;
int **ptr2;
ptr1=&num1;
ptr2=&ptr1;
printf("%u\n",&num1);
printf("%d\n",*ptr1);
printf("%d\n",*(&num1));
printf("%d\n",num1);
printf("%d\n",**(ptr2));
printf("%u\n",&ptr2);
}



