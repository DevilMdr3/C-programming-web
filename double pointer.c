#include<stdio.h>
int main()
{
int a=98;
int *ptr2;
int **ptr1;
ptr2=&a;
ptr1=&ptr2;
printf("\nValue of a=%d",a);
printf("\nValue of a using single pointer=%d",*ptr2);
printf("\nValue of a using double pointer=%d",**ptr1);
return 0;
}
