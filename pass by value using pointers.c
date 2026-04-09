#include<stdio.h>
void modifyValue(int *ptr)
{
*ptr=10;
printf("inside function:%d\n",*ptr);
}
int main()
{
int x=5;
modifyValue(&x);
printf("Outside function:%d\n",x);
return 0;
}
