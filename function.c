#include<stdio.h>
int add(int x,int y)
{
int m;
m=x+y;
return m;
}
//int add(int x,int y);
int main()
{
int a=10,b=20,sum;
sum=add(a,b);
printf("The sum of %d and %d=%d",a,b,sum);
return 0;
}
