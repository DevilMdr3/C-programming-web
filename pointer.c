#include<stdio.h>
int main()
{
int a,*p;
a=10;
p=&a;
printf("Value of a=%d",*p);
printf("\nValue of a=%d",*&a);
printf("\nAddress of a=%d",&a);
printf("\nAddress of a=%d",p);
printf("\nAddress of p=%d",&p);
return 0;
}
