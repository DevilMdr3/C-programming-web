#include<stdio.h>
void modifyValue(int num)
{
num =10;
printf("inside function:%d\n",num);
}
int main()
{
int x=5;
modifyValue(x);
printf("Outside function:%d\n",x);
return 0;
}
